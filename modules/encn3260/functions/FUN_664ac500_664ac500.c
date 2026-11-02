/* Module: encn3260.dll
   Function: FUN_664ac500
   Address: 664ac500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ac500(int param_1)

{
  if ((*(int *)(param_1 + 0x6c) == param_1) && (*(int *)(param_1 + 0x140) != 0)) {
    FUN_664a8490(param_1);
    FUN_664b6af0((int *)(*(int *)(param_1 + 0x140) + 0x48));
    FUN_664a8520(param_1);
  }
  return;
}


