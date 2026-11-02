/* Module: sftrans1.dll
   Function: FUN_00486ba0
   Address: 00486ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486ba0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (-1 < (int)param_2) {
    piVar2 = *(int **)(param_1 + 0xa4);
    if ((int)param_2 <= *piVar2) {
      if (param_3 == (int *)0x0) {
        uVar3 = FUN_00486c30(param_2,1,1,0,0);
        return uVar3;
      }
      iVar1 = (int)param_2 + -1;
      iVar4 = (int)param_2;
      if ((((-1 < iVar1) && (iVar1 < *piVar2)) && (*param_3 != -1)) &&
         (**(int **)(piVar2[2] + -4 + (int)param_2 * 4) == -1)) {
        iVar4 = iVar1;
      }
      param_2 = param_3;
      FUN_004dc110(piVar2,iVar4,&param_2,1);
      FUN_0048c310(4,iVar4,1);
      FUN_0048c4a0();
      return 1;
    }
  }
  return 0;
}


