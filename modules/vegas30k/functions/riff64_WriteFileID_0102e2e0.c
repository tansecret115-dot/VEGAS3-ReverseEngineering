/* Module: vegas30k.dll
   Function: riff64_WriteFileID
   Address: 0102e2e0
   Source: Ghidra pseudocode (migrated from analysis/ghidra/output/vegas30k.dll_analysis.txt)
*/


/* __stdcall riff64_WriteFileID,28 */

int riff64_WriteFileID(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
                    /* 0x2e2e0  1411  _riff64_WriteFileID@28 */
  hFile = param_1;
  riff64_WriteChunkHeader
            (param_1,DAT_011dbd70,DAT_011dbd74,DAT_011dbd78,DAT_011dbd7c,in_stack_00000018,
             in_stack_0000001c);
  BVar1 = WriteFile(hFile,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}



