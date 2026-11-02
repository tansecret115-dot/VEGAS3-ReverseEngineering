/* Module: vegas30.exe
   Function: FUN_005a2130
   Address: 005a2130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a2130(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)param_1[2];
    do {
      if (*(int *)(*piVar1 + 0x70) == param_2) {
        return *piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar3);
  }
  return 0;
}


