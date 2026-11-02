/* Module: pncrt.dll
   Function: _isnan
   Address: 78032600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _isnan(double _X)

{
                    /* 0x32600  317  _isnan */
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}


