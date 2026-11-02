/* Module: sfxpfx2.dll
   Function: FUN_5c8cd983
   Address: 5c8cd983
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c8cd983(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5c8cd955(this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_5c8cd975(iVar1);
    if (iVar2 == param_1) break;
    if (iVar1 == 0) {
      iVar1 = *(int *)this;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}


