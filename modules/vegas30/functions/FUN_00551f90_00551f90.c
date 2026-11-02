/* Module: vegas30.exe
   Function: FUN_00551f90
   Address: 00551f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00551f90(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    return 0;
  }
  if (*(int *)(LVar1 + 0x84) == 2) {
    return *(undefined4 *)(LVar1 + 0x98);
  }
  return *(undefined4 *)(LVar1 + 0x9c);
}


