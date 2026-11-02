/* Module: sftrkfx1.dll
   Function: FUN_5cbf325e
   Address: 5cbf325e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cbf325e(void *this,undefined4 param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x48))(0,param_1);
  if (-1 < iVar1) {
    FUN_5cbf133a(this,unaff_ESI);
  }
  return;
}


