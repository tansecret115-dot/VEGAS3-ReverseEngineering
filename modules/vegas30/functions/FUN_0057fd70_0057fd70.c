/* Module: vegas30.exe
   Function: FUN_0057fd70
   Address: 0057fd70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057fd70(undefined4 *param_1,undefined4 param_2,uchar *param_3)

{
  size_t sVar1;
  
  sVar1 = _mbscspn((uchar *)*param_1,param_3);
  FUN_0057fce0(param_2,sVar1);
  return param_2;
}


