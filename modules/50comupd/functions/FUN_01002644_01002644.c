/* Module: 50comupd.exe
   Function: FUN_01002644
   Address: 01002644
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01002644(uint param_1,uint param_2,uint param_3,uint param_4)

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


