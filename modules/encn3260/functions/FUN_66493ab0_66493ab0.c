/* Module: encn3260.dll
   Function: FUN_66493ab0
   Address: 66493ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66493ab0(void *this,undefined1 *param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_c;
  uint uStack_8;
  
  bVar2 = false;
  piVar1 = *(int **)((int)this + 0x89);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)((int)this + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,&local_c);
      uVar3 = uStack_8 / 1000 + local_c * 1000;
      goto LAB_66493b4f;
    }
    FUN_664d08d0(&local_c);
    uVar3 = (int)uStack_8 / 1000 + local_c * 1000;
  }
  else {
    (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
    uVar3 = uStack_8 / 1000 + local_c * 1000;
  }
  bVar2 = true;
LAB_66493b4f:
  uVar5 = *(uint *)((int)this + 0x81);
  if (uVar5 == 0) {
    uVar5 = 1000;
  }
  else if (uVar3 < uVar5) {
    uVar5 = (uVar3 - uVar5) - 1;
  }
  else {
    uVar5 = uVar3 - uVar5;
  }
  if (999 < uVar5) {
    *(uint *)((int)this + 0x81) = uVar3;
    if (!bVar2) {
      FUN_664d08d0(&local_c);
      uVar3 = (int)uStack_8 / 1000 + local_c * 1000;
    }
    uVar5 = *(uint *)((int)this + 0x85);
    if (uVar5 == 0) {
      *(uint *)((int)this + 0x85) = uVar3;
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


