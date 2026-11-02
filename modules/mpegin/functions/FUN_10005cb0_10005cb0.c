/* Module: mpegin.dll
   Function: FUN_10005cb0
   Address: 10005cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10005cb0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  FUN_10005910(param_1,param_2);
  return uVar1 >> (0x20U - (char)param_2 & 0x1f);
}


