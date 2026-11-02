/* Module: rv303260.dll
   Function: FUN_67205d70
   Address: 67205d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67205d70(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 1;
  local_c = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(int **)((int)this + 0x10) = param_2;
  iVar1 = (**(code **)(*param_2 + 0x10))(&local_c,local_14);
  *(uint *)((int)this + 0x1c) = (uint)(iVar1 == 0);
  return;
}


