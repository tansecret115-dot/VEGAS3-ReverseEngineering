/* Module: sfcd.cdd
   Function: FUN_0041ea70
   Address: 0041ea70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041ea70(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_00441bcc == 0) {
    uVar1 = FUN_0041e8d0();
    DAT_00441924 = (uint)uVar1;
    DAT_00441bcc = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00441924 & param_1;
}


