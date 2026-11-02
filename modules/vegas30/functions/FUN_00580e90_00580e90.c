/* Module: vegas30.exe
   Function: FUN_00580e90
   Address: 00580e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00580e90(int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + -0xc) < 2) {
      if ((int)(*(int *)(iVar1 + -8) + param_2) <= *(int *)(iVar1 + -4)) {
        puVar3 = (undefined4 *)(*(int *)(iVar1 + -8) + iVar1);
        for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = *param_3;
          param_3 = param_3 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)param_3;
          param_3 = (undefined4 *)((int)param_3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        *(uint *)(*param_1 + -8) = *(int *)(*param_1 + -8) + param_2;
        *(undefined1 *)(*(int *)(*param_1 + -8) + *param_1) = 0;
        return;
      }
    }
    FUN_00580d20(*(undefined4 *)(iVar1 + -8),iVar1,param_2,param_3);
    FUN_005809c0(iVar1 + -0xc);
  }
  return;
}


