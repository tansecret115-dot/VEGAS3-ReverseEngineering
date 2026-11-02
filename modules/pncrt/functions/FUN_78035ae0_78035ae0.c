/* Module: pncrt.dll
   Function: FUN_78035ae0
   Address: 78035ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78035ae0(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) != 0) {
    return 3;
  }
  return (param_1 & 2) << 1;
}


