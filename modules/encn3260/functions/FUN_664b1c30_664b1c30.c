/* Module: encn3260.dll
   Function: FUN_664b1c30
   Address: 664b1c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b1c30(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  if ((*(int *)((int)param_1 + 0x3a) != 0) &&
     (iVar3 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x6c), iVar3 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xb4));
  }
  iVar3 = *(int *)((int)param_1 + 0x42);
  if ((iVar3 != 0) &&
     ((((param_2[1] != *(int *)(iVar3 + 4) || (param_2[2] != *(int *)(iVar3 + 8))) ||
       (*(short *)(param_2 + 3) != *(short *)(iVar3 + 0xc))) ||
      ((*(short *)((int)param_2 + 0xe) != *(short *)(iVar3 + 0xe) ||
       (param_2[4] != *(int *)(iVar3 + 0x10))))))) {
    FUN_664b1460((int)param_1);
  }
  if (*(void **)((int)param_1 + 0x42) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x42));
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  puVar1 = operator_new(0x34);
  *(undefined4 **)((int)param_1 + 0x42) = puVar1;
  puVar4 = param_2;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar3 = FUN_664ba320((int)param_2);
  *(int *)((int)param_1 + 0x4e) = iVar3;
  if ((iVar3 == 10) || ((-1 < iVar3 && (iVar3 < 5)))) {
    iVar3 = FUN_664a9d00(*(int *)((int)param_1 + 0x3a));
    iVar2 = FUN_664a7460(*(int *)((int)param_1 + 0x3a));
    if (iVar2 == iVar3) {
      if (*(int *)((int)param_1 + 0x4ae) != 0) {
        FUN_664b1e60(param_1,1);
      }
      FUN_664b1e60(param_1,0);
      FUN_664b1d50((int)param_1);
    }
  }
  if ((*(int *)((int)param_1 + 0x3a) != 0) &&
     (iVar3 = *(int *)(*(int *)((int)param_1 + 0x3a) + 0x6c), iVar3 != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xb4));
  }
  return 0;
}


