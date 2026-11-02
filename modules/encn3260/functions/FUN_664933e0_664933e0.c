/* Module: encn3260.dll
   Function: FUN_664933e0
   Address: 664933e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664933e0(int param_1)

{
  FUN_6648e080(param_1);
  if (*(int *)(param_1 + 0xba) != 0) {
    (**(code **)(**(int **)(param_1 + 0xb6) + 0x24))
              (*(int **)(param_1 + 0xb6),*(int *)(param_1 + 0xba),*(undefined4 *)(param_1 + 0xbe));
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  return 0;
}


