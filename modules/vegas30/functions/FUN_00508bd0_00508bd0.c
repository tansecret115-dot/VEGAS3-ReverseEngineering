/* Module: vegas30.exe
   Function: FUN_00508bd0
   Address: 00508bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508bd0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    for (iVar1 = 0x47; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 0x80004003;
}


