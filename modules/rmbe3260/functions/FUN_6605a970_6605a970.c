/* Module: rmbe3260.dll
   Function: FUN_6605a970
   Address: 6605a970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6605a970(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *this;
  uint *puVar5;
  
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0xc) < param_3) {
    return -0x7ff8ffa9;
  }
  piVar1 = (int *)(param_1 + -0x10);
  param_3 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + -0x10) + 0x34))(piVar1,&param_3);
  if (iVar4 < 0) {
    return iVar4;
  }
  if (*(uint *)(param_1 + 0x10) < param_3 + uVar3) {
    iVar4 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,&param_3);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (*(uint *)(param_1 + 0x10) < param_3 + uVar3) {
      iVar4 = -0x7ffbfda1;
    }
  }
  if (-1 < iVar4) {
    this = operator_new(0x1c);
    if (this == (void *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = FUN_6605b240(this,param_2,uVar3,*(undefined4 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x1c),param_4,param_5);
    }
    if (puVar5 != (uint *)0x0) {
      FUN_6605b2d0(puVar5);
      FUN_6605c550((void *)(param_1 + 0x34),puVar5);
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + uVar3;
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,uVar3);
      return 0;
    }
    iVar4 = -0x7ff8fff2;
  }
  return iVar4;
}


