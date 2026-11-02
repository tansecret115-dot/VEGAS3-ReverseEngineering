/* Module: mcplug.dll
   Function: FUN_0040a700
   Address: 0040a700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0040a700(char *param_1,char *param_2,undefined *param_3)

{
  undefined4 *_Memory;
  int iVar1;
  
  _Memory = malloc(0x38);
  if (_Memory != (undefined4 *)0x0) {
    iVar1 = FUN_00409770(_Memory,param_1,param_2,param_3);
    if (iVar1 != 0) {
      free(_Memory);
      return (undefined4 *)0x0;
    }
  }
  return _Memory;
}


