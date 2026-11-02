/* Module: mp3rw.dll
   Function: FUN_00450850
   Address: 00450850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450850(int *param_1)

{
  FUN_00450890(param_1);
  FUN_00450a30(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1c1))(param_1);
  (*(code *)**(undefined4 **)((int)param_1 + 0x1b1))(param_1);
  **(undefined4 **)((int)param_1 + 0x1b9) = *(undefined4 *)(*(int *)((int)param_1 + 0x1b1) + 4);
  return;
}


