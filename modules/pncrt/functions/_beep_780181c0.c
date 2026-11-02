/* Module: pncrt.dll
   Function: _beep
   Address: 780181c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _beep(uint _Frequency,uint _Duration)

{
                    /* 0x181c0  175  _beep */
  Beep(_Frequency,_Duration);
  return;
}


