/* Module: cook3260.dll
   Function: FUN_633a5450
   Address: 633a5450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_633a5450(void *this,float *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int local_2c [7];
  int local_10 [2];
  void *local_8;
  
  local_8 = this;
  local_10[1] = 0;
  iVar5 = *param_3;
  iVar4 = 7;
  piVar2 = local_10;
  piVar3 = param_3 + iVar5;
  do {
    if ((iVar5 == 0) || (iVar4 != *piVar3)) {
      iVar6 = piVar2[1];
    }
    else {
      piVar1 = piVar3 + 8;
      piVar3 = piVar3 + -1;
      iVar5 = iVar5 + -1;
      iVar6 = *piVar1 * param_5;
    }
    *piVar2 = iVar6;
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar4);
  piVar2 = local_2c;
  iVar5 = 8;
  pfVar7 = param_1 + param_4;
  do {
    FUN_633a53d0(local_8,pfVar7,*piVar2,piVar2[1]);
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + -1;
    pfVar7 = pfVar7 + *(int *)((int)local_8 + 0x47c0);
  } while (iVar5 != 0);
  local_10[1] = 0;
  iVar5 = *param_2;
  iVar4 = 7;
  piVar2 = local_10;
  piVar3 = param_2 + iVar5;
  do {
    if ((iVar5 == 0) || (iVar4 != *piVar3)) {
      iVar6 = piVar2[1];
    }
    else {
      piVar1 = piVar3 + 8;
      piVar3 = piVar3 + -1;
      iVar5 = iVar5 + -1;
      iVar6 = *piVar1 * param_5;
    }
    *piVar2 = iVar6;
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar4);
  piVar2 = local_2c;
  iVar5 = 8;
  do {
    FUN_633a53d0(local_8,param_1,local_2c[0] + *piVar2,local_2c[0] + piVar2[1]);
    piVar2 = piVar2 + 1;
    iVar5 = iVar5 + -1;
    param_1 = param_1 + *(int *)((int)local_8 + 0x47c0);
  } while (iVar5 != 0);
  return;
}


