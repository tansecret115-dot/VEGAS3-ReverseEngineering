/* Module: pncrt.dll
   Function: _lrotl
   Address: 78021fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __cdecl _lrotl(ulong _Val,int _Shift)

{
  uint uVar1;
  
                    /* 0x21fe0  331  _lrotl */
  uVar1 = _rotl(_Val,_Shift);
  return uVar1;
}


