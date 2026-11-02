/* Module: pncrt.dll
   Function: _wctime
   Address: 7802dc20
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wctime(time_t *_Time)

{
  tm *_Tm;
  wchar_t *pwVar1;
  
                    /* 0x2dc20  510  _wctime */
  _Tm = localtime(_Time);
  if (_Tm != (tm *)0x0) {
    pwVar1 = _wasctime(_Tm);
    return pwVar1;
  }
  return (wchar_t *)0x0;
}


