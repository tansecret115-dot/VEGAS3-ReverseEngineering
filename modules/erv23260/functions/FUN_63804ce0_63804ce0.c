/* Module: erv23260.dll
   Function: FUN_63804ce0
   Address: 63804ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63804ce0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_638025b0((void *)((int)this + -0x70),param_1,(int *)&local_8,&param_1);
  if ((iVar1 == 0) && ((int)local_8 <= param_1)) {
    puVar2 = (undefined4 *)((int)local_8 * 0x77c + 0xa0 + (int)this);
    do {
      *puVar2 = param_2;
      local_8 = (void *)((int)local_8 + 1);
      puVar2 = puVar2 + 0x1df;
    } while ((int)local_8 <= param_1);
  }
  return;
}


