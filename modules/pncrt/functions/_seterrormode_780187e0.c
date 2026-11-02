/* Module: pncrt.dll
   Function: _seterrormode
   Address: 780187e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _seterrormode(int _Mode)

{
                    /* 0x187e0  432  _seterrormode */
  SetErrorMode(_Mode);
  return;
}


