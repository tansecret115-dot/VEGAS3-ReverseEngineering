/* Module: vegas30k.dll
   Function: iff_WriteWORD
   Address: 01120660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_WriteWORD,8 */

uint iff_WriteWORD(HANDLE param_1,undefined4 param_2)

{
  DWORD local_4;
  
                    /* 0x120660  1382  _iff_WriteWORD@8 */
  iff_ByteSwap16(&param_2,1);
  WriteFile(param_1,&param_2,2,&local_4,(LPOVERLAPPED)0x0);
  return -(uint)(local_4 != 2) & 0x8004e009;
}


