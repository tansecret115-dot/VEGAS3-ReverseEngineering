/* Module: sfcdi.dll
   Function: FUN_5bf40ae0
   Address: 5bf40ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5bf40ae0(LPCSTR param_1,int param_2)

{
  int *piVar1;
  LPCSTR lpString;
  uint uVar2;
  uint local_1a0;
  int local_19c;
  uchar local_194 [8];
  uchar local_18c [65];
  uchar auStack_14b [71];
  uchar local_104 [260];
  
  piVar1 = *(int **)(param_2 + 0x34c);
  local_19c = 0;
  if (((*(uint *)(*piVar1 + 8) & 0x10) == 0) && ((short)piVar1[1] != 0)) {
    local_19c = FUN_5bf25750(local_194,";%u");
  }
  lpString = FUN_5bf23120(param_1);
  if (*lpString == '.') {
    *lpString = '\0';
    uVar2 = lstrlenA(param_1);
    *lpString = '.';
    local_1a0 = lstrlenA(lpString);
  }
  else {
    uVar2 = lstrlenA(param_1);
    local_1a0 = 0;
  }
  if (0x40 < uVar2) {
    uVar2 = 0x40;
  }
  lstrcpynA((LPSTR)local_18c,param_1,uVar2 + 1);
  local_18c[uVar2] = '\0';
  if (*lpString == '.') {
    if (0x40 < local_1a0) {
      local_1a0 = 0x40;
    }
    lstrcpynA((LPSTR)(auStack_14b + 3),lpString,local_1a0 + 1);
    auStack_14b[local_1a0 + 3] = '\0';
  }
  if (0x41 < local_1a0 + uVar2) {
    uVar2 = -local_1a0 + 0x41;
    auStack_14b[-local_1a0] = '\0';
  }
  _mbscpy(local_104,local_18c);
  *(char *)((int)piVar1 + 0xe3) = (char)uVar2;
  if (local_1a0 != 0) {
    _mbscat(local_104,auStack_14b + 3);
    *(char *)(piVar1 + 0x39) = (char)local_1a0;
  }
  if (local_19c != 0) {
    _mbscat(local_104,local_194);
    *(char *)((int)piVar1 + 0xe5) = (char)local_19c;
  }
  uVar2 = FUN_5bf3d750((undefined4 *)((int)piVar1 + 0x5f),0x47,(LPCSTR)local_104);
  *(char *)((int)piVar1 + 0x5e) = (char)uVar2 << 1;
  FUN_5bf3d970((undefined2 *)((int)piVar1 + 0x5f),uVar2);
  return *(undefined1 *)((int)piVar1 + 0x5e);
}


