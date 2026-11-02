/* Module: sfppack2.dll
   Function: FUN_5cd3ecfe
   Address: 5cd3ecfe
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cd3ecfe(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x50))(0,param_1);
  if (-1 < iVar1) {
    FUN_5cd3cd84();
  }
  return;
}


