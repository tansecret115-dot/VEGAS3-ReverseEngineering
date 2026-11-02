/* Module: encn3260.dll
   Function: FUN_66491830
   Address: 66491830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66491830(void *this,undefined1 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_c;
  uint uStack_8;
  
  bVar2 = false;
  piVar1 = *(int **)((int)this + 0xca);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,&local_c);
      uVar3 = uStack_8 / 1000 + local_c * 1000;
      goto LAB_664918cf;
    }
    FUN_664d08d0(&local_c);
    uVar3 = (int)uStack_8 / 1000 + local_c * 1000;
  }
  else {
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    uVar3 = uStack_8 / 1000 + local_c * 1000;
  }
  bVar2 = true;
LAB_664918cf:
  uVar5 = *(uint *)((int)this + 0xa2);
  if (uVar5 == 0) {
    uVar5 = *(uint *)((int)this + 0xae);
  }
  else if (uVar3 < uVar5) {
    uVar5 = (uVar3 - uVar5) - 1;
  }
  else {
    uVar5 = uVar3 - uVar5;
  }
  if (*(uint *)((int)this + 0xae) <= uVar5) {
    *(uint *)((int)this + 0xa2) = uVar3;
    if (!bVar2) {
      FUN_664d08d0(&local_c);
      uVar3 = (int)uStack_8 / 1000 + local_c * 1000;
    }
    uVar5 = *(uint *)((int)this + 0xa6);
    if (uVar5 == 0) {
      *(uint *)((int)this + 0xa6) = uVar3;
      local_c = 0;
    }
    else if (uVar3 < uVar5) {
      local_c = (uVar3 - uVar5) + -1;
    }
    else {
      local_c = uVar3 - uVar5;
    }
    uStack_8 = 0;
    uVar4 = ftol();
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined2 *)(param_1 + 6) = 9;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 4) = 0xff08;
    return 1;
  }
  return 0;
}


