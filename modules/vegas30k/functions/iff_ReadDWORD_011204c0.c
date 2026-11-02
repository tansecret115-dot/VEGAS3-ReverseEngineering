/* Module: vegas30k.dll
   Function: iff_ReadDWORD
   Address: 011204c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall iff_ReadDWORD,8 */

undefined4 iff_ReadDWORD(HANDLE param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  
                    /* 0x1204c0  1374  _iff_ReadDWORD@8 */
  puVar1 = param_2;
  BVar2 = ReadFile(param_1,param_2,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  if (param_2 != &DAT_00000004) {
    return 0x8004e008;
  }
  iff_ByteSwap32(puVar1,1);
  return 0;
}


