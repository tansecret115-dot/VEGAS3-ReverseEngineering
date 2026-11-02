/* Module: vegas30k.dll
   Function: FUN_01193960
   Address: 01193960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01193960(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar4 = param_1;
  iVar6 = 0;
  if (-1 < param_3) {
    (**(code **)(*param_1 + 0x140))(param_1);
  }
  piVar1 = (int *)param_1[0x186];
  if ((piVar1 != (int *)0x0) && ((param_1[2] & 0x400U) != 0)) {
    iVar6 = (**(code **)(*piVar1 + 0xe8))(piVar1,param_2,param_3,param_4,param_5,param_6);
    for (iVar2 = param_1[0x19d]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      param_1 = (int *)iVar6;
      if ((((*(byte *)(iVar2 + 0xc) & 2) != 0) && ((*(byte *)(iVar2 + 8) & 2) != 0)) &&
         (*(int *)(piVar4[0x186] + 0x28) != *(int *)(iVar2 + 4))) {
        param_1 = (int *)FUN_01194550(param_2,param_3,param_4,param_5,param_6);
      }
      iVar6 = (int)param_1;
    }
  }
  FUN_011a8d40(param_2,param_3,param_4,param_5,param_6);
  if (-1 < param_3) {
    pcVar3 = (code *)piVar4[0x193];
    piVar4[0x1b6] = param_2;
    piVar4[0x1b7] = param_3;
    if (pcVar3 != (code *)0x0) {
      uVar5 = ftol(0,0,0xffffffff);
      (*pcVar3)(piVar4,0x15,piVar4[0x194],(int)piVar4 + 0x4be,0,0xffffffff,0xffffffff,0,0,uVar5,0);
    }
    iVar6 = (**(code **)(*piVar4 + 0x144))(piVar4,param_2,param_3);
    if (-1 < iVar6) {
      iVar6 = (**(code **)(*piVar4 + 0x13c))(piVar4,param_2,param_3);
      if (iVar6 < 0) {
        (**(code **)(*piVar4 + 0x140))(piVar4);
      }
      return iVar6;
    }
  }
  return iVar6;
}


