/* Module: rmto3260.dll
   Function: FUN_662e0080
   Address: 662e0080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e0080(void *this,int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
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
  puStack_24 = (undefined4 *)0x662e00ab;
  (**(code **)(*param_1 + 4))();
  local_c = 0;
  local_8 = (byte *)0x0;
  param_1 = (int *)0x0;
  if (param_2 != 0) {
    puStack_24 = (undefined4 *)0x662e00c2;
    FUN_662dfa10((int)this);
  }
  puStack_24 = &local_c;
  ppbStack_28 = &local_8;
  piStack_2c = piVar2;
  ppiStack_30 = (int **)0x662e00d0;
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  ppiStack_30 = (int **)local_c;
  while (local_c = ppiStack_30, iVar3 == 0) {
    FUN_662ef160(&ppiStack_3c,(char *)local_8);
    FUN_662dfbf0(this);
    ppiStack_30 = (int **)&local_c;
    ppbStack_34 = &local_8;
    piStack_38 = piVar2;
    ppiStack_3c = (int **)0x662e00fb;
    iVar3 = (**(code **)(*piVar2 + 0x18))();
    ppiStack_30 = (int **)local_c;
  }
  ppbStack_34 = &local_8;
  piStack_38 = piVar2;
  ppiStack_3c = (int **)0x662e010d;
  ppiStack_30 = &param_1;
  iVar3 = (**(code **)(*piVar2 + 0x24))();
  while ((iVar3 == 0 && ((int **)param_1 != (int **)0x0))) {
    ppiStack_3c = (int **)param_1;
    (*(code *)((int *)*param_1)[7])();
    piVar10 = param_1;
    uVar4 = (**(code **)(*param_1 + 0x18))();
    uVar9 = 1;
    FUN_662ef160(&stack0xffffffa8,(char *)local_8);
    in_stack_ffffffa4 = (undefined4 *)0x662e0140;
    FUN_662dfa80(this,in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0,uVar9,uVar4,piVar10);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
      param_1 = (int *)0x0;
    }
    in_stack_ffffffb0 = 0x662e015e;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
  }
  ppiStack_3c = &param_1;
  iVar3 = (**(code **)(*piVar2 + 0x34))();
  do {
    if ((iVar3 != 0) || (param_1 == (int *)0x0)) {
      (**(code **)(*piVar2 + 8))();
      return 0;
    }
    pcVar6 = "ASMRuleBook";
    pbVar5 = local_8;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_662e01ab:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_662e01b0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_662e01ab;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_662e01b0:
    if (iVar3 != 0) {
      piVar10 = param_1;
      (**(code **)(*param_1 + 0x1c))();
      uVar9 = 0x662e01c6;
      uVar4 = (**(code **)(*param_1 + 0x18))();
      uVar8 = 2;
      FUN_662ef160(&stack0xffffffa4,(char *)local_8);
      FUN_662dfa80(this,in_stack_ffffffa4,in_stack_ffffffa8,uVar9,uVar8,uVar4,piVar10);
    }
    (**(code **)(*param_1 + 8))();
    in_stack_ffffffa8 = (undefined4 *)0x662e01f6;
    iVar3 = (**(code **)(*piVar2 + 0x38))();
  } while( true );
}


