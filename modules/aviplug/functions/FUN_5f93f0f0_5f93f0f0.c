/* Module: aviplug.dll
   Function: FUN_5f93f0f0
   Address: 5f93f0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93f0f0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint nNumberOfBytesToWrite;
  LONG local_4;
  
  uVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4) * param_2;
  iVar5 = iVar4 + iVar1;
  if (*(int *)(iVar4 + 0x1c + iVar1) != 0) {
    nNumberOfBytesToWrite =
         *(int *)(param_1 + 0x90) + 0x1f +
         (uint)*(ushort *)(*(int *)(iVar5 + 0x14) + 8) * *(int *)(*(int *)(iVar5 + 0x14) + 0xc) * 4
         & ~(*(int *)(param_1 + 0x90) - 1U);
    local_4 = *(LONG *)(iVar5 + 0x2c);
    SetFilePointer(*(HANDLE *)(param_1 + 0x94),*(LONG *)(iVar5 + 0x28),&local_4,0);
    BVar3 = WriteFile(*(HANDLE *)(uVar2 + 0x94),*(LPCVOID *)(iVar5 + 0x14),nNumberOfBytesToWrite,
                      &param_1,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (param_1 < nNumberOfBytesToWrite)) {
      return 0x8004e009;
    }
    *(undefined4 *)(iVar5 + 0x1c) = 0;
  }
  return 0;
}


