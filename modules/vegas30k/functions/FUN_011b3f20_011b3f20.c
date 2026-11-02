/* Module: vegas30k.dll
   Function: FUN_011b3f20
   Address: 011b3f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b3f20(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  FUN_011b1f70();
  piVar1 = *(int **)(param_1 + 0xc70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_011b3ea0();
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return 0;
}


