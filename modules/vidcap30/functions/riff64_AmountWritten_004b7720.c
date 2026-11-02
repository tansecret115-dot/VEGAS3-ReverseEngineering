/* Module: vidcap30.exe
   Function: riff64_AmountWritten
   Address: 004b7720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_AmountWritten,12 */

undefined8 riff64_AmountWritten(undefined4 param_1,uint param_2,int param_3)

{
  uint local_8;
  int local_4;
  
                    /* 0xb7720  744  _riff64_AmountWritten@12 */
  riff64_SaveLocation(param_1,&local_8);
  return CONCAT44((local_4 - param_3) - (uint)(local_8 < param_2),local_8 - param_2);
}


