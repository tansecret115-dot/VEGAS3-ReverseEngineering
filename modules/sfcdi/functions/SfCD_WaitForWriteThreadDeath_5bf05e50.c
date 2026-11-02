/* Module: sfcdi.dll
   Function: SfCD_WaitForWriteThreadDeath
   Address: 5bf05e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCD_WaitForWriteThreadDeath(struct HSFCDWRITE__ *,struct HWND__ *,unsigned long)
    */

long SfCD_WaitForWriteThreadDeath(HSFCDWRITE__ *param_1,HWND__ *param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x5e50  65  ?SfCD_WaitForWriteThreadDeath@@YGJPAUHSFCDWRITE__@@PAUHWND__@@K@Z
                        */
  lVar1 = SfCD_WaitForThreadDeath(param_2,*(void **)(param_1 + 4),param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  return lVar1;
}


