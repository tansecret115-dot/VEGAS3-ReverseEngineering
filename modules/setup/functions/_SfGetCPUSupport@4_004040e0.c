/* Module: Setup.exe
   Function: _SfGetCPUSupport@4
   Address: 004040e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetCPUSupport_4(uint param_1)

{
  undefined8 uVar1;
  
                    /* 0x40e0  139  _SfGetCPUSupport@4 */
  if (DAT_0044909c == 0) {
    uVar1 = FUN_00403f40();
    DAT_00448df4 = (uint)uVar1;
    DAT_0044909c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_00448df4 & param_1;
}


