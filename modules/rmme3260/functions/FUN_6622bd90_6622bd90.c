/* Module: rmme3260.dll
   Function: FUN_6622bd90
   Address: 6622bd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622bd90(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x13e) == 0) {
    return 0x80040007;
  }
  if ((*(int *)((int)this + 400) == 0) && (*(int *)((int)this + 0x19c) == 0)) {
    piVar1 = *(int **)((int)this + 0x1b0);
    *(undefined4 *)((int)this + 400) = 4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x1b0) = 0;
    }
    *(int **)((int)this + 0x1b0) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    uVar2 = (**(code **)(**(int **)((int)this + 0x1b0) + 0x18))(*(int **)((int)this + 0x1b0));
    *(undefined4 *)((int)this + 0x1b4) = uVar2;
    if (*(void **)((int)this + 0x1ac) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x1ac));
      *(undefined4 *)((int)this + 0x1ac) = 0;
    }
    puVar3 = operator_new(10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_1 + 2);
      *(undefined4 **)((int)this + 0x1ac) = puVar3;
      FUN_6622be80(this);
      return 0;
    }
    *(undefined4 *)((int)this + 0x1ac) = 0;
    FUN_6622be80(this);
    return 0;
  }
  return 0x80040009;
}


