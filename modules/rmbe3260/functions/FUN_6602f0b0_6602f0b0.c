/* Module: rmbe3260.dll
   Function: FUN_6602f0b0
   Address: 6602f0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6602f0b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *this_00;
  
  if (*(int *)((int)this + 0xc) == 0) {
    puVar3 = operator_new(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_6605c3e0(puVar3);
    }
    *(undefined4 *)((int)this + 0xc) = uVar4;
  }
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    puVar3[3] = param_4;
  }
  FUN_6605c550(*(void **)((int)this + 0xc),puVar3);
  if (*(int *)(*(int *)((int)this + 4) + 0x20) == 0) {
    this_00 = operator_new(0x14);
    if (this_00 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_6602ecb0(this_00,*(undefined4 *)((int)this + 4));
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0x20) = uVar4;
    piVar1 = *(int **)(*(int *)((int)this + 4) + 0x20);
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  iVar2 = *(int *)(*(int *)((int)this + 4) + 0x20);
  if ((*(int *)(iVar2 + 0xc) == 0) && (*(int *)(*(int *)((int)this + 4) + 0x18) != 0)) {
    *(undefined4 *)(iVar2 + 0xc) = 1;
    piVar1 = *(int **)(*(int *)((int)this + 4) + 0x18);
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(*(int *)((int)this + 4) + 0x20),0);
    *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 8) = uVar4;
  }
  return;
}


