/* Module: sfxpfx1.dll
   Function: FUN_5c97c244
   Address: 5c97c244
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c97c244(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5c97c025(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_5c97c045(iVar1);
    param_1 = FUN_5c97c1e7(this,param_1,iVar2);
    if (param_1 == 0) break;
    if (iVar1 == 0) {
      iVar1 = *param_2;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return 0;
}


