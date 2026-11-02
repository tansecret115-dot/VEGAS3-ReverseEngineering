/* Module: sfxpfx2.dll
   Function: FUN_5c8cb499
   Address: 5c8cb499
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8cb499(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x50))(1,param_1);
  if (-1 < iVar1) {
    FUN_5c8c956b(this);
  }
  return;
}


