/* Module: rmbe3260.dll
   Function: FUN_660172b0
   Address: 660172b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_660172b0(ushort param_1,ushort *param_2)

{
  if (param_2 != (ushort *)0x0) {
    switch(param_1) {
    case 0:
      *param_2 = 0x20;
      return 0;
    case 1:
      *param_2 = 0;
      return 0;
    case 2:
      *param_2 = 1;
      return 0;
    case 3:
      *param_2 = 2;
      return 0;
    default:
      *param_2 = param_1;
      return -(uint)(param_1 < 0x400) & 0x80070057;
    }
  }
  return 0x80004003;
}


