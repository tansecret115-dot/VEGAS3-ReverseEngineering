/* Module: sfxpfx1.dll
   Function: FUN_5c97c053
   Address: 5c97c053
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c97c053(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5c97c025(this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_5c97c045(iVar1);
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


