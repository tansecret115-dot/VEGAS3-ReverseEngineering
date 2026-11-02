/* Module: hhupd.exe
   Function: FUN_0100260a
   Address: 0100260a
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0100260a(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_3 <= param_1) {
    if (param_3 < param_1) {
      return 1;
    }
    if (param_4 <= param_2) {
      return (uint)(param_4 < param_2);
    }
  }
  return 0xffffffff;
}


