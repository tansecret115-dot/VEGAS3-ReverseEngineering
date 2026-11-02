/* Module: rmme3260.dll
   Function: FUN_6622b4f0
   Address: 6622b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6622b4f0(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x13e) == 0) {
    return 0x80040007;
  }
  if ((*(int *)((int)this + 400) == 0) && (*(int *)((int)this + 0x19c) == 0)) {
    piVar1 = *(int **)((int)this + 0x1a4);
    *(undefined4 *)((int)this + 400) = 3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x1a4) = 0;
    }
    *(int **)((int)this + 0x1a4) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    uVar2 = (**(code **)(**(int **)((int)this + 0x1a4) + 0x18))(*(int **)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a8) = uVar2;
    if (*(void **)((int)this + 0x1a0) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x1a0));
      *(undefined4 *)((int)this + 0x1a0) = 0;
    }
    puVar3 = operator_new(0xd);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined4 **)((int)this + 0x1a0) = puVar3;
      FUN_6622b5e0(this);
      return 0;
    }
    *(undefined4 *)((int)this + 0x1a0) = 0;
    FUN_6622b5e0(this);
    return 0;
  }
  return 0x80040009;
}


