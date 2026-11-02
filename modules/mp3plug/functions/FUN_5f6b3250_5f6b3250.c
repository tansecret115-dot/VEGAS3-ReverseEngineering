/* Module: mp3plug.dll
   Function: FUN_5f6b3250
   Address: 5f6b3250
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR __cdecl FUN_5f6b3250(HWND param_1,uint param_2,uchar *param_3,uchar *param_4)

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
  undefined4 local_c;
  uint local_8;
  
  GetCurrentThreadId();
  local_8 = param_2 & 0xc000;
  if ((local_8 != 0) && (param_3 == (uchar *)0x0)) {
    return 0;
  }
  if (param_1 == (HWND)0x0) {
    if (DAT_5f74d494 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5f74d494);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  uVar1 = *param_4;
  lpsz = param_4;
  do {
    if (uVar1 == '\0') {
LAB_5f6b32d9:
      puVar4 = &local_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_28 = param_2;
      local_20 = param_3;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_24 = param_4;
      if (DAT_5f74d498 != (code *)0x0) {
        if (local_8 != 0) {
          lstrlenA(DAT_5f73df74);
          lstrlenA(PTR_s__r_n_____DETAILS_START______r_n_5f73df70);
          lstrlenA((LPCSTR)local_20);
          lstrlenA((LPCSTR)local_24);
          FUN_5f72a200();
          _mbscpy(&stack0xfffff7cc,local_24);
          _mbscat(&stack0xfffff7cc,PTR_s__r_n_____DETAILS_START______r_n_5f73df70);
          _mbscat(&stack0xfffff7cc,local_20);
          _mbscat(&stack0xfffff7cc,(uchar *)DAT_5f73df74);
          param_4 = &stack0xfffff7cc;
        }
        iVar3 = (*DAT_5f74d498)(DAT_5f74d49c,param_1,param_4,&DAT_5f74d4a0,local_28);
        if (iVar3 != -1) {
          return iVar3;
        }
      }
      IVar2 = DialogBoxIndirectParamA
                        (DAT_5f74d490,(LPCDLGTEMPLATEA)PTR_DAT_5f73deec,param_1,
                         (DLGPROC)&LAB_5f6b2e20,(LPARAM)&local_28);
      return IVar2;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      FUN_5f6b10b0(local_828,param_4,(uint *)&stack0x00000014);
      param_4 = local_828;
      goto LAB_5f6b32d9;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


