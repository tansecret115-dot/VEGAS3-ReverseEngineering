/* Module: vegas30k.dll
   Function: riff64_RestoreLocation
   Address: 0102db20
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_RestoreLocation,12 */

undefined4 riff64_RestoreLocation(HANDLE param_1,LONG param_2,LONG param_3)

{
  LONG local_4;
  
                    /* 0x2db20  1399  _riff64_RestoreLocation@12 */
  local_4 = param_3;
  SetFilePointer(param_1,param_2,&local_4,0);
  return 0;
}



