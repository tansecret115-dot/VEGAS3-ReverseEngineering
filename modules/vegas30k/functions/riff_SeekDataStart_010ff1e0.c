/* Module: vegas30k.dll
   Function: riff_SeekDataStart
   Address: 010ff1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_SeekDataStart,4 */

undefined4 riff_SeekDataStart(HANDLE param_1)

{
                    /* 0xff1e0  1430  _riff_SeekDataStart@4 */
  SetFilePointer(param_1,0xc,(PLONG)0x0,0);
  return 0;
}


