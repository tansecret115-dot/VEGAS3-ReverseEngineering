/* Module: vegas30k.dll
   Function: iff_WriteDWORD
   Address: 01120610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_WriteDWORD,8 */

uint iff_WriteDWORD(HANDLE param_1,undefined4 param_2)

{
  DWORD local_4;
  
                    /* 0x120610  1380  _iff_WriteDWORD@8 */
  iff_ByteSwap32(&param_2,1);
  WriteFile(param_1,&param_2,4,&local_4,(LPOVERLAPPED)0x0);
  return -(uint)(local_4 != 4) & 0x8004e009;
}


