#ifndef PID_CONTROLLER_CODEGEN_MARCH9_2023A__VISIBILITY_CONTROL_H_
#define PID_CONTROLLER_CODEGEN_MARCH9_2023A__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_EXPORT __attribute__ ((dllexport))
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_IMPORT __attribute__ ((dllimport))
  #else
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_EXPORT __declspec(dllexport)
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_IMPORT __declspec(dllimport)
  #endif
  #ifdef PID_CONTROLLER_CODEGEN_MARCH9_2023A_BUILDING_LIBRARY
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC PID_CONTROLLER_CODEGEN_MARCH9_2023A_EXPORT
  #else
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC PID_CONTROLLER_CODEGEN_MARCH9_2023A_IMPORT
  #endif
  #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC_TYPE PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC
  #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_LOCAL
#else
  #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_EXPORT __attribute__ ((visibility("default")))
  #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_IMPORT
  #if __GNUC__ >= 4
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC __attribute__ ((visibility("default")))
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC
    #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_LOCAL
  #endif
  #define PID_CONTROLLER_CODEGEN_MARCH9_2023A_PUBLIC_TYPE
#endif
#endif  // PID_CONTROLLER_CODEGEN_MARCH9_2023A__VISIBILITY_CONTROL_H_
// Generated 09-Mar-2024 10:59:43
// Copyright 2019-2020 The MathWorks, Inc.