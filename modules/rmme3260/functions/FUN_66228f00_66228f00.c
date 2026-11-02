/* Module: rmme3260.dll
   Function: FUN_66228f00
   Address: 66228f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66228f00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  if (*(int *)(param_1 + 0x13e) == 0) {
    local_8 = -0x7ffbfff9;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x142) + 0x24))();
    local_8 = (**(code **)(**(int **)(param_1 + 0x142) + 4))();
    if (local_8 < 0) goto LAB_66229033;
    iVar3 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x94) <= iVar3) {
      local_8 = -0x7fffbffb;
      goto LAB_66229033;
    }
    if (-1 < iVar3) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x90) + iVar3 * 4);
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      *(int *)((int)piVar1 + 0x16) = iVar2;
      piVar1[3] = iVar2 - iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (*(int *)(param_1 + 0x94) <= iVar3) {
      local_8 = -0x7fffbffb;
      goto LAB_66229033;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x90) + iVar3 * 4);
    (**(code **)(*piVar1 + 0x14))(iVar2);
    uVar4 = (**(code **)(*piVar1 + 0xc))();
    local_c = operator_new(uVar4);
    if (local_c == (void *)0x0) {
      local_8 = -0x7ff8fff2;
      goto LAB_66229033;
    }
    (**(code **)(*piVar1 + 0x18))(local_c,uVar4);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x142) + 0x30))(local_c,uVar4);
    if (uVar5 != uVar4) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x142) + 4))();
      goto LAB_66229033;
    }
    operator_delete(local_c);
    *(undefined2 *)(param_1 + 0x152) = 0;
  }
  local_c = (void *)0x0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
LAB_66229033:
  if (local_c != (void *)0x0) {
    operator_delete(local_c);
  }
  return local_8;
}


