/* Module: rmme3260.dll
   Function: FUN_66266060
   Address: 66266060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_66266060(char *param_1,char *param_2,char *param_3)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14c);
  if (this != (void *)0x0) {
    puVar1 = FUN_66267dd0(this,param_1,param_2,param_3);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


