/* Module: erv33260.dll
   Function: FUN_67072a40
   Address: 67072a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_67072a40(int param_1,undefined4 param_2,int *param_3)

{
  void *this;
  undefined4 *puVar1;
  
  if ((param_1 != 0x13) && (param_1 != 0x17)) {
    *param_3 = 8;
    return (undefined4 *)0x0;
  }
  *param_3 = 0;
  this = (void *)FUN_67072130(0x344);
  if (this != (void *)0x0) {
    puVar1 = FUN_67077c90(this,param_1,param_2,param_3);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


