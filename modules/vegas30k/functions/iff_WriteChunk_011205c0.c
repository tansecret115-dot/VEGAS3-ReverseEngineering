/* Module: vegas30k.dll
   Function: iff_WriteChunk
   Address: 011205c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_WriteChunk,8 */

uint iff_WriteChunk(HANDLE param_1,undefined4 *param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1205c0  1379  _iff_WriteChunk@8 */
  local_8 = *param_2;
  local_4 = param_2[1];
  iff_ByteSwap32(&local_8,2);
  WriteFile(param_1,&local_8,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  return -(uint)(param_2 != (undefined4 *)0x8) & 0x8004e009;
}


