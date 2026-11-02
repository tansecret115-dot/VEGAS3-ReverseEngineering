/* Module: mpegin.dll
   Function: FUN_1001124b
   Address: 1001124b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1001124b(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


