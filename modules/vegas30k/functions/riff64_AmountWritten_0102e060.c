/* Module: vegas30k.dll
   Function: riff64_AmountWritten
   Address: 0102e060
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_AmountWritten,12 */

undefined8 riff64_AmountWritten(undefined4 param_1,uint param_2,int param_3)

{
  uint local_8;
  int local_4;
  
                    /* 0x2e060  1383  _riff64_AmountWritten@12 */
  riff64_SaveLocation(param_1,&local_8);
  return CONCAT44((local_4 - param_3) - (uint)(local_8 < param_2),local_8 - param_2);
}



