/* Module: rmbe3260.dll
   Function: FUN_66027230
   Address: 66027230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027230(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 9;
  do {
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *param_2 = iVar3;
  return 0;
}


