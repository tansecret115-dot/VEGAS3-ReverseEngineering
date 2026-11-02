/* Module: pncrt.dll
   Function: _scalb
   Address: 780321a0
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl _scalb(double _X,long _Y)

{
  double dVar1;
  
                    /* 0x321a0  427  _scalb */
  dVar1 = ldexp(_X,_Y);
  return dVar1;
}


