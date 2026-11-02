/* Module: erv23260.dll
   Function: FUN_63804be0
   Address: 63804be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63804be0(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_638025b0((void *)((int)this + -0x74),param_1,(int *)&local_8,&param_1);
  if (iVar1 == 0) {
    if ((0x3f < param_2) && (param_2 < 0x2581)) {
      if ((int)local_8 <= param_1) {
        puVar2 = (uint *)((int)local_8 * 0x77c + 0x90 + (int)this);
        do {
          *puVar2 = param_2;
          local_8 = (void *)((int)local_8 + 1);
          puVar2 = puVar2 + 0x1df;
        } while ((int)local_8 <= param_1);
      }
      return 0;
    }
    iVar1 = 10;
  }
  return iVar1;
}


