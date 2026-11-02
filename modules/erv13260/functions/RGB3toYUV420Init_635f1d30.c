/* Module: erv13260.dll
   Function: RGB3toYUV420Init
   Address: 635f1d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RGB3toYUV420Init(undefined2 *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x1d30  2  RGB3toYUV420Init */
  DAT_63606cbc._0_2_ = *param_1;
  DAT_63606cb8._0_2_ = param_1[2];
  puVar1 = operator_new(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_63606cc0 = (undefined4 *)0x0;
  }
  else {
    DAT_63606cc0 = FUN_635f1e70(puVar1);
  }
  if (DAT_63606cc0 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  FUN_635f1f70((int)DAT_63606cc0);
  return 0;
}


