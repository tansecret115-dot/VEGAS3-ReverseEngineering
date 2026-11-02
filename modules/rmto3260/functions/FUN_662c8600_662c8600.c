/* Module: rmto3260.dll
   Function: FUN_662c8600
   Address: 662c8600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c8600(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0xf] == 1) {
    uVar1 = (**(code **)(*param_1 + 100))(param_1);
    return uVar1;
  }
  if (param_1[0xf] != 2) {
    return 0x80040081;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  return uVar1;
}


