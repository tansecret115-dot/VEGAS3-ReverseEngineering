/* Module: rmbe3260.dll
   Function: FUN_6603d710
   Address: 6603d710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603d710(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0xfff9;
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    uVar1 = FUN_6603e9a0(*(void **)((int)this + 0x18),param_1);
    return uVar1;
  }
  return 0xfff1;
}


