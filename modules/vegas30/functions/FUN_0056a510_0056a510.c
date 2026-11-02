/* Module: vegas30.exe
   Function: FUN_0056a510
   Address: 0056a510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0056a510(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x2b0);
  if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) && (iVar2 = 0, 0 < iVar1)) {
    piVar3 = (int *)piVar3[2];
    do {
      if (*piVar3 == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


