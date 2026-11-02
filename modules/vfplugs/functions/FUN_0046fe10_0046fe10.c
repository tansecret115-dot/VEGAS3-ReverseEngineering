/* Module: vfplugs.dll
   Function: FUN_0046fe10
   Address: 0046fe10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_0046fe10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2[2] - *param_2 <= param_1[2] - *param_1) {
    iVar4 = param_1[3];
    iVar3 = param_2[3];
    iVar1 = param_2[1];
    if (iVar3 - iVar1 <= iVar4 - param_1[1]) {
      iVar5 = (*param_2 - param_2[2]) + param_1[2];
      iVar2 = ftol();
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
      iVar4 = (iVar1 - iVar3) + iVar4;
      iVar3 = ftol();
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      return CONCAT44(iVar4,iVar5);
    }
  }
  return 0;
}


