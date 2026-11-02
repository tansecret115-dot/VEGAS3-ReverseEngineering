/* Module: sfxpfx2.dll
   Function: FUN_5c8cb0fe
   Address: 5c8cb0fe
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5c8cb0fe(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x50))(0,param_1);
  if (-1 < iVar1) {
    FUN_5c8c9184();
  }
  return;
}


