/* Module: vegas30k.dll
   Function: FUN_011c2b80
   Address: 011c2b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011c2b80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_8;
  int *piStack_4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  iVar4 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))
                      (*(int **)(param_1 + 0x20),iVar4,&local_8,0,0);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                        (*(int **)(param_1 + 0x1c),local_8,&piStack_4);
      if (iVar2 == 0) {
        (**(code **)(*piStack_4 + 8))(piStack_4);
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar1 == 0);
  iVar4 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) + iVar4;
  if (iVar4 == 0) {
    return iVar1;
  }
  piVar3 = calloc(1,iVar4 << 2);
  *(int **)(param_1 + 0x14) = piVar3;
  if (piVar3 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar4 = 0;
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))
                      (*(int **)(param_1 + 0x20),iVar4,&local_8,0,0);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                        (*(int **)(param_1 + 0x1c),local_8,&piStack_4);
      if (iVar2 == 0) {
        (**(code **)(*piStack_4 + 8))(piStack_4);
      }
      else {
        *piVar3 = iVar4;
        piVar3 = piVar3 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar1 == 0);
  return 0;
}


