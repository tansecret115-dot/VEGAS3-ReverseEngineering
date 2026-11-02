/* Module: sfmarket2.dll
   Function: FUN_00459040
   Address: 00459040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459040(int *param_1)

{
  FUN_00459080(param_1);
  FUN_00459220(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1c1))(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1b1))(param_1);
  **(undefined4 **)((int)param_1 + 0x1b9) = *(undefined4 *)(*(int *)((int)param_1 + 0x1b1) + 4);
  return;
}


