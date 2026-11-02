/* Module: encn3260.dll
   Function: FUN_664d4b50
   Address: 664d4b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664d4b50(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar7 = 0;
    uVar1 = *(undefined4 *)(param_1 + 8);
    if ((*(int **)(param_1 + 0x10) != (int *)0x0) &&
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))(), iVar5 != 0)) {
      uVar7 = *(undefined4 *)(iVar5 + 8);
    }
    uVar2 = **(uint **)(param_2 + 0x1c);
    uVar6 = *(uint *)(uVar2 + 4);
    while (uVar3 = *(uint *)(uVar6 + 4), (-(uint)(uVar6 != uVar2) & uVar6) != 0) {
      puVar4 = *(undefined4 **)((-(uint)(uVar6 != uVar2) & uVar6) + 8);
      uVar6 = uVar3;
      if (param_3 == 0) {
        (**(code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,uVar1,0,uVar7);
      }
      else if (param_3 == 1) {
        (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,uVar1,0,uVar7);
      }
      else if (param_3 == 2) {
        (**(code **)(*(int *)*puVar4 + 0x14))((int *)*puVar4,uVar1,uVar7);
      }
    }
  }
  return;
}


