/* Module: sfpublish.dll
   Function: FUN_004043c0
   Address: 004043c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004043c0(LPWSTR param_1,uint *param_2,LPCSTR param_3,uint param_4,undefined4 *param_5)

{
  uint cchWideChar;
  
  if (param_2 != (uint *)0x0) {
    cchWideChar = *param_2;
    if ((param_4 <= cchWideChar) && (param_1 != (LPWSTR)0x0)) {
      if (param_3 != (LPCSTR)0x0) {
        MultiByteToWideChar(0,1,param_3,-1,param_1,cchWideChar);
        param_1[cchWideChar - 1] = L'\0';
        *param_2 = param_4;
        return;
      }
      *param_1 = L'\0';
      *param_2 = param_4;
      return;
    }
    *param_5 = 0x8004e03c;
    *param_2 = param_4;
  }
  return;
}


