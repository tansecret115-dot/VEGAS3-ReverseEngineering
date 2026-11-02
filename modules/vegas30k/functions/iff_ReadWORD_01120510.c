/* Module: vegas30k.dll
   Function: iff_ReadWORD
   Address: 01120510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_ReadWORD,8 */

undefined4 iff_ReadWORD(HANDLE param_1,LPVOID param_2)

{
  LPVOID pvVar1;
  BOOL BVar2;
  
                    /* 0x120510  1376  _iff_ReadWORD@8 */
  pvVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,2,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x2) {
    return 0x8004e008;
  }
  iff_ByteSwap16(pvVar1,1);
  return 0;
}


