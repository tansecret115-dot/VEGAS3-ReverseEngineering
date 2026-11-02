/* Module: vegas30.exe
   Function: FUN_0050b670
   Address: 0050b670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050b670(int *param_1,uint param_2,int param_3)

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
      if ((param_3 <= *(int *)(iVar2 + 8)) &&
         ((param_3 < *(int *)(iVar2 + 8) || (param_2 <= *(uint *)(iVar2 + 4))))) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + param_1[1];
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


