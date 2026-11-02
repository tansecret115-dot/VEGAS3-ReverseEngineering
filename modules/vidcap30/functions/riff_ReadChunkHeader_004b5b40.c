/* Module: vidcap30.exe
   Function: riff_ReadChunkHeader
   Address: 004b5b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadChunkHeader,12 */

uint riff_ReadChunkHeader(HANDLE param_1,LPVOID param_2,LPVOID param_3)

{
  BOOL BVar1;
  
                    /* 0xb5b40  783  _riff_ReadChunkHeader@12 */
  BVar1 = ReadFile(param_1,param_2,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x4) {
    return 0x8004e008;
  }
  BVar1 = ReadFile(param_1,param_3,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  return -(uint)(param_2 != (LPVOID)0x4) & 0x8004e008;
}


