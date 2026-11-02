/* Module: vegas30k.dll
   Function: FUN_0101d880
   Address: 0101d880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0101d880(int *param_1,short *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  int local_4;
  
  uVar1 = 0;
  local_4 = 0;
  *param_3 = 0;
  if ((param_1 != (int *)0x0) && (*param_2 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    if (&local_4 != (int *)0x0) {
      uVar1 = FUN_0101d830(&local_4,param_3,param_1);
      (**(code **)(local_4 + 8))(&local_4);
    }
  }
  return uVar1;
}


