/* Module: mcplugrw.dll
   Function: FUN_00422800
   Address: 00422800
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR __cdecl FUN_00422800(HWND param_1,uint param_2,uchar *param_3,uchar *param_4)

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
    if (DAT_004a9904 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_004a9904);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  uVar1 = *param_4;
  lpsz = param_4;
  do {
    if (uVar1 == '\0') {
LAB_00422889:
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
      if (DAT_004a9908 != (code *)0x0) {
        if (local_8 != 0) {
          lstrlenA(PTR_s__r_n_____DETAILS_END______004a5da4);
          lstrlenA(PTR_s__r_n_____DETAILS_START______r_n_004a5da0);
          lstrlenA((LPCSTR)local_20);
          lstrlenA((LPCSTR)local_24);
          FUN_0048b360();
          _mbscpy(&stack0xfffff7cc,local_24);
          _mbscat(&stack0xfffff7cc,PTR_s__r_n_____DETAILS_START______r_n_004a5da0);
          _mbscat(&stack0xfffff7cc,local_20);
          _mbscat(&stack0xfffff7cc,PTR_s__r_n_____DETAILS_END______004a5da4);
          param_4 = &stack0xfffff7cc;
        }
        iVar3 = (*DAT_004a9908)(DAT_004a990c,param_1,param_4,&DAT_004a9910,local_28);
        if (iVar3 != -1) {
          return iVar3;
        }
      }
      IVar2 = DialogBoxIndirectParamA
                        (DAT_004a9900,(LPCDLGTEMPLATEA)PTR_DAT_004a5d1c,param_1,
                         (DLGPROC)&LAB_004223d0,(LPARAM)&local_28);
      return IVar2;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      FUN_00420660(local_828,param_4,(uint *)&stack0x00000014);
      param_4 = local_828;
      goto LAB_00422889;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


