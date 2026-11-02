/* Module: vegas30k.dll
   Function: riff_ReadChunkHeader
   Address: 010ff010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_ReadChunkHeader,12 */

uint riff_ReadChunkHeader(HANDLE param_1,undefined1 *param_2,LPVOID param_3)

{
  BOOL BVar1;
  
                    /* 0xff010  1422  _riff_ReadChunkHeader@12 */
  BVar1 = ReadFile(param_1,param_2,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (param_2 != &DAT_00000004) {
    return 0x8004e008;
  }
  BVar1 = ReadFile(param_1,param_3,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  return -(uint)(param_2 != &DAT_00000004) & 0x8004e008;
}


