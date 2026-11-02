/* Module: rmto3260.dll
   Function: FUN_66304930
   Address: 66304930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_66304930(char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x20c);
  if (this != (void *)0x0) {
    puVar1 = FUN_66304970(this,param_1,param_2,param_3,param_4);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


