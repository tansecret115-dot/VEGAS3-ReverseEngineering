/* Module: vegas30.exe
   Function: FUN_0052e8f0
   Address: 0052e8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052e8f0(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uchar *lpsz;
  uint uVar2;
  uchar *lpsz_00;
  int local_18;
  uchar local_14 [20];
  
  local_18 = 1;
  uVar1 = *param_2;
  while( true ) {
    if (uVar1 == '\0') {
      local_14[0] = '\0';
      _mbscpy(param_1,local_14);
      return;
    }
    do {
      param_2 = (uchar *)CharNextA((LPCSTR)param_2);
    } while (*param_2 != '\0');
    lpsz_00 = param_2 + 1;
    uVar2 = 0;
    lpsz = local_14;
    uVar1 = param_2[1];
    while ((uVar1 != '.' && (uVar1 != '\0'))) {
      lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz_00);
      uVar1 = *lpsz_00;
    }
    uVar1 = *lpsz_00;
    while (uVar1 != '\0') {
      lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz_00);
      if (uVar2 < 0x12) {
        *lpsz = *lpsz_00;
        lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
        uVar2 = uVar2 + 1;
      }
      uVar1 = *lpsz_00;
    }
    *lpsz = '\0';
    if (param_3 == local_18) break;
    uVar1 = lpsz_00[1];
    local_18 = local_18 + 1;
    param_2 = lpsz_00 + 1;
  }
  _mbscpy(param_1,local_14);
  return;
}


