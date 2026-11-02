/* Module: rv203260.dll
   Function: FUN_638ab6a0
   Address: 638ab6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638ab6a0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  int local_c [2];
  
  uVar1 = 0x80004005;
  if (*(int *)((int)this + 0x1c) != 0) {
    *(int *)((int)this + 0x28) = param_1;
    *param_3 = param_1;
    iVar2 = FUN_638a8980((void *)((int)this + 0x32),&param_1);
    if (iVar2 == 0) {
      local_c[0] = param_1;
    }
    else {
      local_c[0] = ((uint)(*(int *)(*(int *)((int)this + 0xd6) + 0xf6) *
                          *(int *)(*(int *)((int)this + 0xd6) + 0xfa)) >> 1) + 0x1000;
    }
    local_c[1] = 1;
    uVar1 = (**(code **)(**(int **)((int)this + 0x10) + 0x10))(local_c,local_14);
    *(undefined4 *)((int)this + 0x24) = local_14[0];
    if (*(int *)((int)this + 0x288) != 0) {
      local_1c = *(undefined4 *)((int)this + 0x28);
      local_20 = 0x13;
      local_18 = 0;
      iVar2 = FUN_638a8890((void *)((int)this + 0x32),&local_20);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = 0x80004005;
      }
    }
  }
  return uVar1;
}


