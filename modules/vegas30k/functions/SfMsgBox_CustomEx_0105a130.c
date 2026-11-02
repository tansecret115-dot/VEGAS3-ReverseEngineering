/* Module: vegas30k.dll
   Function: SfMsgBox_CustomEx
   Address: 0105a130
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR SfMsgBox_CustomEx(HWND param_1,uint param_2,uchar *param_3,undefined4 param_4,int param_5,
                         uchar *param_6)

{
  uchar uVar1;
  uchar *lpsz;
  INT_PTR IVar2;
  int iVar3;
  uint *puVar4;
  uchar local_828 [2048];
  uint local_28;
  uchar *local_24;
  uchar *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
                    /* 0x5a130  1144  SfMsgBox_CustomEx */
  GetCurrentThreadId();
  local_8 = param_2 & 0xc000;
  if ((local_8 != 0) && (param_3 == (uchar *)0x0)) {
    return 0;
  }
  if (((param_2 & 0x1000) != 0) && (param_5 == 0)) {
    return 0;
  }
  if (param_1 == (HWND)0x0) {
    if (DAT_0120e5d4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0120e5d4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  uVar1 = *param_6;
  lpsz = param_6;
  do {
    if (uVar1 == '\0') {
LAB_0105a1d4:
      puVar4 = &local_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_28 = param_2;
      local_c = param_5;
      local_20 = param_3;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = param_4;
      local_24 = param_6;
      if (DAT_0120e5d8 != (code *)0x0) {
        if (local_8 != 0) {
          lstrlenA(PTR_s__r_n_____DETAILS_END______01206114);
          lstrlenA(PTR_s__r_n_____DETAILS_START______r_n_01206110);
          lstrlenA((LPCSTR)local_20);
          lstrlenA((LPCSTR)local_24);
          FUN_01002100();
          _mbscpy(&stack0xfffff7cc,local_24);
          _mbscat(&stack0xfffff7cc,PTR_s__r_n_____DETAILS_START______r_n_01206110);
          _mbscat(&stack0xfffff7cc,local_20);
          _mbscat(&stack0xfffff7cc,PTR_s__r_n_____DETAILS_END______01206114);
          param_6 = &stack0xfffff7cc;
        }
        iVar3 = (*DAT_0120e5d8)(DAT_0120e5dc,param_1,param_6,&DAT_0120e5e0,local_28);
        if (iVar3 != -1) {
          return iVar3;
        }
      }
      IVar2 = DialogBoxIndirectParamA
                        (DAT_0120e5d0,(LPCDLGTEMPLATEA)PTR_DAT_0120608c,param_1,FUN_01059ec0,
                         (LPARAM)&local_28);
      return IVar2;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      _SfVPrintF_12(local_828,param_6,&stack0x0000001c);
      param_6 = local_828;
      goto LAB_0105a1d4;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


