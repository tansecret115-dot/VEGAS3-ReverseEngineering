/* Module: dsetup.dll
   Function: FUN_00403433
   Address: 00403433
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00403433(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


