/* Module: wavplug.dll
   Function: FUN_5f392990
   Address: 5f392990
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_5f392990(void *this,DWORD param_1,DWORD param_2,LPVOID param_3,undefined4 param_4,DWORD *param_5
            ,int *param_6)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  DWORD nNumberOfBytesToRead;
  int iVar5;
  int local_4;
  
  nNumberOfBytesToRead = param_2;
  iVar1 = *(int *)((int)this + 0x104);
  uVar2 = *(ushort *)(*(int *)((int)this + 0xd0) + 0xc) * param_1;
  iVar4 = *(int *)((int)this + 0x18) + *(int *)(iVar1 + 8);
  iVar5 = *(int *)(iVar1 + 8) + uVar2 + param_2;
  local_4 = ((int)uVar2 >> 0x1f) + *(int *)(iVar1 + 0xc) + (uint)CARRY4(uVar2,*(uint *)(iVar1 + 8));
  SetFilePointer(*(HANDLE *)(*(int *)((int)this + 0xac) + 0x214),uVar2 + *(uint *)(iVar1 + 8),
                 &local_4,0);
  if ((iVar4 < iVar5) &&
     (nNumberOfBytesToRead = nNumberOfBytesToRead + (iVar5 - iVar4), (int)nNumberOfBytesToRead < 0))
  {
    nNumberOfBytesToRead = 0;
  }
  BVar3 = ReadFile(*(HANDLE *)(*(int *)((int)this + 0xac) + 0x214),param_3,nNumberOfBytesToRead,
                   &param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0x8004e008;
  }
  *param_5 = param_1;
  *param_6 = (int)param_1 / (int)(uint)*(ushort *)(*(int *)((int)this + 0xd0) + 0xc);
  return -(uint)(*param_5 != nNumberOfBytesToRead) & 0x8004e008;
}


