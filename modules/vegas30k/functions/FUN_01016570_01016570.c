/* Module: vegas30k.dll
   Function: FUN_01016570
   Address: 01016570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01016570(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 1)) {
    uVar2 = 0;
    if (*param_1 != 0) {
      piVar3 = (int *)param_1[2];
      do {
        piVar1 = (int *)*piVar3;
        if ((*piVar1 == 3) && (piVar1[1] == param_2 + -1)) {
          return piVar1[3] + piVar1[2];
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *param_1);
    }
  }
  return 0;
}


