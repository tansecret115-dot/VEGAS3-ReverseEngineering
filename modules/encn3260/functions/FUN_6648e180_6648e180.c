/* Module: encn3260.dll
   Function: FUN_6648e180
   Address: 6648e180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648e180(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_6648d1b0(*(int *)((int)this + 0x2c));
  while (iVar1 != 0) {
    if (*(int *)((int)this + 0x30) == 0) {
      if (*(void **)(iVar1 + 0x16) != (void *)0x0) {
        FUN_664966f0(*(void **)(iVar1 + 0x16),param_1);
      }
    }
    else if (*(void **)(iVar1 + 0x1a) != (void *)0x0) {
      FUN_664948e0(*(void **)(iVar1 + 0x1a),param_1);
    }
    iVar1 = FUN_6648d220(*(int *)((int)this + 0x2c));
  }
  return 0;
}


