/* Module: vegas30k.dll
   Function: FUN_0118a120
   Address: 0118a120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0118a120(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_4;
  
  local_4 = 0;
  uVar1 = (**(code **)(*param_1 + 0x11c))();
  if (&stack0x00000000 != &DAT_00000004) {
    uVar1 = (**(code **)(local_4 + 0x1c))(&local_4,param_1,param_2);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return uVar1;
}


