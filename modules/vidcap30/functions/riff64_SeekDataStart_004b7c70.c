/* Module: vidcap30.exe
   Function: riff64_SeekDataStart
   Address: 004b7c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_SeekDataStart,4 */

undefined4 riff64_SeekDataStart(HANDLE param_1)

{
                    /* 0xb7c70  762  _riff64_SeekDataStart@4 */
  SetFilePointer(param_1,0x28,(PLONG)0x0,0);
  return 0;
}


