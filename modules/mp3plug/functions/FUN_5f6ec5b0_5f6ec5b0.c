/* Module: mp3plug.dll
   Function: FUN_5f6ec5b0
   Address: 5f6ec5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ec5b0(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_5f6d97a0(*piVar1);
      }
      do {
        if (piVar1[1] != 0) {
          FUN_5f6d97a0(piVar1[1]);
        }
        piVar1 = piVar1 + 1;
      } while ((int)piVar1 < param_1 + 0x1c);
    }
    piVar1 = (int *)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_5f6d97a0(*piVar1);
      }
      do {
        if (piVar1[1] != 0) {
          FUN_5f6d97a0(piVar1[1]);
        }
        piVar1 = piVar1 + 1;
      } while ((int)piVar1 < param_1 + 0x2c);
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


