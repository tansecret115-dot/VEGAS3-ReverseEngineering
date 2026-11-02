/* Module: pncrt.dll
   Function: _finite
   Address: 780325e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _finite(double _X)

{
                    /* 0x325e0  238  _finite */
  return (uint)((_X._6_2_ & 0x7ff0) != 0x7ff0);
}


