/* Module: mp3plug.dll
   Function: fmod
   Address: 5f72a752
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl fmod(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f72a752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fmod(_X,_Y);
  return dVar1;
}


