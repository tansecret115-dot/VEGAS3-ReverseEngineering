/* Module: vegas30k.dll
   Function: FUN_010a4160
   Address: 010a4160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010a4160(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xa4) != 0) {
    piVar2 = *(int **)(param_1 + 0xb8);
    do {
      if (*piVar2 == param_2) {
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar1;
        }
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xa4));
  }
  return 0;
}


