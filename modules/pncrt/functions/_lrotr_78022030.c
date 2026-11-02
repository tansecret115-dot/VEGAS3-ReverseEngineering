/* Module: pncrt.dll
   Function: _lrotr
   Address: 78022030
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __cdecl _lrotr(ulong _Val,int _Shift)

{
  uint uVar1;
  
                    /* 0x22030  332  _lrotr */
  uVar1 = _rotr(_Val,_Shift);
  return uVar1;
}


