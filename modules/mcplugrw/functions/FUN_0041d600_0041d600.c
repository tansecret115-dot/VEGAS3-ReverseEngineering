/* Module: mcplugrw.dll
   Function: FUN_0041d600
   Address: 0041d600
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_0041d600(uchar *param_1,LPSECURITY_ATTRIBUTES param_2)

{
  uchar uVar1;
  int iVar2;
  DWORD DVar3;
  uchar *lpsz;
  int iVar4;
  BOOL local_10c;
  uchar *local_108;
  uchar local_104 [260];
  
  iVar2 = FUN_0041cba0(param_1,local_104,0x104);
  if (((iVar2 < 3) || (DVar3 = GetFileAttributesA((LPCSTR)local_104), DVar3 == 0xffffffff)) ||
     ((DVar3 & 0x10) == 0)) {
    return 0;
  }
  local_108 = param_1 + iVar2;
  local_10c = 1;
  while( true ) {
    uVar1 = *local_108;
    lpsz = local_108;
    while ((uVar1 != '\0' && (uVar1 != '\\'))) {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    iVar4 = (int)lpsz - (int)local_108;
    if (iVar4 < 1) {
      return local_10c;
    }
    lstrcpynA((LPSTR)(local_104 + iVar2),(LPCSTR)local_108,iVar4 + 1);
    (local_104 + iVar2)[iVar4] = '\0';
    DVar3 = GetFileAttributesA((LPCSTR)local_104);
    if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) == 0)) {
      local_10c = CreateDirectoryA((LPCSTR)local_104,param_2);
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


