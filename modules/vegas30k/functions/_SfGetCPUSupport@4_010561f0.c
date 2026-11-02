/* Module: vegas30k.dll
   Function: _SfGetCPUSupport@4
   Address: 010561f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfGetCPUSupport_4(uint param_1)

{
                    /* 0x561f0  942  _SfGetCPUSupport@4 */
  if (DAT_0120e864 == 0) {
    DAT_0120e5bc = FUN_01056050();
    DAT_0120e864 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0120e5bc & param_1;
}


