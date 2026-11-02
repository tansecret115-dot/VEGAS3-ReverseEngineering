/* Module: encn3260.dll
   Function: FUN_664932e0
   Address: 664932e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664932e0(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0xba) == 0) {
    *(int **)((int)this + 0xb6) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0xb6) + 0x28))
              (*(int **)((int)this + 0xb6),*(int *)((int)this + 0xba),
               *(undefined4 *)((int)this + 0xbe));
  }
  (**(code **)(**(int **)((int)this + 0xb6) + 0x24))(*(int **)((int)this + 0xb6),param_1,param_2);
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0xba) = param_1;
  *(undefined4 *)((int)this + 0xbe) = param_2;
  if (*(int *)((int)this + 0x2c) != 0) {
    iVar1 = FUN_6648d1b0(*(int *)((int)this + 0x2c));
    while (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x16) + 0x206) = 1;
      iVar1 = FUN_6648d220(*(int *)((int)this + 0x2c));
    }
  }
  iVar1 = *(int *)((int)this + 0x96);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == 0)) && (*(int *)((int)this + 0x1c) != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
    uVar2 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))
                      (*(int **)((int)this + 0x10),*(undefined4 *)((int)this + 0x96),0);
    *(undefined4 *)(*(int *)((int)this + 0x96) + 0x10) = uVar2;
  }
  return;
}


