/* Module: sftrkfx1.dll
   Function: FUN_5cbf329e
   Address: 5cbf329e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbf329e(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x50))(0,param_1);
  if (-1 < iVar1) {
    FUN_5cbf1324();
  }
  return;
}


