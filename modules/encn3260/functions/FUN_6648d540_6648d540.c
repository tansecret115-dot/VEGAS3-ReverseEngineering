/* Module: encn3260.dll
   Function: FUN_6648d540
   Address: 6648d540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __thiscall FUN_6648d540(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar1 != 0) {
    return *(undefined2 *)(uVar1 + 4);
  }
  return 0;
}


