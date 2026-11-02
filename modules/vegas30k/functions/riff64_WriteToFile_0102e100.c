/* Module: vegas30k.dll
   Function: riff64_WriteToFile
   Address: 0102e100
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_WriteToFile,16 */

int riff64_WriteToFile(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  
                    /* 0x2e100  1413  _riff64_WriteToFile@16 */
  BVar1 = WriteFile(param_1,param_2,param_3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}



