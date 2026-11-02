/* Module: sfs4rw.dll
   Function: FUN_00405c20
   Address: 00405c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405c20(HWND param_1,int param_2)

{
  SetWindowLongA(param_1,0,*(LONG *)(param_2 + 0x17c + *(int *)(param_2 + 0x1cc) * 4));
  return;
}


