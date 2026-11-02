/* Module: rmbe3260.dll
   Function: FUN_6601b890
   Address: 6601b890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601b890(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 0x18))();
    if (*(undefined4 **)(param_1 + 0x130) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x130))(1);
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1f6) != (undefined4 *)0x0) {
    FUN_6603c1b0(*(undefined4 **)(param_1 + 0x1f6));
    *(undefined4 *)(param_1 + 0x1f6) = 0;
  }
  puVar2 = operator_new(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_6603c140(puVar2);
  }
  *(int *)(param_1 + 0x1f6) = iVar3;
  if (iVar3 != 0) {
    FUN_6603c1a0(iVar3);
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar4 = FUN_6601d0f0((undefined4 *)(param_1 + 0x68));
    if (iVar4 < 0) {
      iVar3 = iVar4;
    }
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar4 = FUN_6601d0f0((undefined4 *)(param_1 + 0x6c));
    if (iVar4 < 0) {
      iVar3 = iVar4;
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar4 = FUN_6601d0f0((undefined4 *)(param_1 + 0x70));
    if (iVar4 < 0) {
      iVar3 = iVar4;
    }
  }
  piVar1 = *(int **)(param_1 + 0x140);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = *(int **)(param_1 + 0x140);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
  }
  piVar1 = *(int **)(param_1 + 0x144);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return iVar3;
}


