/* Module: vegas30.exe
   Function: FUN_004baa60
   Address: 004baa60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004baa60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_2 + 0x3c);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0xc38);
  }
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)piVar1[2];
    do {
      if (*(int *)(*piVar1 + 0x10) == param_3) {
        return *piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar3);
  }
  return 0;
}


