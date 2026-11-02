/* Module: sfcdi.dll
   Function: cddb_ValidateSubmission
   Address: 5bf14030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cddb_ValidateSubmission(struct HWND__ *,struct _sfcdtext *,struct _toc *) */

long cddb_ValidateSubmission(HWND__ *param_1,_sfcdtext *param_2,_toc *param_3)

{
  uchar *puVar1;
  int iVar2;
  BYTE *pBVar3;
  uint uVar4;
  LPCSTR pCVar5;
  uint uVar6;
  undefined **ppuVar7;
  ulong local_238;
  char local_234 [128];
  uchar local_1b4 [180];
  uchar local_100 [256];
  
                    /* 0x14030  155
                       ?cddb_ValidateSubmission@@YGJPAUHWND__@@PAU_sfcdtext@@PAU_toc@@@Z */
  puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x49d);
  _mbscpy(local_100,puVar1);
  cdtext_GetItemText(param_2,0,1,local_234,0x80);
  for (pCVar5 = local_234; (*pCVar5 == ' ' || (*pCVar5 == '\t')); pCVar5 = pCVar5 + 1) {
  }
  iVar2 = lstrlenA(pCVar5);
  if (iVar2 == 0) {
    puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x49e);
    _mbscat(local_100,puVar1);
    FUN_5bf25c20(param_1,0,local_100);
    return -0x7fffbffb;
  }
  cdtext_GetItemText(param_2,0,0,local_234,0x80);
  for (pCVar5 = local_234; (*pCVar5 == ' ' || (*pCVar5 == '\t')); pCVar5 = pCVar5 + 1) {
  }
  iVar2 = lstrlenA(pCVar5);
  if (iVar2 != 0) {
    cdtext_GetGenre(param_2,&local_238,local_234,0x80);
    iVar2 = cddb_GenreStringFromNumber(local_238,local_234,0x80);
    if (iVar2 == 0) {
      cdtext_GetGenre(param_2,&local_238,local_234,0x80);
    }
    iVar2 = cddb_IsGenreValid(local_234);
    if (iVar2 == 0) {
      pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4a0);
      FUN_5bf25750(local_100,pBVar3);
      _mbscpy(local_1b4,PTR_s_blues_5bf64798);
      local_1b4[0] = local_1b4[0] + 0xe0;
      _mbscat(local_100,local_1b4);
      ppuVar7 = &PTR_s_classical_5bf647a0;
      do {
        _mbscat(local_100,", ");
        _mbscpy(local_1b4,*ppuVar7);
        local_1b4[0] = local_1b4[0] + 0xe0;
        _mbscat(local_100,local_1b4);
        ppuVar7 = ppuVar7 + 2;
      } while (ppuVar7 < &PTR_s_soundtrack_5bf647e8);
      _mbscat(local_100,", ");
      _mbscpy(local_1b4,PTR_s_soundtrack_5bf647e8);
      local_1b4[0] = local_1b4[0] + 0xe0;
      _mbscat(local_100,local_1b4);
      _mbscat(local_100,".");
      FUN_5bf25c20(param_1,0,local_100);
      return -0x7fffbffb;
    }
    uVar4 = cdtext_GetTrackCount(param_2);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        iVar2 = FUN_5bf2bbb0((int)param_3,uVar6);
        if ((*(uint *)(iVar2 + 8) & 4) == 0) {
          cdtext_GetItemText(param_2,uVar6 + 1,0,local_234,0x80);
          for (pCVar5 = local_234; (*pCVar5 == ' ' || (*pCVar5 == '\t')); pCVar5 = pCVar5 + 1) {
          }
          iVar2 = lstrlenA(pCVar5);
          if (iVar2 == 0) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4a1);
            FUN_5bf25750(local_1b4,pBVar3);
            _mbscat(local_100,local_1b4);
            FUN_5bf25c20(param_1,0,local_100);
            return -0x7fffbffb;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    return 0;
  }
  puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x49f);
  _mbscat(local_100,puVar1);
  FUN_5bf25c20(param_1,0,local_100);
  return -0x7fffbffb;
}


