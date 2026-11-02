/* Module: erv33260.dll
   Function: FUN_6707b240
   Address: 6707b240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707b240(void *this,uint param_1,int param_2,int param_3)

{
  uint local_8;
  
  local_8 = *(uint *)((int)this + 0xc);
  FUN_67077560(param_1,param_2,param_3,(undefined4 *)((int)this + 4),&local_8);
  *(uint *)((int)this + 0xc) = local_8;
  return;
}


