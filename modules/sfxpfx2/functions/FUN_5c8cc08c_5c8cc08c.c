/* Module: sfxpfx2.dll
   Function: FUN_5c8cc08c
   Address: 5c8cc08c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8cc08c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}


