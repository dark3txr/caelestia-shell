# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "plugin/src/Caelestia/CMakeFiles/caelestia_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/CMakeFiles/caelestia_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/CMakeFiles/caelestiaplugin_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/CMakeFiles/caelestiaplugin_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Internal/CMakeFiles/caelestia-internal_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Internal/CMakeFiles/caelestia-internal_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Internal/CMakeFiles/caelestia-internalplugin_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Internal/CMakeFiles/caelestia-internalplugin_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Internal/caelestia-internal_autogen"
  "plugin/src/Caelestia/Internal/caelestia-internalplugin_autogen"
  "plugin/src/Caelestia/Models/CMakeFiles/caelestia-models_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Models/CMakeFiles/caelestia-models_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Models/CMakeFiles/caelestia-modelsplugin_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Models/CMakeFiles/caelestia-modelsplugin_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Models/caelestia-models_autogen"
  "plugin/src/Caelestia/Models/caelestia-modelsplugin_autogen"
  "plugin/src/Caelestia/Services/CMakeFiles/caelestia-services_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Services/CMakeFiles/caelestia-services_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Services/CMakeFiles/caelestia-servicesplugin_autogen.dir/AutogenUsed.txt"
  "plugin/src/Caelestia/Services/CMakeFiles/caelestia-servicesplugin_autogen.dir/ParseCache.txt"
  "plugin/src/Caelestia/Services/caelestia-services_autogen"
  "plugin/src/Caelestia/Services/caelestia-servicesplugin_autogen"
  "plugin/src/Caelestia/caelestia_autogen"
  "plugin/src/Caelestia/caelestiaplugin_autogen"
  )
endif()
