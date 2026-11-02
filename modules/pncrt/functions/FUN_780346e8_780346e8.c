/* Module: pncrt.dll
   Function: FUN_780346e8
   Address: 780346e8
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780346e8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


