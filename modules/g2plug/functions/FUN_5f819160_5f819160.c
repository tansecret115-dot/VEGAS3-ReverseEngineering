/* Module: g2plug.dll
   Function: FUN_5f819160
   Address: 5f819160
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f819160(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_5f8777bc == 0) {
    uVar1 = FUN_5f818fc0();
    DAT_5f877514 = (uint)uVar1;
    DAT_5f8777bc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5f877514 & param_1;
}


