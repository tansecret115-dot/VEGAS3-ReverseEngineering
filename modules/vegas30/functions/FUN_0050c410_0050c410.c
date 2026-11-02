/* Module: vegas30.exe
   Function: FUN_0050c410
   Address: 0050c410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050c410(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar2 = param_1[2];
    do {
      if ((*(int *)(iVar2 + 4) == param_3) && (*(int *)(iVar2 + 8) == param_4)) {
        *param_2 = iVar2;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + param_1[1];
    } while (iVar1 < iVar3);
  }
  *param_2 = 0;
  return -1;
}


