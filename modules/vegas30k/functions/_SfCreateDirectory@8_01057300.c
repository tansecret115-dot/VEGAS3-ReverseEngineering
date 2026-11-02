/* Module: vegas30k.dll
   Function: _SfCreateDirectory@8
   Address: 01057300
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL _SfCreateDirectory_8(int param_1,LPSECURITY_ATTRIBUTES param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  LPCSTR lpsz;
  int iVar4;
  BOOL local_10c;
  LPCSTR local_108;
  CHAR local_104 [260];
  
                    /* 0x57300  798  _SfCreateDirectory@8 */
  iVar2 = _SfGetRootPathFromFilePath_12(param_1,local_104,0x104);
  if (((iVar2 < 3) || (DVar3 = GetFileAttributesA(local_104), DVar3 == 0xffffffff)) ||
     ((DVar3 & 0x10) == 0)) {
    return 0;
  }
  local_108 = (LPCSTR)(param_1 + iVar2);
  local_10c = 1;
  while( true ) {
    cVar1 = *local_108;
    lpsz = local_108;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    iVar4 = (int)lpsz - (int)local_108;
    if (iVar4 < 1) {
      return local_10c;
    }
    lstrcpynA(local_104 + iVar2,local_108,iVar4 + 1);
    (local_104 + iVar2)[iVar4] = '\0';
    DVar3 = GetFileAttributesA(local_104);
    if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) == 0)) {
      local_10c = CreateDirectoryA(local_104,param_2);
      if (local_10c == 0) {
        return 0;
      }
    }
    else {
      local_10c = 1;
    }
    if (*lpsz != '\\') break;
    local_108 = lpsz + 1;
    local_104[iVar2 + iVar4] = '\\';
    iVar2 = iVar2 + iVar4 + 1;
  }
  return local_10c;
}


