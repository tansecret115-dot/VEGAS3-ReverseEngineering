/* Module: rn5a3260.dll
   Function: FUN_628a2e60
   Address: 628a2e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_628a2e60(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  (**(code **)(*param_1 + 0x30))(param_1,s_WWW_Authenticate_628a70a8,&local_8);
  if (local_8 == (int *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_628a2ec0(this,local_8,param_2);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar1;
}


