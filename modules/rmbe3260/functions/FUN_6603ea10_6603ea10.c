/* Module: rmbe3260.dll
   Function: FUN_6603ea10
   Address: 6603ea10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6603ea10(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(void **)(param_1 + 0x7c) == (void *)0x0) {
    return 0;
  }
  FUN_66034a10(*(void **)(param_1 + 0x7c),*(undefined2 *)(param_1 + 0x74));
  uVar1 = (**(code **)(**(int **)(param_1 + 0x7c) + 0xc))();
  pvVar2 = operator_new(uVar1);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x18))(pvVar2,uVar1);
  if (-1 < iVar3) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))(uVar1,pvVar2);
    }
    if ((-1 < iVar3) && (*(int **)(param_1 + 0x18) != (int *)0x0)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(uVar1,pvVar2);
    }
  }
  FUN_6605ed40((void *)(param_1 + 0x48),*(uint *)(param_1 + 0x7c),(int)pvVar2);
  uVar4 = 0xfff2;
  if (-1 < iVar3) {
    uVar4 = 0;
  }
  return uVar4;
}


