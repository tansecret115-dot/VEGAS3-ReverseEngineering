/* Module: pncrt.dll
   Function: FUN_7801d8c0
   Address: 7801d8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7801d8c0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 < DAT_78042840) {
    return 0;
  }
  piVar2 = &__pioinfo;
  do {
    if (*piVar2 == 0) {
      puVar1 = malloc(0x480);
      if (puVar1 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      *piVar2 = (int)puVar1;
      DAT_78042840 = DAT_78042840 + 0x20;
      if (puVar1 < puVar1 + 0x120) {
        do {
          *(undefined1 *)(puVar1 + 1) = 0;
          *puVar1 = 0xffffffff;
          *(undefined1 *)((int)puVar1 + 5) = 10;
          puVar1[2] = 0;
          puVar1 = puVar1 + 9;
        } while (puVar1 < (undefined4 *)(*piVar2 + 0x480));
      }
    }
    piVar2 = piVar2 + 1;
  } while (DAT_78042840 <= param_1);
  return 0;
}


