/* Module: vidcap30.exe
   Function: _SfGetCPUSupport@4
   Address: 0049d490
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetCPUSupport_4(uint param_1)

{
                    /* 0x9d490  391  _SfGetCPUSupport@4 */
  if (DAT_005c1974 == 0) {
    DAT_005c16cc = FUN_0049d2f0();
    DAT_005c1974 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_005c16cc & param_1;
}


