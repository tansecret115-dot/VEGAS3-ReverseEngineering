/* Module: dsetup.dll
   Function: FUN_004056e2
   Address: 004056e2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004056e2(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


