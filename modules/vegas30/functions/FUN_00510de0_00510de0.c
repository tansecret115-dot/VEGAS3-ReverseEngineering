/* Module: vegas30.exe
   Function: FUN_00510de0
   Address: 00510de0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00510de0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_2;
  iVar5 = param_2[2];
  iVar1 = param_2[1];
  iVar2 = param_2[3];
  iVar3 = ftol();
  iVar5 = *param_1 - ((iVar5 - iVar4) / 2 + iVar4);
  iVar4 = param_1[1] - ((iVar2 - iVar1) / 2 + iVar1);
  return iVar5 * iVar5 + iVar4 * iVar4 < iVar3 * iVar3;
}


