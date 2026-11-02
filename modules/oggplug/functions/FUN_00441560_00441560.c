/* Module: oggplug.dll
   Function: FUN_00441560
   Address: 00441560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00441560(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((((param_1[0x52] == 0) || (param_1[7] == 0)) && (param_1[2] - param_1[3] < 0x1001)) &&
     ((param_1[7] < 0xff && ((param_1[7] == 0 || (param_1[0x53] != 0)))))) {
    return 0;
  }
  uVar1 = FUN_004412d0(param_1,param_2);
  return uVar1;
}


