/* Module: sfcdi.dll
   Function: cddb_GenreStringFromNumber
   Address: 5bf13ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cddb_GenreStringFromNumber(unsigned long,char *,unsigned long) */

int cddb_GenreStringFromNumber(ulong param_1,char *param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  
                    /* 0x13ea0  148  ?cddb_GenreStringFromNumber@@YGHKPADK@Z */
  iVar2 = 0;
  puVar1 = &DAT_5bf6479c;
  while ((param_1 != *puVar1 || (param_1 == 1))) {
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
    if (s_Use_this_for_maximum_recording_c_5bf64894 + 0x1f < puVar1) {
      *param_2 = '\0';
      return 0;
    }
  }
  lstrcpynA(param_2,(&PTR_s_blues_5bf64798)[iVar2 * 2],param_3);
  param_2[param_3 - 1] = '\0';
  iVar2 = lstrlenA(param_2);
  return iVar2;
}


