/* Module: sfcdi.dll
   Function: FUN_5bf17390
   Address: 5bf17390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf17390(HWND param_1,int param_2)

{
  if (*(UINT_PTR *)(param_2 + 0xb4) != 0) {
    KillTimer(param_1,*(UINT_PTR *)(param_2 + 0xb4));
  }
  *(undefined4 *)(param_2 + 0xb4) = 0;
  return;
}


