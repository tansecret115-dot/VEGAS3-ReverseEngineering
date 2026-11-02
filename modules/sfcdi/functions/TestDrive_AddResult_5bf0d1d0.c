/* Module: sfcdi.dll
   Function: TestDrive_AddResult
   Address: 5bf0d1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall TestDrive_AddResult(struct HSFCD__ *,unsigned int,void *,unsigned long) */

long TestDrive_AddResult(HSFCD__ *param_1,uint param_2,void *param_3,ulong param_4)

{
  long lVar1;
  tTESTRESULTHEADER local_164 [356];
  
                    /* 0xd1d0  140  ?TestDrive_AddResult@@YGJPAUHSFCD__@@IPAXK@Z */
  FUN_5bf0d190((undefined4 *)local_164,(int)param_1,param_2);
  lVar1 = TestDrive_AddResultEx(param_1,local_164,param_3,param_4);
  return lVar1;
}


