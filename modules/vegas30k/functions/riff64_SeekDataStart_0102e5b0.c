/* Module: vegas30k.dll
   Function: riff64_SeekDataStart
   Address: 0102e5b0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_SeekDataStart,4 */

undefined4 riff64_SeekDataStart(HANDLE param_1)

{
                    /* 0x2e5b0  1401  _riff64_SeekDataStart@4 */
  SetFilePointer(param_1,0x28,(PLONG)0x0,0);
  return 0;
}



