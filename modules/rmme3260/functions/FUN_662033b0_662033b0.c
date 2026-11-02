/* Module: rmme3260.dll
   Function: FUN_662033b0
   Address: 662033b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662033b0(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != (char *)0x0) {
    strncpy(param_2,*(char **)(param_1 + 0x40),param_3);
    uVar1 = 0;
  }
  return uVar1;
}


