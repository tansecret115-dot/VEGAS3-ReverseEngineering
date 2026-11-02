/* Module: vegas30.exe
   Function: FUN_004be8b0
   Address: 004be8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004be8b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = ftol();
  uVar1 = (uint)uVar5 - *(uint *)(param_1 + 0x98);
  uVar2 = uVar1 + *(uint *)(param_1 + 0xb88);
  iVar3 = uVar2 + *(uint *)(param_1 + 0x1a0);
  iVar4 = (((int)((ulonglong)uVar5 >> 0x20) - *(int *)(param_1 + 0x9c)) -
          (uint)((uint)uVar5 < *(uint *)(param_1 + 0x98))) + *(int *)(param_1 + 0xb8c) +
          (uint)CARRY4(uVar1,*(uint *)(param_1 + 0xb88)) + *(int *)(param_1 + 0x1a4) +
          (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x1a0));
  if (*(int *)(param_1 + 0xc40) == 0) {
    FUN_004be390(param_1,iVar3,iVar4,param_5,param_6);
    return;
  }
  FUN_004be970(param_1,iVar3,iVar4,param_5,param_6,(*(uint *)(param_2 + 0x20) >> 0x10 & 0xf) - 10);
  return;
}


