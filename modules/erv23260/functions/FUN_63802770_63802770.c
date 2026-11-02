/* Module: erv23260.dll
   Function: FUN_63802770
   Address: 63802770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_63802770(int param_1,undefined4 param_2,int *param_3)

{
  void *this;
  undefined4 *puVar1;
  
  if ((((param_1 != 0x12) && (param_1 != 0x14)) && (param_1 != 0x15)) && (param_1 != 0x16)) {
    *param_3 = 8;
    return (undefined4 *)0x0;
  }
  *param_3 = 0;
  this = (void *)FUN_637f2000(0x8d4);
  if (this != (void *)0x0) {
    puVar1 = FUN_63805740(this,param_1,param_2,param_3);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


