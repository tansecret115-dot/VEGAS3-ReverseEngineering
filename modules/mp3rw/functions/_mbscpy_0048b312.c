/* Module: mp3rw.dll
   Function: _mbscpy
   Address: 0048b312
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbscpy(uchar *_Dest,uchar *_Source)

{
  uchar *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048b312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = _mbscpy(_Dest,_Source);
  return puVar1;
}


