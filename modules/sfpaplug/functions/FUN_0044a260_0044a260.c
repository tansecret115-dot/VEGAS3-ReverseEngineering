/* Module: sfpaplug.dll
   Function: FUN_0044a260
   Address: 0044a260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044a260(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  FUN_00448060(LVar1);
  FUN_00447db0(LVar1);
  return 1;
}


