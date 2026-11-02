/* Module: rmbe3260.dll
   Function: FUN_6603bdc0
   Address: 6603bdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6603bdc0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = *(int *)((int)this + 0xe4) + param_1;
    }
    else {
      iVar1 = *(int *)((int)this + 0xe4);
      if (param_2 == 2) {
        iVar1 = *(int *)((int)this + 0xe0) + param_1;
      }
    }
  }
  *(int *)((int)this + 0xe4) = iVar1;
  local_c = param_1;
  local_8 = param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 4;
  (**(code **)((int)this + 0xd8))(&local_18,*(undefined4 *)((int)this + 0xdc));
  return;
}


