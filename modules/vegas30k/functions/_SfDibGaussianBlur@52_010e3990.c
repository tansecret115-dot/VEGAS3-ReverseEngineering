/* Module: vegas30k.dll
   Function: _SfDibGaussianBlur@52
   Address: 010e3990
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDibGaussianBlur_52
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13)

{
  byte bVar1;
  
                    /* 0xe3990  855  _SfDibGaussianBlur@52 */
  if (DAT_0128efc4 == (code *)0x0) {
    bVar1 = _SfGetCPUSupport_4(0xff);
    if (((bVar1 & 0x20) != 0) && ((bVar1 & 0xf) == 6)) {
      DAT_0128efc4 = FUN_010e3200;
    }
    if (DAT_0128efc4 == (code *)0x0) {
      DAT_0128efc4 = FUN_010e3620;
    }
  }
  (*DAT_0128efc4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13);
  return;
}


