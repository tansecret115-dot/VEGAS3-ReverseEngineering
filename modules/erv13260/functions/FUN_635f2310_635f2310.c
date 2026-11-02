/* Module: erv13260.dll
   Function: FUN_635f2310
   Address: 635f2310
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635f2310(uint param_1,uint param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_6360542c + param_1 * 8);
  FUN_635f20b0(param_3,uVar1,*(int *)(&DAT_63605428 + param_1 * 8));
  FUN_635f20b0(param_3,param_1,(1 << ((byte)param_1 & 0x1f)) - 1U & param_2);
  return uVar1 + param_1;
}


