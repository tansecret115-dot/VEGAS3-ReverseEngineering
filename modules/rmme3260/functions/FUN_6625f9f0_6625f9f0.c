/* Module: rmme3260.dll
   Function: FUN_6625f9f0
   Address: 6625f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6625f9f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (DAT_6627f268 == param_1) {
      DAT_6627f268 = (int *)*param_1;
      return;
    }
    piVar2 = DAT_6627f268;
    if (DAT_6627f268 != (int *)0x0) {
      do {
        piVar1 = (int *)*piVar2;
        if (piVar1 == param_1) break;
        piVar2 = piVar1;
      } while (piVar1 != (int *)0x0);
      if (piVar2 != (int *)0x0) {
        *piVar2 = *param_1;
      }
    }
  }
  return;
}


