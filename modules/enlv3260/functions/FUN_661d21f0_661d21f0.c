/* Module: enlv3260.dll
   Function: FUN_661d21f0
   Address: 661d21f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d21f0(int *param_1,char *param_2,undefined2 param_3,char *param_4,char *param_5,
                char *param_6)

{
  void *this;
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x5a);
  if (iVar2 == 0) {
    FUN_661d2e40(param_1 + 9,param_2);
    FUN_661d2e40(param_1 + 0xc,param_4);
    FUN_661d2e40(param_1 + 0xf,param_5);
    FUN_661d2e40(param_1 + 0x12,param_6);
    *(undefined2 *)(param_1 + 0x15) = param_3;
    this = operator_new(0xac);
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_661d1000(this,param_1);
    }
    param_1[8] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      iVar2 = (**(code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8]);
      return iVar2;
    }
    iVar2 = -0x7ff8fff2;
  }
  return iVar2;
}


