/* Module: vegas30.exe
   Function: FUN_00429600
   Address: 00429600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429600(undefined4 param_1,int param_2)

{
  SfSetDlgItemText(param_1,0xe8a,&DAT_0063d658 + param_2 * 0x120);
  SfSetDlgItemText(param_1,0xe8b,s_Use_this_for_maximum_extraction_c_0063d678 + param_2 * 0x120);
  return;
}


