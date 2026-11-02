/* Module: rmme3260.dll
   Function: FUN_6625fb50
   Address: 6625fb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625fb50(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    iVar1 = FUN_66251030(*(void **)((int)this + 0x14),param_1,(int *)&local_8);
    if (iVar1 != 0) {
      FUN_6625d790(local_8,param_2);
    }
  }
  return 1;
}


