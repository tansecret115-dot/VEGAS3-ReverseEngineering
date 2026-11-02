/* Module: gifplug.dll
   Function: FUN_5f6c2a60
   Address: 5f6c2a60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6c2a60(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < param_2) {
    uVar2 = param_2;
    param_2 = param_1;
  }
  uVar2 = uVar2 % param_2;
  while (uVar1 = uVar2, uVar1 != 0) {
    uVar2 = param_2 % uVar1;
    param_2 = uVar1;
  }
  return param_2;
}


