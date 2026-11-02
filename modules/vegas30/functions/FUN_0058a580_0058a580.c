/* Module: vegas30.exe
   Function: FUN_0058a580
   Address: 0058a580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058a580(int *param_1)

{
  if ((0 < *(int *)(*param_1 + 0x40)) && (*(int *)(*param_1 + 0x40) < 4)) {
    __alldiv(param_1[0x52] - 0x200,param_1[0x53] - (uint)((uint)param_1[0x52] < 0x200),2,0);
  }
  return;
}


