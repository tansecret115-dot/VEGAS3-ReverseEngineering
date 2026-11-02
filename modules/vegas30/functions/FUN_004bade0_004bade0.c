/* Module: vegas30.exe
   Function: FUN_004bade0
   Address: 004bade0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004bade0(uchar *param_1,int param_2,uchar *param_3,uchar *param_4)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  uchar *lpsz;
  uchar *puVar4;
  uchar *_Source;
  uchar *local_4;
  
  iVar2 = lstrlenA((LPCSTR)param_3);
  iVar3 = lstrlenA((LPCSTR)param_4);
  iVar3 = iVar2 + 2 + iVar3;
  if (param_2 < iVar3) {
    return 0x80070057;
  }
  uVar1 = *param_3;
  lpsz = param_3;
  while ((uVar1 != '\0' && (uVar1 != '\t'))) {
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  }
  uVar1 = *param_3;
  local_4 = param_3;
  while ((uVar1 != '\0' && (uVar1 != ':'))) {
    local_4 = (uchar *)CharNextA((LPCSTR)local_4);
    uVar1 = *local_4;
  }
  puVar4 = param_1;
  _Source = param_3;
  param_1 = lpsz;
  param_3 = (uchar *)iVar3;
  if (lpsz != local_4) {
    do {
      if (param_1 < local_4) {
        if (param_2 < (int)param_3 + 1) {
          return 0x80070057;
        }
        iVar3 = (int)param_1 - (int)_Source;
        lstrcpynA((LPSTR)puVar4,(LPCSTR)_Source,iVar3 + 1);
        puVar4[iVar3] = '\0';
        puVar4 = puVar4 + iVar3;
        _mbscat(puVar4,"\t\t");
        _Source = param_1 + 1;
        uVar1 = *_Source;
        param_1 = _Source;
        while ((uVar1 != '\0' && (uVar1 != '\t'))) {
          param_1 = (uchar *)CharNextA((LPCSTR)param_1);
          uVar1 = *param_1;
        }
      }
      else {
        if (param_2 < (int)param_3 + 1) {
          return 0x80070057;
        }
        iVar3 = (int)local_4 - (int)_Source;
        lstrcpynA((LPSTR)puVar4,(LPCSTR)_Source,iVar3 + 1);
        puVar4[iVar3] = '\0';
        puVar4 = puVar4 + iVar3;
        _mbscat(puVar4,"\t:");
        _Source = local_4 + 1;
        uVar1 = local_4[1];
        local_4 = _Source;
        while ((uVar1 != '\0' && (uVar1 != ':'))) {
          local_4 = (uchar *)CharNextA((LPCSTR)local_4);
          uVar1 = *local_4;
        }
      }
      param_3 = (uchar *)((int)param_3 + 1);
      puVar4 = puVar4 + 2;
    } while (param_1 != local_4);
  }
  _mbscpy(puVar4,_Source);
  iVar3 = lstrlenA((LPCSTR)_Source);
  puVar4[iVar3] = ':';
  _mbscpy(puVar4 + iVar3 + 1,param_4);
  return 0;
}


