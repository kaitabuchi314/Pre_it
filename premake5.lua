workspace "Pre_it"
   configurations { "Debug", "Release" }

project "Prer"
   location "Prer"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "**.h", "**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "RELEASE" }
      optimize "On"