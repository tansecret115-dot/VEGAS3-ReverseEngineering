/* Module: encn3260.dll
   Function: FUN_664c55a0
   Address: 664c55a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c55a0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar2 = 0;
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 8) + 4))();
  iVar1 = FUN_664c3eb0(*(void **)((int)this + 0xc),(uint)param_1,&local_8);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))();
    FUN_664c3e40(*(void **)((int)this + 0xc),(uint)param_1,(int)param_1);
  }
  else {
    uVar2 = 0x80004005;
  }
  if (*(int *)(*(int *)((int)this + 0xc) + 0xc) == 1) {
    local_10 = 0;
    local_c = 0;
    local_18 = 0x46b;
    local_14 = 200;
    (**(code **)(**(int **)this + 0x24))(&local_18,0);
  }
  (**(code **)(**(int **)((int)this + 8) + 8))();
  return uVar2;
}


