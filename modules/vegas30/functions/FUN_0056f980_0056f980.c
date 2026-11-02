/* Module: vegas30.exe
   Function: FUN_0056f980
   Address: 0056f980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056f980(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x2b0);
  iVar2 = -1;
  iVar3 = iVar2;
  if (((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) && (0 < iVar1)) {
    piVar4 = (int *)piVar4[2];
    iVar3 = 0;
    while ((param_2 != *(int *)(*piVar4 + 8) || (param_3 != *(int *)(*piVar4 + 0x224)))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return iVar2;
      }
    }
  }
  return iVar3;
}


