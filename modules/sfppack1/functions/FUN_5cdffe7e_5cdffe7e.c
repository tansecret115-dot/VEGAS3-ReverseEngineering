/* Module: sfppack1.dll
   Function: FUN_5cdffe7e
   Address: 5cdffe7e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cdffe7e(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x50))(0,param_1);
  if (-1 < iVar1) {
    FUN_5cdfdf04();
  }
  return;
}


