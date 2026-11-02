/* Module: vegas30k.dll
   Function: FUN_01195da0
   Address: 01195da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01195da0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x63c) == 0) {
    *(uint *)(param_1 + 0x8c8) = param_2;
    *(int *)(param_1 + 0x8cc) = param_3;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x8d4);
  uVar1 = *(uint *)(param_1 + 0x8d0);
  iVar2 = *(int *)(param_1 + 0x8cc);
  uVar3 = *(uint *)(param_1 + 0x8c8);
  if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (uVar1 <= uVar3)))) {
    if ((param_3 < iVar2) || ((param_3 <= iVar2 && (param_2 < uVar3)))) {
      iVar5 = (iVar2 - param_3) - (uint)(uVar3 < param_2);
      if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar1 <= uVar3 - param_2)))) {
        *(undefined4 *)(param_1 + 0x8d0) = 0;
        *(undefined4 *)(param_1 + 0x8d4) = 0;
        goto LAB_01195e4f;
      }
      iVar4 = (iVar4 - iVar2) - (uint)(uVar1 < uVar3);
    }
    else {
      iVar4 = (iVar4 - iVar2) - (uint)(uVar1 < uVar3);
    }
    *(uint *)(param_1 + 0x8d0) = (uVar1 - uVar3) + param_2;
    *(uint *)(param_1 + 0x8d4) = iVar4 + param_3 + (uint)CARRY4(uVar1 - uVar3,param_2);
  }
LAB_01195e4f:
  *(uint *)(param_1 + 0x8c8) = param_2;
  *(int *)(param_1 + 0x8cc) = param_3;
  return 0;
}


