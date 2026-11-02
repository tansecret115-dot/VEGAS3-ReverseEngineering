/* Module: vidcap30.exe
   Function: riff64_RestoreLocation
   Address: 004b71e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall riff64_RestoreLocation,12 */

undefined4 riff64_RestoreLocation(HANDLE param_1,LONG param_2,LONG param_3)

{
  LONG local_4;
  
                    /* 0xb71e0  760  _riff64_RestoreLocation@12 */
  local_4 = param_3;
  SetFilePointer(param_1,param_2,&local_4,0);
  return 0;
}


