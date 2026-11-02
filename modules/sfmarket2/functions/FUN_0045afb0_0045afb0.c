/* Module: sfmarket2.dll
   Function: FUN_0045afb0
   Address: 0045afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045afb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)param_1 + 0x1a5) == 0) {
    uVar2 = FUN_004596d0(param_1);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x52);
  if (*(int *)((int)param_1 + 0x1a5) == iVar1 + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x61;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x52);
    uVar2 = (**(code **)(*param_1 + 4))(param_1,3);
    *(undefined4 *)((int)param_1 + 0x1a5) = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)((int)param_1 + 0x51) + 0x14))(param_1,iVar1);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  *(uint *)(*(int *)((int)param_1 + 0x1bd) + 0x52) =
       *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x52) + 1U & 7;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


