/* Module: aviplug.dll
   Function: FUN_5f937560
   Address: 5f937560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f937560(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar2 = param_2;
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x174) != 0) {
    return *(int *)(param_1 + 0x174);
  }
  iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&param_1,0,0);
  if (iVar3 < 0) goto LAB_5f93762c;
  if (unaff_EDI == 1) {
    if (*(int *)(iVar1 + 0x120) == *(int *)(iVar1 + 0x11c)) {
      return iVar3;
    }
    if (*(int **)(iVar1 + 0x138) != (int *)0x0) {
      iVar3 = FUN_5f978180(*(int **)(iVar1 + 0x138),-1,(int *)&stack0xfffffff8,1);
joined_r0x5f93760a:
      if (-1 < iVar3) {
        (**(code **)(*piVar2 + 4))(piVar2);
        *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + 1;
        return iVar3;
      }
      goto LAB_5f93762c;
    }
  }
  else if (unaff_EDI == 2) {
    if (*(int *)(iVar1 + 300) == *(int *)(iVar1 + 0x128)) {
      return iVar3;
    }
    if (*(int **)(iVar1 + 0x134) != (int *)0x0) {
      iVar3 = FUN_5f978180(*(int **)(iVar1 + 0x134),-1,(int *)&stack0xfffffff8,1);
      goto joined_r0x5f93760a;
    }
  }
  iVar3 = -0x7fff0001;
LAB_5f93762c:
  *(int *)(iVar1 + 0x174) = iVar3;
  return iVar3;
}


