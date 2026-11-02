/* Module: sfcdi.dll
   Function: cdr_BusyWait
   Address: 5bf01f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall cdr_BusyWait(long) */

void cdr_BusyWait(long param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
                    /* 0x1f10  162  ?cdr_BusyWait@@YGXJ@Z */
  DVar1 = timeGetTime();
  do {
    DVar2 = timeGetTime();
  } while (DVar2 - DVar1 < (uint)param_1);
  return;
}


