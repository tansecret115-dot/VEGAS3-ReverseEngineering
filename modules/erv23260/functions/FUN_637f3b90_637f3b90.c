/* Module: erv23260.dll
   Function: FUN_637f3b90
   Address: 637f3b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_637f3b90(void *this,int param_1,int param_2,byte param_3,uint *param_4,int *param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar7 = 0;
  bVar2 = true;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     ((*(int *)(param_1 + 0x2c) != 8 ||
      (iVar4 = (**(code **)(**(int **)((int)this + 4) + 8))(), iVar4 == 0)))) {
    if ((*(int *)(param_1 + 0x2c) == 8) ||
       (((param_3 & 4) != 0 && (*(int *)((int)this + 0x334) != 0)))) {
      if (*(int *)((int)this + 0x334) != 0) {
        iVar7 = FUN_637f9480(*(void **)((int)this + 0x2c0),param_1,param_2,param_3,param_4,param_5,
                             (int)this + 0x1c8);
        *(undefined4 *)((int)this + 0x334) = 0;
        goto LAB_637f3efe;
      }
    }
    else {
      if ((param_3 & 4) == 0) {
        *(undefined4 *)((int)this + 0x3a0) = 0;
      }
      else {
        iVar7 = FUN_637f9480(*(void **)((int)this + 0x2c0),param_1,param_2,param_3,param_4,param_5,
                             (int)this + 0x1c8);
        if ((((*param_4 & 1) != 0) || (*(int *)((int)this + 0x3a8) != 0)) || (iVar7 != 0))
        goto LAB_637f3efe;
      }
      FUN_637fa680(*(void **)((int)this + 0x2b4),*(uint *)(param_1 + 0x34),*(int *)(param_1 + 0x2c))
      ;
      *(undefined4 *)((int)this + 0x3a8) = 0;
      bVar3 = FUN_637fa720(*(int **)((int)this + 0x2b4));
      iVar4 = CONCAT31(extraout_var,bVar3);
      while (iVar4 == 0) {
        if ((*(int *)((int)this + 0xc) == 0x15) || (*(int *)((int)this + 0xc) == 0x16)) {
          puVar8 = (undefined4 *)((int)this + 0xdc);
          puVar9 = (undefined4 *)((int)this + 0x1c8);
          for (iVar7 = 0x3b; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          FUN_637fc500(*(void **)((int)this + 0x2b4),*(int *)((int)this + 0x8c),(int)this + 0x90);
        }
        puVar1 = (uint *)((int)this + 0x1c8);
        iVar7 = FUN_637fb5d0(*(void **)((int)this + 0x2b4),puVar1);
        if (iVar7 == 8) {
LAB_637f3f3e:
          iVar7 = 0;
          *param_4 = *param_4 | 2;
          goto LAB_637f3efe;
        }
        if (iVar7 != 0) goto LAB_637f3efe;
        iVar7 = FUN_637f8590(*(void **)((int)this + 0x2c0),(int)puVar1);
        iVar7 = FUN_637fb930(*(void **)((int)this + 0x2b4),(int)puVar1,iVar7);
        if (iVar7 == 8) goto LAB_637f3f3e;
        if (iVar7 != 0) goto LAB_637f3efe;
        iVar4 = FUN_637f8c80(*(void **)((int)this + 0x2c0),(int *)puVar1,
                             *(undefined4 *)((int)this + 0x3ac));
        iVar7 = *(int *)((int)this + 0x1dc);
        *(int *)((int)this + 0x3ac) = iVar4;
        if (((iVar7 == 2) || (iVar7 == 3)) || ((iVar7 == 1 && (*(int *)((int)this + 0x1ec) != 0))))
        {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (*(int *)((int)this + 0x3a0) == 0) {
          if ((((*(int *)((int)this + 0x3b0) == 1) && (bVar2)) && (!bVar3)) && (iVar4 == 0)) {
            iVar7 = FUN_637f9020(*(void **)((int)this + 0x2c0),param_1,param_2,param_3,param_4,
                                 param_5,(int *)puVar1);
            if (iVar7 != 0) goto LAB_637f3efe;
            if ((*param_4 & 1) != 0) {
              *(undefined4 *)((int)this + 0x3a0) = 1;
              goto LAB_637f3efe;
            }
          }
        }
        else {
          *(undefined4 *)((int)this + 0x3a0) = 0;
        }
        iVar7 = FUN_637f8cb0(*(void **)((int)this + 0x2c0),(int *)puVar1,
                             (undefined4 *)((int)this + 0x340),(undefined4 *)((int)this + 0x344),
                             (undefined4 *)((int)this + 0x348),*(undefined4 *)(param_1 + 0x30));
        if (iVar7 != 0) goto LAB_637f3efe;
        if (*(int *)((int)this + 0x338) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x340) + 0x120) = *(undefined4 *)((int)this + 0x308);
        }
        iVar4 = FUN_637fd250(*(int *)((int)this + 0x2b4));
        iVar7 = FUN_637f44d0(this);
        if (iVar7 != 0) goto LAB_637f3efe;
        if (*(int *)((int)this + 0x3a4) == 0) {
          iVar5 = FUN_637fd250(*(int *)((int)this + 0x2b4));
          *(int *)(*(int *)(*(int *)((int)this + 0x2c0) + 0x310) + 0x14) = iVar5 - iVar4;
        }
        else {
          *(undefined4 *)((int)this + 0x3a4) = 0;
        }
        bVar2 = false;
        bVar3 = FUN_637fa720(*(int **)((int)this + 0x2b4));
        iVar4 = CONCAT31(extraout_var_00,bVar3);
      }
      *(undefined4 *)((int)this + 0x3a8) = 1;
      if (((*(int *)((int)this + 0x3b0) != 0) && (*(int *)((int)this + 0x1dc) != 3)) &&
         ((*(int *)((int)this + 0x334) == 0 && (*(int *)((int)this + 0x3ac) == 0))))
      goto LAB_637f3efe;
      if (*(int *)((int)this + 0x34c) != 0) {
        iVar7 = FUN_637f9200(*(void **)((int)this + 0x2c0),param_1,param_2,param_3,param_4,param_5,
                             (int)this + 0x1c8,0);
        goto LAB_637f3efe;
      }
    }
  }
  *param_4 = *param_4 | 2;
LAB_637f3efe:
  iVar4 = *(int *)(*(int *)((int)this + 0x2c0) + 0x34);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x7c) != 0)) {
    *param_4 = *param_4 | 0x10;
  }
  if ((*param_4 & 2) == 0) {
    uVar6 = FUN_637fa180(*(int *)((int)this + 0x2c0));
    *(undefined4 *)(param_2 + 0x30) = uVar6;
  }
  return iVar7;
}


