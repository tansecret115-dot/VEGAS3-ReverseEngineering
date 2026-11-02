/* Module: vegas30k.dll
   Function: FUN_011b7670
   Address: 011b7670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011b7670(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  *param_1 = &PTR_LAB_011eb88c;
  if (param_1[0x12] != 0) {
    uVar3 = 0;
    if (param_1[0x12] != 0) {
      piVar2 = param_1 + 2;
      do {
        piVar1 = (int *)*piVar2;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *piVar2 = 0;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < (uint)param_1[0x12]);
    }
    param_1[0x12] = 0;
  }
  return;
}


