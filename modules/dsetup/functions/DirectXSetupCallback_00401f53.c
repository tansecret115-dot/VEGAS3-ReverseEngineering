/* Module: dsetup.dll
   Function: DirectXSetupCallback
   Address: 00401f53
   Source: Ghidra pseudocode (Stage 10 batch) */


int DirectXSetupCallback
              (uint param_1,uint param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  CHAR local_108 [260];
  
                    /* 0x1f53  12  DirectXSetupCallback */
  FUN_00401e93();
  if ((DAT_0040aa68 != (code *)0x0) &&
     (((param_1 < 1000 || ((DAT_0040aa6e & 4) != 0)) &&
      (iVar1 = (*DAT_0040aa68)(param_1,param_2,param_3,param_4,param_5), iVar1 != 0)))) {
    return iVar1;
  }
  if (param_1 == 0x3ed) {
    SetFocus(DAT_0040aa70);
  }
  else if ((param_1 != 0) && (param_3 != (LPCSTR)0x0)) {
    if (param_2 != 0) {
      if ((param_1 == 0xb) && ((DAT_0040aa6f & 0x10) == 0)) {
        iVar1 = FUN_00401edc(param_2);
        return iVar1;
      }
      (*DAT_0040aa88)(1000,local_108,0x104);
      iVar1 = MessageBoxA(DAT_0040aa64,param_3,local_108,param_2);
      return iVar1;
    }
    if (DAT_0040aa70 == (HWND)0x0) {
      DAT_0040aa70 = CreateDialogParamA(DAT_0040aa5c,(LPCSTR)0x64,DAT_0040aa64,
                                        (DLGPROC)&LAB_00401e8e,0);
    }
    SetDlgItemTextA(DAT_0040aa70,0xfa1,param_3);
  }
  return 1;
}


