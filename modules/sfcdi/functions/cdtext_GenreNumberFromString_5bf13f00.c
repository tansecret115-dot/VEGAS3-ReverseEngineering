/* Module: sfcdi.dll
   Function: cdtext_GenreNumberFromString
   Address: 5bf13f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall cdtext_GenreNumberFromString(char const *) */

ulong cdtext_GenreNumberFromString(char *param_1)

{
  LPCSTR lpString2;
  int iVar1;
  int local_c;
  undefined **local_8;
  
                    /* 0x13f00  213  ?cdtext_GenreNumberFromString@@YGKPBD@Z */
  local_c = 0;
  local_8 = &PTR_s_Undefined_5bf64680;
  do {
    iVar1 = lstrlenA(*local_8);
    lpString2 = *local_8;
    FUN_5bf52dd0();
    FUN_5bf52dd0();
    lstrcpynA(&stack0xffffffe0,param_1,iVar1 + 1);
    (&stack0xffffffe0)[iVar1] = 0;
    (&stack0xffffffe0)[iVar1] = 0;
    lstrcpynA(&stack0xffffffe0,lpString2,iVar1 + 1);
    (&stack0xffffffe0)[iVar1] = 0;
    (&stack0xffffffe0)[iVar1] = 0;
    iVar1 = lstrcmpiA(&stack0xffffffe0,&stack0xffffffe0);
    if (iVar1 == 0) {
      return (&DAT_5bf64684)[local_c * 2];
    }
    local_8 = local_8 + 2;
    local_c = local_c + 1;
  } while (local_8 < &PTR_s_blues_5bf64798);
  return 1;
}


