/* Module: Setup.exe
   Function: _mbscat
   Address: 0043214e
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbscat(uchar *_Dest,uchar *_Source)

{
  uchar *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043214e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = _mbscat(_Dest,_Source);
  return puVar1;
}


