/* Module: encn3260.dll
   Function: FUN_66497880
   Address: 66497880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66497880(void *this,int param_1)

{
  int iVar1;
  undefined4 local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  (**(code **)(*(int *)this + 4))(this);
  if (param_1 != 0) {
    (**(code **)(**(int **)((int)this + 0x14) + 4))(&local_c,&local_8);
    iVar1 = FUN_664d0260(local_8);
    (**(code **)(**(int **)((int)this + 0xc) + 0xc))(*(int **)((int)this + 0xc),0,iVar1);
    (**(code **)(*(int *)this + 8))(this);
    return;
  }
  (**(code **)(**(int **)((int)this + 0xc) + 0xc))(*(int **)((int)this + 0xc),0x80040fc4,0);
  (**(code **)(*(int *)this + 8))(this);
  return;
}


