/* Module: pngu3266.dll
   Function: FUN_60621d10
   Address: 60621d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60621d10(int *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1[5] == 0) {
    return 0x80040009;
  }
  if ((uint)param_1[7] < *param_3) {
    return 0x80070057;
  }
  uVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  *param_2 = uVar1;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  *param_3 = uVar2;
  return 0;
}


