/* Module: sfnetmedia.dll
   Function: FUN_0041ffa0
   Address: 0041ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ffa0(HWND param_1,int *param_2,LPCSTR param_3,int param_4)

{
  BYTE *pBVar1;
  WCHAR local_208 [260];
  
  if (*param_3 == '\0') {
    if (param_2 != (int *)0x0) {
      local_208[0] = L'\0';
      (**(code **)(*param_2 + 0x34))(param_2,local_208,0x104);
      if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_208,-1,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (param_3 != (LPCSTR)0x0) {
        *param_3 = '\0';
      }
      param_3[param_4 + -1] = '\0';
    }
    if (*param_3 == '\0') {
      return;
    }
  }
  FUN_00413050(param_3);
  pBVar1 = FUN_00419120(DAT_00441d60,0x1146);
  FUN_00417320(param_1,pBVar1);
  return;
}


