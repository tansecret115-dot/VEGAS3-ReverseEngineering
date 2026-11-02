/* Module: vegas30k.dll
   Function: iff_ReadChunkHdr
   Address: 01120470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_ReadChunkHdr,8 */

undefined4 iff_ReadChunkHdr(HANDLE param_1,LPVOID param_2)

{
  LPVOID pvVar1;
  BOOL BVar2;
  
                    /* 0x120470  1373  _iff_ReadChunkHdr@8 */
  pvVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x8) {
    return 0x8004e008;
  }
  iff_ByteSwap32(pvVar1,2);
  return 0;
}


