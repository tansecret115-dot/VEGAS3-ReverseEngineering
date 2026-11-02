/* Module: vidcap30.exe
   Function: riff_RestoreLocation
   Address: 004b56d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff_RestoreLocation,8 */

undefined4 riff_RestoreLocation(HANDLE param_1,LONG param_2)

{
                    /* 0xb56d0  789  _riff_RestoreLocation@8 */
  SetFilePointer(param_1,param_2,(PLONG)0x0,0);
  return 0;
}


