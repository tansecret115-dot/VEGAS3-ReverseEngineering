/* Module: rmbe3260.dll
   Function: FUN_6603d6e0
   Address: 6603d6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603d6e0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xfff9;
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    uVar1 = FUN_6603e940(*(void **)((int)this + 0x18),param_1);
    return uVar1;
  }
  return 0xfff1;
}


