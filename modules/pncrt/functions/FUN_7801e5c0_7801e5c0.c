/* Module: pncrt.dll
   Function: FUN_7801e5c0
   Address: 7801e5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_7801e5c0(uint param_1)

{
  if ((param_1 != 0xffffffff) && (DAT_78040938 == -1)) {
    DAT_78040938 = param_1 & 0xff;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}


