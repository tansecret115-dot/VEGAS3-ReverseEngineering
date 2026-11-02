/* Module: sfcdi.dll
   Function: cdr_EndProfile
   Address: 5bf01f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall cdr_EndProfile(unsigned long) */

ulong cdr_EndProfile(ulong param_1)

{
  DWORD DVar1;
  
                    /* 0x1f40  166  ?cdr_EndProfile@@YGKK@Z */
  DVar1 = timeGetTime();
  return DVar1 - param_1;
}


