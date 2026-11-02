/* Module: mcplug.dll
   Function: FUN_0041ae30
   Address: 0041ae30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041ae30(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00488174 == 0) {
    uVar1 = FUN_0041ac90();
    DAT_00487ecc = (uint)uVar1;
    DAT_00488174 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00487ecc & param_1;
}


