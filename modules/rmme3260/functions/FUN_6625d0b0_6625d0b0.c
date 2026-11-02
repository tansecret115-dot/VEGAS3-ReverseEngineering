/* Module: rmme3260.dll
   Function: FUN_6625d0b0
   Address: 6625d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6625d0b0(void *this,undefined4 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x44) + 4))();
  *(undefined4 *)((int)this + 0xa8) = 0;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if (*(short *)((int)this + 0x3a) == 2) {
    if ((int *)((int)this + 0x58) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x68);
    }
    if (iVar1 < 1) {
      local_8 = -0x7ffbffb2;
      if (*(int *)((int)this + 0xc) != 0) {
        local_8 = *(int *)((int)this + 0xc);
      }
    }
    else {
      puVar2 = (undefined4 *)FUN_66250ae0((int *)((int)this + 0x58));
      *param_1 = *puVar2;
      *param_2 = puVar2[1];
      *param_3 = *(undefined2 *)(puVar2 + 2);
      if (puVar2 != (undefined4 *)0x0) {
        operator_delete(puVar2);
      }
    }
  }
  else {
    local_8 = -0x7ffbffbd;
  }
  if (((*(int *)((int)this + 0xb8) == 0) && (*(int *)((int)this + 0xc) == 0)) &&
     (*(int *)((int)this + 0x90) == 0)) {
    FUN_6625e090((int)this);
  }
  (**(code **)(**(int **)((int)this + 0x44) + 8))();
  return local_8;
}


