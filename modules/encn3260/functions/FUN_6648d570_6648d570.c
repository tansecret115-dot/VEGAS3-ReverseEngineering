/* Module: encn3260.dll
   Function: FUN_6648d570
   Address: 6648d570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648d570(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar1 != 0) {
    return *(undefined4 *)(uVar1 + 0x12);
  }
  return 0;
}


