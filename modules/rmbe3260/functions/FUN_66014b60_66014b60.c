/* Module: rmbe3260.dll
   Function: FUN_66014b60
   Address: 66014b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014b60(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[9] == 0) {
    return 0x80040258;
  }
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  return uVar1;
}


