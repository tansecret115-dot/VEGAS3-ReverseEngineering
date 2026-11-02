/* Module: vegas30k.dll
   Function: riff_WriteFileID
   Address: 010fefd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_WriteFileID,12 */

int riff_WriteFileID(HANDLE param_1,undefined4 param_2,DWORD param_3)

{
  BOOL BVar1;
  
                    /* 0xfefd0  1439  _riff_WriteFileID@12 */
  riff_WriteChunkHeader(param_1,0x46464952,param_3);
  BVar1 = WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


