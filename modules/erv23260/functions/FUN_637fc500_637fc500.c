/* Module: erv23260.dll
   Function: FUN_637fc500
   Address: 637fc500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fc500(void *this,int param_1,undefined4 param_2)

{
  byte local_10 [12];
  
  local_10[1] = 1;
  local_10[2] = 1;
  local_10[0] = 0;
  local_10[3] = 2;
  local_10[4] = 2;
  local_10[5] = 3;
  local_10[6] = 3;
  local_10[7] = 3;
  local_10[8] = 3;
  *(int *)((int)this + 0xc4) = param_1;
  *(uint *)((int)this + 0xc0) = (uint)local_10[param_1];
  *(undefined4 *)((int)this + 200) = param_2;
  return;
}


