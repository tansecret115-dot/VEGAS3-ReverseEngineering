/* Module: rn5a3260.dll
   Function: FUN_628a1fe0
   Address: 628a1fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_628a1fe0(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_628a2e60(this,param_1,param_2);
  if ((-1 < iVar1) && ((int *)*param_2 != (int *)0x0)) {
    FUN_628a1ee0((int *)*param_2,s_Prompt_628a7128,s_The_Realm__Realm__has_indicated_t_628a7130);
    FUN_628a1ee0((int *)*param_2,&DAT_628a711c,&DAT_628a7124);
    FUN_628a1ee0((int *)*param_2,s_Password_628a710c,&DAT_628a7118);
  }
  return iVar1;
}


