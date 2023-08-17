set -e

VERSION=${1:-'2.31.1'}

WRAPPER=${2:-${CI_TOOLS_GRADLE_WRAPPER_VERSION:-'5.6.4'}}

echo "[INFO] Citools - Installation started - Version $VERSION"

rm -rf ci/citools

CI_TOOLS_REMOTE_INSTALL_SCRIPT_PATH="release-generic/citools/install-scripts"
CI_TOOLS_REMOTE_WRAPPER_PATH="release-generic/citools/wrapper"
CI_TOOLS_LOCAL_PATH="ci/citools/bin/citools"
GRADLE_BUILD_TEMPLATE_LOCAL_PATH="ci/citools/bin/gradle-build-template.gradle"
GRADLE_BUILD_PROPERTIES_LOCAL_PATH="ci/citools/gradle.properties"
#This MUST match the variable for gradle-pipelinetools-plugin in GRADLE_BUILD_TEMPLATE_LOCAL_PATH
CI_TOOLS_VERSION_REPLACEMENT="###CITOOLS_VERSION###"


jfrog rt dl --recursive "$CI_TOOLS_REMOTE_WRAPPER_PATH/$WRAPPER/" ci/
mv ci/citools/wrapper/$WRAPPER/* ci/citools/

jfrog rt dl "$CI_TOOLS_REMOTE_INSTALL_SCRIPT_PATH/citools/" $CI_TOOLS_LOCAL_PATH --flat=true --sort-by=created --sort-order=desc --limit=1

jfrog rt dl "$CI_TOOLS_REMOTE_INSTALL_SCRIPT_PATH/gradle-build-template/" $GRADLE_BUILD_TEMPLATE_LOCAL_PATH --flat=true --sort-by=created --sort-order=desc --limit=1
sed "s/$CI_TOOLS_VERSION_REPLACEMENT/$VERSION/" $GRADLE_BUILD_TEMPLATE_LOCAL_PATH > ci/citools/gpt.gradle

jfrog rt dl "$CI_TOOLS_REMOTE_INSTALL_SCRIPT_PATH/gradle-properties/" $GRADLE_BUILD_PROPERTIES_LOCAL_PATH --flat=true --sort-by=created --sort-order=desc --limit=1
# set up permissions
chmod +x ci/citools/bin/*
chmod +x ci/citools/gradlew

echo "[INFO] Citools - Installation finished"
