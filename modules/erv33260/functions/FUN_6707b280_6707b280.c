/* Module: erv33260.dll
   Function: FUN_6707b280
   Address: 6707b280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6707b280(void *this,short *param_1,uint param_2,undefined *param_3,uint param_4,int param_5)

{
  uint local_8;
  
  local_8 = *(uint *)((int)this + 0xc);
  FUN_670755a0(param_1,param_2,param_3,(undefined *)(param_4 & 0xff),param_5,
               (undefined4 *)((int)this + 4),&local_8);
  *(uint *)((int)this + 0xc) = local_8;
  return;
}


