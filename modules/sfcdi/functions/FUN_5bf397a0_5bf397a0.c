/* Module: sfcdi.dll
   Function: FUN_5bf397a0
   Address: 5bf397a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf397a0(int *param_1,undefined4 *param_2,uchar *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    return -1;
  }
  iVar2 = *param_1;
  iVar1 = 0;
  if (0 < iVar2) {
    piVar3 = (int *)param_1[2];
    while (*(uint *)(*piVar3 + 8) <= (uint)param_2[2]) {
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
      if (iVar2 <= iVar1) {
        iVar2 = FUN_5bf39840(param_1,-1,param_2,param_3);
        return iVar2;
      }
    }
    if (iVar1 < iVar2) {
      iVar2 = FUN_5bf39840(param_1,iVar1,param_2,param_3);
      return iVar2;
    }
  }
  iVar2 = FUN_5bf39840(param_1,-1,param_2,param_3);
  return iVar2;
}


