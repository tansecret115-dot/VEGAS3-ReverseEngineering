/* Module: rmme3260.dll
   Function: FUN_66258de0
   Address: 66258de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66258de0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_30 [2];
  void *local_28;
  int local_24 [4];
  void *local_14;
  int *local_10;
  int local_c;
  void *local_8;
  
  local_24[2] = 0;
  local_24[3] = 0;
  local_14 = (void *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  local_8 = this;
  (**(code **)(**(int **)((int)this + 8) + 4))();
  piVar2 = param_1;
  if (*(int *)((int)this + 0x14) == 0) {
    if (param_1 == (int *)0x0) {
      local_28 = *(void **)((int)this + 0xc);
      local_30[0] = -(uint)(*(int *)((int)local_28 + 0xc) != 0);
      local_24[0] = 0;
      local_30[1] = local_30[0];
      local_24[1] = 0;
      if (local_30[0] != 0) {
        FUN_66251190(local_28,local_30 + 1,local_24 + 1,local_24);
      }
      piVar2 = local_30;
      piVar3 = local_24 + 2;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      while (this = local_8, local_24[2] != 0) {
        FUN_6625df80(local_10);
        local_24[2] = local_24[3];
        if (local_24[3] != 0) {
          FUN_66251190(local_14,local_24 + 3,&local_c,(int *)&local_10);
        }
      }
    }
    else {
      param_1 = (int *)0x0;
      iVar1 = FUN_66251030(*(void **)((int)this + 0xc),(uint)piVar2,(int *)&param_1);
      if (iVar1 != 0) {
        FUN_6625df80(piVar2);
        (**(code **)(**(int **)((int)this + 8) + 8))();
        return;
      }
    }
  }
  (**(code **)(**(int **)((int)this + 8) + 8))();
  return;
}


