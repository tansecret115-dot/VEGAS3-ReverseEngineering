/* Module: rmme3260.dll
   Function: FUN_66219970
   Address: 66219970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66219970(void *this,int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 *in_stack_ffffffa4;
  undefined4 *in_stack_ffffffa8;
  undefined4 in_stack_ffffffac;
  undefined4 in_stack_ffffffb0;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int **ppiStack_3c;
  int *piStack_38;
  byte **ppbStack_34;
  int **ppiStack_30;
  int *piStack_2c;
  byte **ppbStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined4 local_c;
  byte *local_8;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  piStack_20 = param_1;
  puStack_24 = (undefined4 *)0x6621999b;
  (**(code **)(*param_1 + 4))();
  local_c = 0;
  local_8 = (byte *)0x0;
  param_1 = (int *)0x0;
  if (param_2 != 0) {
    puStack_24 = (undefined4 *)0x662199b2;
    FUN_66219130((int)this);
  }
  puStack_24 = &local_c;
  ppbStack_28 = &local_8;
  piStack_2c = piVar2;
  ppiStack_30 = (int **)0x662199c0;
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  ppiStack_30 = (int **)local_c;
  while (local_c = ppiStack_30, iVar3 == 0) {
    FUN_66250280(&ppiStack_3c,(char *)local_8);
    FUN_66219310(this);
    ppiStack_30 = (int **)&local_c;
    ppbStack_34 = &local_8;
    piStack_38 = piVar2;
    ppiStack_3c = (int **)0x662199eb;
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    ppiStack_30 = (int **)local_c;
  }
  ppbStack_34 = &local_8;
  piStack_38 = piVar2;
  ppiStack_3c = (int **)0x662199fd;
  ppiStack_30 = &param_1;
  iVar3 = (**(code **)(*piVar2 + 0x24))();
  while ((iVar3 == 0 && ((int **)param_1 != (int **)0x0))) {
    ppiStack_3c = (int **)param_1;
    (*(code *)((int *)*param_1)[7])();
    piVar10 = param_1;
    uVar4 = (**(code **)(*param_1 + 0x18))();
    uVar9 = 1;
    FUN_66250280(&stack0xffffffa8,(char *)local_8);
    in_stack_ffffffa4 = (undefined4 *)0x66219a30;
    FUN_662191a0(this,in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0,uVar9,uVar4,piVar10);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
      param_1 = (int *)0x0;
    }
    in_stack_ffffffb0 = 0x66219a4e;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
  }
  ppiStack_3c = &param_1;
  iVar3 = (**(code **)(*piVar2 + 0x34))();
  do {
    if ((iVar3 != 0) || (param_1 == (int *)0x0)) {
      (**(code **)(*piVar2 + 8))();
      return 0;
    }
    pbVar6 = &DAT_6626b890;
    pbVar5 = local_8;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_66219a9b:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_66219aa0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_66219a9b;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_66219aa0:
    if (iVar3 != 0) {
      piVar10 = param_1;
      (**(code **)(*param_1 + 0x1c))();
      uVar9 = 0x66219ab6;
      uVar4 = (**(code **)(*param_1 + 0x18))();
      uVar8 = 2;
      FUN_66250280(&stack0xffffffa4,(char *)local_8);
      FUN_662191a0(this,in_stack_ffffffa4,in_stack_ffffffa8,uVar9,uVar8,uVar4,piVar10);
    }
    (**(code **)(*param_1 + 8))();
    in_stack_ffffffa8 = (undefined4 *)0x66219ae6;
    iVar3 = (**(code **)(*piVar2 + 0x38))();
  } while( true );
}


