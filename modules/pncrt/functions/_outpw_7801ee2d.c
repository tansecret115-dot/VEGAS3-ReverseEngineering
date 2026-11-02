/* Module: pncrt.dll
   Function: _outpw
   Address: 7801ee2d
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort __cdecl _outpw(ushort param_1,ushort param_2)

{
                    /* 0x1ee2d  406  _outpw */
  out(param_1,param_2);
  return param_2;
}


