/* Module: rmbe3260.dll
   Function: FUN_6603be30
   Address: 6603be30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603be30(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(int *)((int)this + 0xe4) + param_2;
  *(uint *)((int)this + 0xe4) = uVar1;
  if (*(uint *)((int)this + 0xe0) < uVar1) {
    *(uint *)((int)this + 0xe0) = uVar1;
  }
  local_18 = param_2;
  local_10 = *(undefined4 *)((int)this + 0x94);
  local_c = 0;
  local_8 = 0;
  local_14 = param_1;
  (**(code **)((int)this + 0xd8))(&local_18,*(undefined4 *)((int)this + 0xdc));
  return 0;
}


