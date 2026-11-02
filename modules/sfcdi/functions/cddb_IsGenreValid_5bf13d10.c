/* Module: sfcdi.dll
   Function: cddb_IsGenreValid
   Address: 5bf13d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cddb_IsGenreValid(char const *) */

int cddb_IsGenreValid(char *param_1)

{
  LPCSTR lpString2;
  int iVar1;
  undefined **local_8;
  
                    /* 0x13d10  149  ?cddb_IsGenreValid@@YGHPBD@Z */
  local_8 = &PTR_s_blues_5bf64798;
  do {
    iVar1 = lstrlenA(*local_8);
    lpString2 = *local_8;
    FUN_5bf52dd0();
    FUN_5bf52dd0();
    lstrcpynA(&stack0xffffffe4,param_1,iVar1 + 1);
    (&stack0xffffffe4)[iVar1] = 0;
    (&stack0xffffffe4)[iVar1] = 0;
    lstrcpynA(&stack0xffffffe4,lpString2,iVar1 + 1);
    (&stack0xffffffe4)[iVar1] = 0;
    (&stack0xffffffe4)[iVar1] = 0;
    iVar1 = lstrcmpiA(&stack0xffffffe4,&stack0xffffffe4);
    if (iVar1 == 0) {
      return 1;
    }
    local_8 = local_8 + 2;
  } while (local_8 < &DAT_5bf647f0);
  return 0;
}


