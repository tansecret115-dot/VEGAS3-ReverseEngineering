/* Module: sfppack1.dll
   Function: FUN_5ce001c6
   Address: 5ce001c6
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5ce001c6(void *this,undefined4 param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  if (*(int *)((*(int **)((int)this + 0xa0))[0x23] + 0x18) == 0) {
    iVar1 = -0x7fff0001;
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x48))(1,param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_5cdfe300(this,unaff_ESI);
    }
  }
  return iVar1;
}


