/* Module: sfcd.cdd
   Function: FUN_00419270
   Address: 00419270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419270(HSFCD__ *param_1,tCDR_ERRORDATA *param_2,undefined4 param_3,uchar *param_4)

{
  *(undefined4 *)(param_2 + 0x152) = param_3;
  _mbscpy((uchar *)(param_2 + 0x4e),param_4);
  cdr_SetErrorState(param_1,param_2);
  return;
}


