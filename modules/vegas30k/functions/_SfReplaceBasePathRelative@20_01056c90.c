/* Module: vegas30k.dll
   Function: _SfReplaceBasePathRelative@20
   Address: 01056c90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfReplaceBasePathRelative_20
               (uchar *param_1,LPCSTR param_2,uchar *param_3,LPSTR param_4,uint param_5)

{
  uchar uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uchar *lpsz;
  LPCSTR lpsz_00;
  int iVar5;
  int iVar6;
  uchar local_104 [260];
  
                    /* 0x56c90  1186  _SfReplaceBasePathRelative@20 */
  iVar6 = 0;
  uVar1 = *param_1;
  lpsz = param_1;
  lpsz_00 = param_2;
  while ((uVar1 != '\0' && (cVar2 = *lpsz_00, cVar2 != '\0'))) {
    uVar3 = _mbctoupper((int)(char)*lpsz);
    uVar4 = _mbctoupper((int)cVar2);
    if (uVar3 != uVar4) break;
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    lpsz_00 = CharNextA(lpsz_00);
    uVar1 = *lpsz;
    iVar6 = iVar6 + 1;
  }
  iVar5 = lstrlenA(param_2);
  if (iVar6 != iVar5) {
    *param_4 = '\0';
    return 0x80004005;
  }
  _mbscpy(local_104,param_3);
  while ((iVar6 != 0 && (*param_1 != '\0'))) {
    param_1 = (uchar *)CharNextA((LPCSTR)param_1);
    iVar6 = iVar6 + -1;
  }
  iVar6 = lstrlenA((LPCSTR)param_1);
  iVar5 = lstrlenA((LPCSTR)local_104);
  if ((uint)(iVar6 + 1 + iVar5) < 0x105) {
    _mbscat(local_104,param_1);
    lstrcpynA(param_4,(LPCSTR)local_104,param_5);
    param_4[param_5 - 1] = '\0';
    iVar6 = lstrlenA((LPCSTR)local_104);
    return -(uint)(param_5 < iVar6 + 1U) & 0x80004005;
  }
  *param_4 = '\0';
  return 0x80004005;
}


