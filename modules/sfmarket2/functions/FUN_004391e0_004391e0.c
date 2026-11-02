/* Module: sfmarket2.dll
   Function: FUN_004391e0
   Address: 004391e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004391e0(void *this,int param_1,uchar *param_2)

{
  bool bVar1;
  uchar *_Source;
  undefined3 extraout_var;
  DWORD DVar2;
  int iVar3;
  undefined3 extraout_var_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  HANDLE hFile;
  uint uVar7;
  HANDLE pvVar8;
  int local_21c;
  uint local_218;
  int local_214;
  int local_210;
  DWORD local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  _mbscpy(local_208,param_2);
  FUN_004203c0(local_208,0x104);
  if ((*(byte *)((int)this + 0x880) & 1) == 0) {
    _mbscat(local_208,(uchar *)(param_1 + 0x54));
  }
  else {
    _Source = (uchar *)FUN_004201b0((LPCSTR)(param_1 + 0x54));
    _mbscat(local_208,_Source);
  }
  if ((((*(uint *)((int)this + 0x880) & 4) == 0) &&
      (bVar1 = FUN_00420b70((LPCSTR)local_208), CONCAT31(extraout_var,bVar1) != 0)) &&
     (*(int *)((int)this + 0x20) != 0)) {
    DVar2 = GetFileAttributesA((LPCSTR)local_208);
    if ((DVar2 & 1) == 0) {
      iVar3 = FUN_004332b0(this,(LPCSTR)local_208);
    }
    else {
      iVar3 = FUN_00433410(this,(LPCSTR)local_208);
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  bVar1 = FUN_00420b70((LPCSTR)local_208);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    SetFileAttributesA((LPCSTR)local_208,0x80);
  }
  FUN_00420570(local_208,local_104,0x104);
  DVar2 = GetFileAttributesA((LPCSTR)local_104);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
    FUN_00421080(local_104,(LPSECURITY_ATTRIBUTES)0x0);
  }
  uVar4 = *(int *)(param_1 + 0x38) * 2;
  uVar7 = *(int *)(param_1 + 0x34) * 2;
  uVar5 = uVar4 + uVar7;
  uVar6 = uVar5 + *(uint *)(param_1 + 0x4c);
  local_21c = 1;
  local_218 = uVar6 + 0x40;
  local_214 = (uint)CARRY4(uVar4,uVar7) + *(int *)(param_1 + 0x50) +
              (uint)CARRY4(uVar5,*(uint *)(param_1 + 0x4c)) + (uint)(0xffffffbf < uVar6);
  hFile = FUN_00438e90(this,&local_218,&local_21c);
  if (((hFile == (HANDLE)0x0) || (hFile == (HANDLE)0xffffffff)) && (1 < local_21c)) {
    FUN_00439190(this,0xaaaaaaad,(uchar *)"ExtractCentralDirectoryFile");
    return -0x7ffb1ff3;
  }
  if ((hFile == (HANDLE)0x0) && (local_21c == 1)) {
    hFile = *(HANDLE *)((int)this + 8);
    pvVar8 = (HANDLE)(*(uint *)((int)this + 0x4c) - local_218);
    DVar2 = (*(int *)((int)this + 0x50) - local_214) -
            (uint)(*(uint *)((int)this + 0x4c) < local_218);
    bVar1 = CARRY4(local_218,*(uint *)((int)this + 0x890));
    local_218 = local_218 + *(uint *)((int)this + 0x890);
    local_214 = local_214 + *(int *)((int)this + 0x894) + (uint)bVar1;
  }
  else {
    DVar2 = GetFileSize(hFile,&local_20c);
    pvVar8 = (HANDLE)(DVar2 - local_218);
    DVar2 = (local_20c - local_214) - (uint)(DVar2 < local_218);
  }
  local_210 = local_214;
  SetFilePointer(hFile,local_218,&local_210,0);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = FUN_00438480(this,hFile,local_21c,(DWORD)pvVar8,DVar2,param_1,(LPCSTR)local_208);
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    iVar3 = FUN_004388c0(this,hFile,local_21c,pvVar8,DVar2,param_1,(LPCSTR)local_208);
  }
  else {
    iVar3 = -0x7fffbfff;
  }
  if ((hFile != (HANDLE)0x0) && (1 < local_21c)) {
    CloseHandle(hFile);
  }
  return iVar3;
}


