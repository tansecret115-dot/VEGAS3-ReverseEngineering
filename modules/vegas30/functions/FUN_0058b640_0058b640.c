/* Module: vegas30.exe
   Function: FUN_0058b640
   Address: 0058b640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058b640(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  uint nNumberOfBytesToWrite;
  undefined4 *puVar5;
  undefined8 uVar6;
  DWORD local_168;
  undefined2 uStack_164;
  ushort local_162;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  int local_15c;
  int local_158;
  undefined2 local_154;
  undefined4 local_150;
  undefined4 local_148 [4];
  undefined4 local_138;
  uint local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uchar local_108 [264];
  
  iVar2 = *(int *)(*param_1 + 0x40);
  if (iVar2 == 0) {
    uStack_164 = (undefined2)param_1[0x44];
    local_162 = (ushort)((uint)param_1[0x44] >> 0x10);
    uStack_160 = (undefined2)param_1[0x45];
    uStack_15e = (undefined2)((uint)param_1[0x45] >> 0x10);
    local_15c = param_1[0x46];
    local_158 = param_1[0x47];
    local_154 = (undefined2)param_1[0x48];
  }
  else if ((0 < iVar2) && (iVar2 < 4)) {
    local_162 = 1;
  }
  uVar6 = __alldiv(param_1[0x52] - 0x200,param_1[0x53] - (uint)((uint)param_1[0x52] < 0x200),
                   (short)param_1[0x47],0);
  local_150 = (undefined4)uVar6;
  uVar1 = (uint)local_162;
  iVar2 = __alldiv(uVar6,0x200,0);
  nNumberOfBytesToWrite = iVar2 * uVar1 * 2;
  if (0x10000 < nNumberOfBytesToWrite) {
    return 1;
  }
  puVar5 = local_148;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_148[0] = 0x4b504653;
  local_148[1] = 1;
  local_148[2] = 0x40;
  local_148[3] = _SfDosGetDateTime_4(param_1 + 2);
  local_138 = 8;
  local_130 = 0x200;
  local_12c = local_150;
  local_128 = 0;
  local_134 = uVar1;
  _mbscpy(local_108,(uchar *)(param_1 + 2));
  puVar3 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_108);
  *puVar3 = 0x2e;
  puVar3[1] = 0x73;
  puVar3[2] = 0x66;
  puVar3[3] = 0x6b;
  puVar3[4] = 0;
  hFile = CreateFileA((LPCSTR)local_108,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0x8004e007;
  }
  BVar4 = WriteFile(hFile,local_148,0x40,&local_168,(LPOVERLAPPED)0x0);
  if (BVar4 == 0) {
    return 0x8004e009;
  }
  BVar4 = WriteFile(hFile,(LPCVOID)param_1[0x4d],nNumberOfBytesToWrite,&local_168,(LPOVERLAPPED)0x0)
  ;
  if (BVar4 == 0) {
    return 0x8004e009;
  }
  CloseHandle(hFile);
  return 0;
}


