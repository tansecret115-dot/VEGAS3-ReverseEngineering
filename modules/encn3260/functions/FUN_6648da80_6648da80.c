/* Module: encn3260.dll
   Function: FUN_6648da80
   Address: 6648da80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648da80(void *this,short param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x54) == 0) && (*(int *)((int)this + 0x2c) != 0)) {
    iVar1 = FUN_6648d1b0(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x54) = 1;
    while (iVar1 != 0) {
      if (*(short *)(iVar1 + 0x10) == param_1) {
        *(undefined4 *)(iVar1 + 0x22) = 1;
      }
      else if (*(int *)(iVar1 + 0x22) == 0) {
        *(undefined4 *)((int)this + 0x54) = 0;
        return;
      }
      iVar1 = FUN_6648d220(*(int *)((int)this + 0x2c));
    }
    if (*(int *)((int)this + 0x30) == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x24))(*(int **)((int)this + 0x14));
    }
  }
  return;
}


