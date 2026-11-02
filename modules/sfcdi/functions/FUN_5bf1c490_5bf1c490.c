/* Module: sfcdi.dll
   Function: FUN_5bf1c490
   Address: 5bf1c490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1c490(HWND param_1,int param_2)

{
  tPARAMETERS_DEVDES *ptVar1;
  LPSTR pCVar2;
  int iVar3;
  uchar *puVar4;
  int *piVar5;
  long lVar6;
  HSFCD__ **ppHVar7;
  char *_Source;
  uint *local_110;
  int local_10c;
  int local_108;
  uchar local_104 [260];
  
  local_108 = 0;
  local_10c = 0;
  ptVar1 = (tPARAMETERS_DEVDES *)FUN_5bf1c1d0(param_2);
  if (ptVar1 != (tPARAMETERS_DEVDES *)0x0) {
    pCVar2 = FUN_5bf283e0(DAT_5bf65fc4,0x92d);
    FUN_5bf1c2d0(param_1,0x490,pCVar2);
    FUN_5bf0d0b0((int *)&local_110);
    ppHVar7 = (HSFCD__ **)(param_2 + 0x38);
    iVar3 = FUN_5bf0de70(ptVar1,ppHVar7);
    if (iVar3 < 0) {
      puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x92e);
      iVar3 = 0x490;
    }
    else {
      FUN_5bf0d090((int)*ppHVar7,local_110);
      FUN_5bf0deb0(*ppHVar7);
      piVar5 = FUN_5bf0d220(local_110,0);
      if (piVar5 != (int *)0x0) {
        if ((piVar5[0xd1] & 0x1000U) == 0) {
          _Source = (char *)(piVar5 + 0xc9);
        }
        else {
          _Source = "MMC Compatible";
        }
        _mbscpy(local_104,(uchar *)_Source);
        if ((piVar5[0xd1] & 0x200U) != 0) {
          _mbscat(local_104,(uchar *)" (ATAPI)");
        }
        if ((piVar5[0xd1] & 0x100U) != 0) {
          _mbscat(local_104,(uchar *)" (SCSI)");
        }
        FUN_5bf1c2d0(param_1,0x490,(LPCSTR)local_104);
      }
      UpdateWindow(param_1);
      iVar3 = FUN_5bf1c300();
      if (iVar3 == 2) {
        puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x92f);
      }
      else {
        lVar6 = FUN_5bf0d250();
        if (lVar6 < 0) {
          puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x92e);
        }
        else {
          piVar5 = FUN_5bf0d220(local_110,1);
          if (piVar5 != (int *)0x0) {
            local_10c = 1;
          }
          piVar5 = FUN_5bf0d220(local_110,2);
          iVar3 = 1;
          if (piVar5 == (int *)0x0) {
            iVar3 = local_108;
          }
          puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x930);
          _mbscpy(local_104,puVar4);
          if ((iVar3 != 0) || (local_10c != 0)) {
            puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x931);
            _mbscpy(local_104,puVar4);
            if (local_10c != 0) {
              puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x932);
              _mbscat(local_104,puVar4);
            }
            if (iVar3 != 0) {
              puVar4 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x933);
              _mbscat(local_104,puVar4);
            }
          }
          puVar4 = local_104;
        }
      }
      iVar3 = 0x491;
    }
    FUN_5bf1c2d0(param_1,iVar3,(LPCSTR)puVar4);
    FUN_5bf0d090((int)*ppHVar7,0);
    FUN_5bf0de90(*ppHVar7);
    FUN_5bf0d0d0((int *)local_110);
    *ppHVar7 = (HSFCD__ *)0x0;
  }
  return;
}


