/* Module: mcplugrw.dll
   Function: FUN_0040b060
   Address: 0040b060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b060(uchar *param_1,uchar *param_2,int param_3)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uchar *lpsz;
  uchar *puVar5;
  int local_18;
  uchar local_14 [20];
  
  local_18 = 0;
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
    lpsz = param_2 + 1;
    uVar4 = 0;
    puVar5 = local_14;
    uVar1 = param_2[1];
    while ((uVar1 != '.' && (uVar1 != '\0'))) {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    uVar1 = *lpsz;
    while (uVar1 != '\0') {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      if (uVar4 < 0x12) {
        puVar2 = (uchar *)CharNextA((LPCSTR)lpsz);
        for (puVar3 = lpsz; puVar3 != puVar2; puVar3 = puVar3 + 1) {
          *puVar5 = *puVar3;
          puVar5 = puVar5 + 1;
        }
        uVar4 = uVar4 + 1;
      }
      uVar1 = *lpsz;
    }
    *puVar5 = '\0';
    if (param_3 == local_18) break;
    uVar1 = lpsz[1];
    local_18 = local_18 + 1;
    param_2 = lpsz + 1;
  }
  _mbscpy(param_1,local_14);
  return;
}


