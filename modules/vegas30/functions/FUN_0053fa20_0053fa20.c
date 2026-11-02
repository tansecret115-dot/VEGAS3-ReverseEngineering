/* Module: vegas30.exe
   Function: FUN_0053fa20
   Address: 0053fa20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053fa20(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_005b83b0(param_1,1);
  if (param_2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_2;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)param_2[2];
    do {
      iVar3 = *piVar1;
      if ((param_3 == *(int *)(iVar3 + 8)) && (param_4 == *(int *)(iVar3 + 0xc))) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      iVar3 = 0;
    } while (iVar2 < iVar4);
  }
  FUN_005b84d0(param_1,1);
  return iVar3;
}


