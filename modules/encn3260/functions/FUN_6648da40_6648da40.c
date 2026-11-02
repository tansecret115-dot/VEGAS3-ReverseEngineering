/* Module: encn3260.dll
   Function: FUN_6648da40
   Address: 6648da40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648da40(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
    if (uVar1 != 0) {
      FUN_664965b0(*(void **)(uVar1 + 0x16));
    }
  }
  return 0;
}


