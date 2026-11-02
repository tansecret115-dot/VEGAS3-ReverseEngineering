/* Module: pncrt.dll
   Function: _outp
   Address: 7801ee20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _outp(ushort param_1,int param_2)

{
                    /* 0x1ee20  404  _outp */
  out(param_1,(undefined1)param_2);
  return param_2 & 0xff;
}


