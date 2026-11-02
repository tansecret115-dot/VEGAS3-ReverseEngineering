/* Module: sfcdi.dll
   Function: cdtext_GenreStringFromNumber
   Address: 5bf13fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdtext_GenreStringFromNumber(unsigned long,char *,unsigned long) */

int cdtext_GenreStringFromNumber(ulong param_1,char *param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  
                    /* 0x13fd0  214  ?cdtext_GenreStringFromNumber@@YGHKPADK@Z */
  iVar2 = 0;
  puVar1 = &DAT_5bf64684;
  do {
    if (param_1 == *puVar1) {
      lstrcpynA(param_2,(&PTR_s_Undefined_5bf64680)[iVar2 * 2],param_3);
      param_2[param_3 - 1] = '\0';
      iVar2 = lstrlenA(param_2);
      return iVar2;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_5bf6479c);
  *param_2 = '\0';
  return 0;
}


