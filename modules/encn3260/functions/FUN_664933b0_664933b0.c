/* Module: encn3260.dll
   Function: FUN_664933b0
   Address: 664933b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664933b0(int param_1)

{
  FUN_6648e050(param_1);
  if (*(int *)(param_1 + 0xba) != 0) {
    (**(code **)(**(int **)(param_1 + 0xb6) + 0x28))
              (*(int **)(param_1 + 0xb6),*(int *)(param_1 + 0xba),*(undefined4 *)(param_1 + 0xbe));
  }
  return 0;
}


