/* Module: basc3260.dll
   Function: FUN_627f1f90
   Address: 627f1f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_627f1f90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_627f29b0(param_1,param_2);
  if ((-1 < iVar1) && ((int *)*param_2 != (int *)0x0)) {
    FUN_627f1e90((int *)*param_2,s_Prompt_627f6134,s_The_Realm__Realm__has_indicated_t_627f613c);
    FUN_627f1e90((int *)*param_2,&DAT_627f6128,&DAT_627f6130);
    FUN_627f1e90((int *)*param_2,s_Password_627f60a8,&DAT_627f6124);
  }
  return iVar1;
}


