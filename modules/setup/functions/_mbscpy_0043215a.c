/* Module: Setup.exe
   Function: _mbscpy
   Address: 0043215a
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbscpy(uchar *_Dest,uchar *_Source)

{
  uchar *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043215a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = _mbscpy(_Dest,_Source);
  return puVar1;
}


