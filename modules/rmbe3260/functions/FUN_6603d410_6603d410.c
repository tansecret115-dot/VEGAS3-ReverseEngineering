/* Module: rmbe3260.dll
   Function: FUN_6603d410
   Address: 6603d410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6603d410(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = operator_new(0xb0);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_6603d910(puVar1);
  }
  *(int **)((int)this + 0x18) = piVar2;
  (**(code **)(*piVar2 + 4))(this);
  uVar3 = FUN_6603dd40(*(void **)((int)this + 0x18),*(int *)(param_1 + 0x24),
                       *(char **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28));
  if (uVar3 == 0) {
    uVar3 = FUN_6603de00(*(void **)((int)this + 0x18),*(char **)(param_1 + 0xc),
                         *(char **)(param_1 + 0x10),*(char **)(param_1 + 0x14),
                         *(char **)(param_1 + 0x18));
    if (uVar3 == 0) {
      FUN_6605b970((void *)((int)this + 0x28),*(char **)(param_1 + 0xc));
      FUN_6605b970((void *)((int)this + 0x34),*(char **)(param_1 + 0x10));
      FUN_6605b970((void *)((int)this + 0x40),*(char **)(param_1 + 0x14));
      FUN_6605b970((void *)((int)this + 0x4c),*(char **)(param_1 + 0x18));
    }
  }
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x34);
  *(uint *)((int)this + 0x60) = (uint)(*(int *)(param_1 + 0x24) != 0);
  FUN_6603eab0(*(void **)((int)this + 0x18),*(int *)(param_1 + 0x38));
  FUN_6603dc90(*(void **)((int)this + 0x18),*(int *)((int)this + 0x1c));
  FUN_6603dcc0(*(void **)((int)this + 0x18),*(int *)((int)this + 0x20));
  FUN_6603dcf0(*(void **)((int)this + 0x18),*(int *)((int)this + 0x24));
  if ((*(int *)(param_1 + 0x24) != 0) && (*(void **)((int)this + 0x5c) != (void *)0x0)) {
    FUN_6603d830(*(void **)((int)this + 0x5c),"Live = 1");
    return uVar3;
  }
  FUN_6603d830(*(void **)((int)this + 0x5c),"Live = 0");
  return uVar3;
}


