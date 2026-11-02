/* Module: vegas30k.dll
   Function: FUN_0115f6b0
   Address: 0115f6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115f6b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x51);
  iVar3 = 0x1000 - *(int *)(iVar2 + 4);
  if (iVar3 != 0) {
    iVar1 = FUN_01129140(*(undefined4 *)(iVar2 + 0x18),1,iVar3,*(undefined4 *)(iVar2 + 0x14));
    if (iVar1 != iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x24;
      (**(code **)*param_1)(param_1);
    }
  }
  FUN_011291b0(*(undefined4 *)(iVar2 + 0x14));
  iVar2 = FUN_01129200(*(undefined4 *)(iVar2 + 0x14));
  if (iVar2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x24;
    (**(code **)*param_1)(param_1);
  }
  return;
}


