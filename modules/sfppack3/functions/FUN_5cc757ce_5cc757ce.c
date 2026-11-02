/* Module: sfppack3.dll
   Function: FUN_5cc757ce
   Address: 5cc757ce
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc757ce(void *this,undefined4 param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xd8) + 0x48))(0,param_1);
  if (-1 < iVar1) {
    FUN_5cc738aa(this,unaff_ESI);
  }
  return;
}


