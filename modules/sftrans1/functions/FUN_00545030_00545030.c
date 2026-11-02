/* Module: sftrans1.dll
   Function: FUN_00545030
   Address: 00545030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00545030(undefined4 *param_1,undefined4 param_2,uchar *param_3)

{
  size_t sVar1;
  
  sVar1 = _mbsspn((uchar *)*param_1,param_3);
  FUN_00544fd0(param_2,sVar1);
  return param_2;
}


