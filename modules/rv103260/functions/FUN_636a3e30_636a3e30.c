/* Module: rv103260.dll
   Function: FUN_636a3e30
   Address: 636a3e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a3e30(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_1c [8];
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)((int)this + 0x1c) != 0) {
    *(undefined4 *)((int)this + 0x28) = param_1;
    local_c = 0x20000;
    *param_3 = param_1;
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0x10))(&local_c,local_1c);
    if (iVar1 == 0) {
      local_14[0] = *(undefined4 *)((int)this + 0x28);
    }
    else {
      local_14[0] = 0;
    }
    FUN_636a3520(this,5,local_14);
  }
  return iVar1;
}


