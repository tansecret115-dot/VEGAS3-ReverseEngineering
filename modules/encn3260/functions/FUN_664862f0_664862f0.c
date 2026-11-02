/* Module: encn3260.dll
   Function: FUN_664862f0
   Address: 664862f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664862f0(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar7;
  void *this;
  
  iVar2 = param_1;
  this = (void *)0x0;
  piVar5 = *(int **)(param_1 + 0x48);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x160) + 4))();
  param_1 = 0;
  if (param_2 == 0) {
    if (DAT_664f05c0 == 0) goto LAB_664864a3;
    if ((*(int *)(iVar2 + 0x30) != 0) || (*(int *)(iVar2 + -0x34) != 0)) {
      (**(code **)(**(int **)(iVar2 + 0x28) + 0xc))(*(int **)(iVar2 + 0x28),0);
      goto LAB_664864a3;
    }
    param_2 = 0;
    if ((*(int *)(iVar2 + 0x126) != 0) && (*(int *)(iVar2 + 0x12a) != 0)) {
      param_2 = *(int *)(iVar2 + -0x3c);
    }
    if ((*(int *)(iVar2 + 0x126) == 0) || (uVar7 = extraout_var, *(int *)(iVar2 + 0x12a) != 0)) {
      if ((*(uint *)(iVar2 + 0x11a) == 0) && (*(int *)(iVar2 + 0x11e) == 0)) {
        if (*(int *)(iVar2 + 0x122) == 0) {
          sVar6 = *(short *)(iVar2 + 0x18);
        }
        else {
          sVar6 = *(short *)(iVar2 + 0x152);
        }
      }
      else {
        sVar6 = *(short *)(iVar2 + 0xa4);
      }
      if (*(uint *)(iVar2 + 0x11e) == 0) {
        sVar1 = *(short *)(iVar2 + 0x18);
      }
      else {
        sVar1 = *(short *)(iVar2 + 0x152);
      }
      this = (void *)FUN_6648af30(*(void **)(iVar2 + 0x2c),param_3,sVar6,
                                  *(uint *)(iVar2 + 0x11e) | *(uint *)(iVar2 + 0x11a),
                                  *(char **)(iVar2 + 0x8c),sVar1,param_2);
      uVar7 = extraout_var_00;
    }
    if (this == (void *)0x0) {
      iVar4 = *(int *)(iVar2 + 0x11a);
      if ((iVar4 == 0) && (iVar4 = *(int *)(iVar2 + 0x11e), iVar4 == 0)) {
        param_1 = FUN_6648ad90(*(void **)(iVar2 + 0x2c),*(int **)(iVar2 + -0x3c),
                               (void *)(iVar2 + -0x40),*(char **)(iVar2 + 0x8c),
                               CONCAT22(uVar7,*(undefined2 *)(iVar2 + 0x18)),param_3,0,
                               *(int **)(iVar2 + 0x122),(int *)(uint)*(ushort *)(iVar2 + 0x152));
      }
      else {
        param_1 = FUN_6648ad90(*(void **)(iVar2 + 0x2c),*(int **)(iVar2 + -0x3c),
                               (void *)(iVar2 + -0x40),*(char **)(iVar2 + 0x98),
                               CONCAT22(uVar7,*(undefined2 *)(iVar2 + 0xa4)),param_3,1,
                               *(int **)(iVar2 + 0x122),
                               (int *)CONCAT22((short)((uint)iVar4 >> 0x10),
                                               *(undefined2 *)(iVar2 + 0x152)));
      }
      goto LAB_664864a3;
    }
    FUN_6648bbf0(this,(int *)(iVar2 + -0x40));
    *(void **)(iVar2 + 0x30) = this;
    uVar3 = FUN_6648be90((int)this);
    *(undefined4 *)(iVar2 + -0x34) = uVar3;
    FUN_66489b40((int *)(iVar2 + -0x40));
    piVar5 = *(int **)(iVar2 + 0x28);
    param_2 = 0;
    iVar4 = *piVar5;
  }
  else {
    piVar5 = *(int **)(iVar2 + 0x28);
    iVar4 = *piVar5;
  }
  (**(code **)(iVar4 + 0xc))(piVar5,param_2);
LAB_664864a3:
  (**(code **)(**(int **)(iVar2 + 0x160) + 8))();
  return param_1;
}


