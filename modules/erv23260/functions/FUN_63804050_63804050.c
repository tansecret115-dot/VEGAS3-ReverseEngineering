/* Module: erv23260.dll
   Function: FUN_63804050
   Address: 63804050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63804050(void *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_638025b0((void *)((int)this + -100),param_1,(int *)&local_8,&param_1);
  if ((iVar1 == 0) && ((int)local_8 <= param_1)) {
    puVar2 = (undefined1 *)((int)local_8 * 0x77c + 0x760 + (int)this);
    do {
      if (*(int *)(puVar2 + -0x684) != 4) {
        *puVar2 = 1;
      }
      local_8 = (void *)((int)local_8 + 1);
      puVar2 = puVar2 + 0x77c;
    } while ((int)local_8 <= param_1);
  }
  return;
}


