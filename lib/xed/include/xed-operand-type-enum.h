/*BEGIN_LEGAL 

Copyright (c) 2019 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
/// @file xed-operand-type-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_OPERAND_TYPE_ENUM_H)
# define XED_OPERAND_TYPE_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_OPERAND_TYPE_INVALID,
  XED_OPERAND_TYPE_ERROR,
  XED_OPERAND_TYPE_IMM,
  XED_OPERAND_TYPE_IMM_CONST,
  XED_OPERAND_TYPE_NT_LOOKUP_FN,
  XED_OPERAND_TYPE_NT_LOOKUP_FN2,
  XED_OPERAND_TYPE_NT_LOOKUP_FN4,
  XED_OPERAND_TYPE_REG,
  XED_OPERAND_TYPE_LAST
} xed_operand_type_enum_t;

/// This converts strings to #xed_operand_type_enum_t types.
/// @param s A C-string.
/// @return #xed_operand_type_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_type_enum_t str2xed_operand_type_enum_t(const char* s);
/// This converts strings to #xed_operand_type_enum_t types.
/// @param p An enumeration element of type xed_operand_type_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_operand_type_enum_t2str(const xed_operand_type_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_operand_type_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_type_enum_t xed_operand_type_enum_t_last(void);
#endif
