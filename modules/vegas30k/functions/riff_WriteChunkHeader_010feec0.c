/* Module: vegas30k.dll
   Function: riff_WriteChunkHeader
   Address: 010feec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_WriteChunkHeader,12 */

int riff_WriteChunkHeader(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  
                    /* 0xfeec0  1438  _riff_WriteChunkHeader@12 */
  hFile = param_1;
  BVar1 = WriteFile(param_1,&stack0x00000008,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  BVar1 = WriteFile(hFile,&stack0x0000000c,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


