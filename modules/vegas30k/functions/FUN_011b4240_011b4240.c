/* Module: vegas30k.dll
   Function: FUN_011b4240
   Address: 011b4240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b4240(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),0);
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_011b3a00();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),1);
  return 0;
}


