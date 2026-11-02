/* Module: pncrt.dll
   Function: _cabs
   Address: 78031e00
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl _cabs(_complex _Complex_value)

{
  float10 fVar1;
  
                    /* 0x31e00  179  _cabs */
  fVar1 = FUN_78031e20(_Complex_value.x._0_4_,_Complex_value.x._4_4_,_Complex_value.y._0_4_,
                       _Complex_value.y._4_4_,0x11);
  return (double)fVar1;
}


