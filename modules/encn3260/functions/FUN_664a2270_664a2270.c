/* Module: encn3260.dll
   Function: FUN_664a2270
   Address: 664a2270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a2270(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_664a21d0((void *)(param_1 + -0x14));
  uVar3 = 0;
  if ((param_2 != -1) && ((*(int *)(param_1 + 0xfd) != 0 || (*(int *)(param_1 + 0xed) == -1)))) {
    *(int *)(param_1 + 0xed) = param_2;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    return 0x80040009;
  }
  piVar1 = (int *)(**(code **)(*(int *)(iVar2 + 8) + 0x1c))(iVar2 + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((void *)(param_1 + -0x14) == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + -0x10;
    }
    uVar3 = FUN_664a1fc0(*(void **)(param_1 + 0x38),iVar2,*(int *)(param_1 + 0xed));
  }
  return uVar3;
}


