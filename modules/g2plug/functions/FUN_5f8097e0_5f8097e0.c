/* Module: g2plug.dll
   Function: FUN_5f8097e0
   Address: 5f8097e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8097e0(int param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_retaddr;
  undefined4 *in_stack_00000020;
  int *in_stack_00000024;
  uint auStack_24 [2];
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  *in_stack_00000020 = param_4;
  auStack_24[1] = 0;
  *in_stack_00000024 = 0;
  auStack_24[0] = 0;
  iVar2 = (**(code **)(*(int *)param_3[10] + 0x24))(param_1,param_2);
  if (iVar2 != 0) {
    return;
  }
  piVar3 = (int *)*in_stack_00000024;
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  piVar4 = param_3;
  if ((unaff_retaddr != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_3[0xd] + 0xc))
                        (param_4,piVar3,unaff_retaddr,uStack_10,uStack_c), piVar4 = piStack_8,
     -1 < iVar2)) {
    *param_3 = (int)unaff_retaddr;
    if (unaff_retaddr[4] == 0) {
      if (((unaff_retaddr[8] != 0) || (uVar1 = *(ushort *)((int)unaff_retaddr + 0xe), uVar1 == 0))
         || (8 < uVar1)) goto LAB_5f809893;
      iVar2 = *unaff_retaddr + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (unaff_retaddr[4] == 3) {
        piVar3 = unaff_retaddr + 0xd;
        goto LAB_5f8098a3;
      }
LAB_5f809893:
      iVar2 = *unaff_retaddr + unaff_retaddr[8] * 4;
    }
    piVar3 = (int *)(iVar2 + (int)unaff_retaddr);
  }
LAB_5f8098a3:
  iVar2 = FUN_5f809940((int *)*param_3,piVar3,*(uint *)((int)piVar4 + 0x3fb),
                       *(uint *)((int)piVar4 + 0x3ff),param_2,auStack_24);
  if (iVar2 < 0) {
    return;
  }
  *param_3 = *param_2;
  piVar3 = (int *)*param_2;
  if (piVar3[4] == 0) {
    if (((piVar3[8] != 0) || (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_5f809908;
    iVar2 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar3[4] == 3) {
      piVar3 = piVar3 + 0xd;
      goto LAB_5f809912;
    }
LAB_5f809908:
    iVar2 = piVar3[8];
  }
  piVar3 = (int *)(*piVar3 + iVar2 * 4 + (int)piVar3);
LAB_5f809912:
  *param_4 = (int)piVar3;
  if ((int *)piVar4[0xd] != (int *)0x0) {
    (**(code **)(*(int *)piVar4[0xd] + 0x10))(*param_2,piVar3,uStack_10,uStack_c,auStack_24);
  }
  return;
}


