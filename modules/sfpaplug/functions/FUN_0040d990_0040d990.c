/* Module: sfpaplug.dll
   Function: FUN_0040d990
   Address: 0040d990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040d990(int param_1)

{
  if ((**(short **)(param_1 + 0x50) != 1) && (**(short **)(param_1 + 0x50) != 3)) {
    return 0;
  }
  return 1;
}


