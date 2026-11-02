/* Module: pncrt.dll
   Function: _outpd
   Address: 7801ee3a
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __cdecl _outpd(ushort param_1,ulong param_2)

{
                    /* 0x1ee3a  405  _outpd */
  out(param_1,param_2);
  return param_2;
}


