/* Module: vegas30.exe
   Function: FUN_0056a550
   Address: 0056a550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056a550(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x2b0);
  if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) && (iVar4 = 0, 0 < iVar1)) {
    piVar3 = (int *)piVar3[2];
    do {
      iVar2 = *piVar3;
      if ((param_3 == *(int *)(iVar2 + 8)) && (param_2 == *(int *)(iVar2 + 0x224))) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


