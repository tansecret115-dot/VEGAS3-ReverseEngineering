/* Module: encn3260.dll
   Function: FUN_6648dfd0
   Address: 6648dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648dfd0(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(uVar1 + 0x16);
}


