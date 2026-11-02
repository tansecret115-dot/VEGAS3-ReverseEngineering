/* Module: vegas30k.dll
   Function: FUN_011b3fc0
   Address: 011b3fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b3fc0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x34))
            (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x9c4));
  puVar2 = (undefined4 *)FUN_011b52f0();
  if (puVar2 == (undefined4 *)0x0) {
    FUN_011b51f0(&stack0xfffffff4);
  }
  puVar2[2] = 1;
  *(undefined4 *)(param_1 + 0x9cc) = puVar2[6];
  *puVar2 = *(undefined4 *)(param_1 + 0x9c0);
  puVar2[1] = 1;
  puVar2[3] = *(undefined4 *)(param_1 + 0x9c4);
  puVar2[4] = *(undefined4 *)(param_1 + 0x9c8);
  puVar2[5] = param_1 + 0x9d0;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),1);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_011b3a00();
  uVar4 = ftol();
  *(undefined4 *)(param_1 + 400) = uVar4;
  *(undefined4 *)(param_1 + 0x194) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1c0);
  iVar5 = 0x100;
  do {
    uVar4 = *(undefined4 *)(param_1 + 400);
    puVar2[0x100] = uVar4;
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar1 = *(int **)(param_1 + 0xc70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,*(undefined4 *)(param_1 + 400));
  }
  *(undefined4 *)(param_1 + 0xc74) = 0;
  return uVar3;
}


