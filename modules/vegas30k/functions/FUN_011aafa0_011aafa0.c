/* Module: vegas30k.dll
   Function: FUN_011aafa0
   Address: 011aafa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011aafa0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x68c);
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    while (*piVar2 != param_2) {
      piVar2 = (int *)piVar2[6];
      if (piVar2 == (int *)0x0) {
        return iVar1;
      }
    }
    iVar1 = piVar2[3];
  }
  return iVar1;
}


