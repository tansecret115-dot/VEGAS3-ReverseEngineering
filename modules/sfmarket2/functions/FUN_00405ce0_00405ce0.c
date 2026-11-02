/* Module: sfmarket2.dll
   Function: FUN_00405ce0
   Address: 00405ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405ce0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0x80004005;
  iVar1 = FUN_0043c630();
  if (iVar1 == 0) {
    *param_2 = 0;
  }
  return 0;
}


