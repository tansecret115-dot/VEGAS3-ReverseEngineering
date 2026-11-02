/* Module: encn3260.dll
   Function: FUN_6648e0b0
   Address: 6648e0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648e0b0(void *this,uint param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar1 != 0) {
    if (*(int *)((int)this + 0x30) == 0) {
      if (*(void **)(uVar1 + 0x16) == (void *)0x0) {
        return 0x80004005;
      }
      if (*(int *)((int)this + 0x5c) == 0) {
        FUN_66494c00(*(void **)(uVar1 + 0x16),param_2);
      }
    }
    else {
      *(undefined2 *)(uVar1 + 4) = param_2;
      if (*(void **)(uVar1 + 0x1a) != (void *)0x0) {
        FUN_66494870(*(void **)(uVar1 + 0x1a),param_2);
        return 0;
      }
    }
  }
  return 0;
}


