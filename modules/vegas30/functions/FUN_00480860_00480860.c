/* Module: vegas30.exe
   Function: FUN_00480860
   Address: 00480860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00480860(int param_1,LPCSTR param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  LPCSTR lpsz;
  LPCSTR local_108;
  uchar local_104 [260];
  
  uVar2 = _SfGetRootPathFromFilePath_12(param_1,param_2,param_3);
  if ((((uVar2 < 3) || (DVar3 = GetFileAttributesA(param_2), DVar3 == 0xffffffff)) ||
      ((DVar3 & 0x10) == 0)) ||
     (((DVar3 & 1) != 0 || (iVar4 = _SfGetDiskFreeSpace_8(param_2,0x400), iVar4 == 0)))) {
    return 0;
  }
  local_108 = (LPCSTR)(uVar2 + param_1);
  while( true ) {
    cVar1 = *local_108;
    lpsz = local_108;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    iVar4 = (int)lpsz - (int)local_108;
    if (iVar4 == 0) break;
    lstrcpynA((LPSTR)local_104,local_108,iVar4 + 1);
    local_104[iVar4] = '\0';
    _SfValidateFileName_8(local_104,1);
    _mbscpy((uchar *)(param_2 + uVar2),local_104);
    uVar2 = uVar2 + iVar4;
    DVar3 = GetFileAttributesA(param_2);
    if (DVar3 != 0xffffffff) {
      if ((DVar3 & 1) != 0) {
        return 0;
      }
      if ((DVar3 & 0x10) == 0) {
        return 0;
      }
    }
    if (*lpsz != '\\') break;
    local_108 = lpsz + 1;
    param_2[uVar2] = '\\';
    uVar2 = uVar2 + 1;
  }
  param_2[uVar2] = '\0';
  return 1;
}


