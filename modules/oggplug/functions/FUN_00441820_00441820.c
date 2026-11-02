/* Module: oggplug.dll
   Function: FUN_00441820
   Address: 00441820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00441820(int *param_1,int *param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_004416d0(param_1,param_2);
    if (0 < iVar1) {
      return 1;
    }
    if (iVar1 == 0) break;
    if (param_1[4] == 0) {
      param_1[4] = 1;
      return 0xffffffff;
    }
  }
  return 0;
}


