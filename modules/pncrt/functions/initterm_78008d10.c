/* Module: pncrt.dll
   Function: initterm
   Address: 78008d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* initterm */

void __cdecl initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


