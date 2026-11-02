/* Module: erv33260.dll
   Function: FUN_6707d7c0
   Address: 6707d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707d7c0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}


