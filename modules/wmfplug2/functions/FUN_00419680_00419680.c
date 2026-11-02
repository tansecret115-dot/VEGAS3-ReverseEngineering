/* Module: wmfplug2.dll
   Function: FUN_00419680
   Address: 00419680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419680(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_2) {
    piVar2 = (int *)param_2[2];
    do {
      if (param_1 == *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_2);
  }
  return -1;
}


