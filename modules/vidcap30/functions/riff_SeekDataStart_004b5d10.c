/* Module: vidcap30.exe
   Function: riff_SeekDataStart
   Address: 004b5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SeekDataStart,4 */

undefined4 riff_SeekDataStart(HANDLE param_1)

{
                    /* 0xb5d10  791  _riff_SeekDataStart@4 */
  SetFilePointer(param_1,0xc,(PLONG)0x0,0);
  return 0;
}


