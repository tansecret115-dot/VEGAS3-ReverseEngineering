/* Module: sfs4rw.dll
   Function: FUN_004507d0
   Address: 004507d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004507d0(int *param_1)

{
  FUN_00450810(param_1);
  FUN_004509b0(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1c1))(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1b1))(param_1);
  **(undefined4 **)((int)param_1 + 0x1b9) = *(undefined4 *)(*(int *)((int)param_1 + 0x1b1) + 4);
  return;
}


