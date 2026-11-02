/* Module: vegas30k.dll
   Function: FUN_011aaee0
   Address: 011aaee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011aaee0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x674);
  if (piVar1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = (int *)piVar1[6];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    piVar1[3] = param_3;
  }
  return;
}


