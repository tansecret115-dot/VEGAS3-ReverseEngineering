/* Module: sfcdi.dll
   Function: cdr_StartProfile
   Address: 5bf01f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_StartProfile(unsigned long *) */

void cdr_StartProfile(ulong *param_1)

{
  DWORD DVar1;
  
                    /* 0x1f30  206  ?cdr_StartProfile@@YGXPAK@Z */
  DVar1 = timeGetTime();
  *param_1 = DVar1;
  return;
}


