/* Module: tokr3260.dll
   Function: FUN_68053d40
   Address: 68053d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68053d40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == 0) {
    *param_2 = 0;
    *param_3 = 0x40000000;
    return;
  }
  if (param_1 != 1) {
    *param_2 = 0x3f800000;
    *param_3 = 0x3f800000;
    return;
  }
  *param_2 = 0x40000000;
  *param_3 = 0x40000000;
  return;
}


