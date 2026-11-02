/* Module: vidcap30.exe
   Function: FUN_00536f70
   Address: 00536f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00536f70(int param_1,int param_2,uchar *param_3)

{
  uchar *_Source;
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  HANDLE hFile;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_21c;
  uint local_218;
  int local_214;
  int local_210;
  DWORD local_20c;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  _mbscpy(local_208,param_3);
  _SfAddSlashToPathName_8(local_208,0x104);
  if ((*(byte *)(param_1 + 0x880) & 1) == 0) {
    _mbscat(local_208,(uchar *)(param_2 + 0x54));
  }
  else {
    _Source = (uchar *)_SfGetFileNamePtrA_4(param_2 + 0x54);
    _mbscat(local_208,_Source);
  }
  if ((((*(uint *)(param_1 + 0x880) & 4) == 0) &&
      (iVar1 = _SfDoesFileExist_4(local_208), iVar1 != 0)) && (*(int *)(param_1 + 0x20) != 0)) {
    DVar2 = GetFileAttributesA((LPCSTR)local_208);
    if ((DVar2 & 1) == 0) {
      iVar1 = FUN_00531040(local_208);
    }
    else {
      iVar1 = FUN_005311a0(local_208);
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = _SfDoesFileExist_4(local_208);
  if (iVar1 != 0) {
    SetFileAttributesA((LPCSTR)local_208,0x80);
  }
  _SfGetPathNameFromFilePath_12(local_208,local_104,0x104);
  DVar2 = GetFileAttributesA(local_104);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
    _SfCreateDirectory_8(local_104,0);
  }
  uVar3 = *(int *)(param_2 + 0x38) * 2;
  uVar6 = *(int *)(param_2 + 0x34) * 2;
  uVar4 = uVar3 + uVar6;
  uVar5 = uVar4 + *(uint *)(param_2 + 0x4c);
  local_21c = 1;
  local_218 = uVar5 + 0x40;
  local_214 = (uint)CARRY4(uVar3,uVar6) + *(int *)(param_2 + 0x50) +
              (uint)CARRY4(uVar4,*(uint *)(param_2 + 0x4c)) + (uint)(0xffffffbf < uVar5);
  hFile = (HANDLE)FUN_00536c20(&local_218,&local_21c);
  if (((hFile == (HANDLE)0x0) || (hFile == (HANDLE)0xffffffff)) && (1 < local_21c)) {
    FUN_00536f20(0xaaaaaaad,"ExtractCentralDirectoryFile",local_21c);
    return -0x7ffb1ff3;
  }
  if ((hFile == (HANDLE)0x0) && (local_21c == 1)) {
    hFile = *(HANDLE *)(param_1 + 8);
    iVar1 = *(uint *)(param_1 + 0x4c) - local_218;
    iVar7 = (*(int *)(param_1 + 0x50) - local_214) - (uint)(*(uint *)(param_1 + 0x4c) < local_218);
    bVar8 = CARRY4(local_218,*(uint *)(param_1 + 0x890));
    local_218 = local_218 + *(uint *)(param_1 + 0x890);
    local_214 = local_214 + *(int *)(param_1 + 0x894) + (uint)bVar8;
  }
  else {
    DVar2 = GetFileSize(hFile,&local_20c);
    iVar1 = DVar2 - local_218;
    iVar7 = (local_20c - local_214) - (uint)(DVar2 < local_218);
  }
  local_210 = local_214;
  SetFilePointer(hFile,local_218,&local_210,0);
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = FUN_00536210(hFile,local_21c,iVar1,iVar7,param_2,local_208);
  }
  else if (*(int *)(param_2 + 0xc) == 1) {
    iVar1 = FUN_00536650(hFile,local_21c,iVar1,iVar7,param_2,local_208);
  }
  else {
    iVar1 = -0x7fffbfff;
  }
  if ((hFile != (HANDLE)0x0) && (1 < local_21c)) {
    CloseHandle(hFile);
  }
  return iVar1;
}


