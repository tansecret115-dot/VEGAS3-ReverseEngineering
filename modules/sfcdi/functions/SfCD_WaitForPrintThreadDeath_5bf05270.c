/* Module: sfcdi.dll
   Function: SfCD_WaitForPrintThreadDeath
   Address: 5bf05270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCD_WaitForPrintThreadDeath(struct HWND__ *,void *,unsigned long) */

long SfCD_WaitForPrintThreadDeath(HWND__ *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x5270  63  ?SfCD_WaitForPrintThreadDeath@@YGJPAUHWND__@@PAXK@Z */
  lVar1 = SfCD_WaitForThreadDeath(param_1,*(void **)((int)param_2 + 0x5c),param_3);
  *(undefined4 *)((int)param_2 + 0x5c) = 0;
  return lVar1;
}


