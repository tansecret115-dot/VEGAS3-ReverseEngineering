/* Module: vegas30k.dll
   Function: FUN_011b4200
   Address: 011b4200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b4200(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),0);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),1);
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  return 0;
}


