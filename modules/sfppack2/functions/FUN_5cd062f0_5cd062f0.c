/* Module: sfppack2.dll
   Function: FUN_5cd062f0
   Address: 5cd062f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd062f0(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5cd67cd4 == 0) {
    uVar1 = FUN_5cd06150();
    DAT_5cd67a2c = (uint)uVar1;
    DAT_5cd67cd4 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5cd67a2c & param_1;
}


