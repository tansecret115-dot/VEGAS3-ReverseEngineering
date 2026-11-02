/* Module: pncrt.dll
   Function: abs
   Address: 78022fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl abs(long _X)

{
                    /* 0x22fb0  575  abs
                       0x22fb0  659  labs */
  if (_X < 0) {
    _X = -_X;
  }
  return _X;
}


