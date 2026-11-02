/* Module: pncrt.dll
   Function: difftime
   Address: 7802dfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl difftime(time_t _Time1,time_t _Time2)

{
                    /* 0x2dfc0  593  difftime */
  return (double)((int)_Time1 - _Time1._4_4_);
}


