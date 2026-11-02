/* Module: sfs4rw.dll
   Function: FUN_00402880
   Address: 00402880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402880(void *param_1)

{
  uint uVar1;
  LPCSTR lpAppName;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_844;
  int local_840;
  int *local_83c;
  void *local_838;
  uchar local_834 [28];
  uchar local_818 [260];
  uchar local_714 [260];
  uchar local_610 [1040];
  char local_200 [512];
  
  local_83c = (int *)0x0;
  local_838 = param_1;
  GetTempPathA(0x104,(LPSTR)local_714);
  _mbscat(local_714,(uchar *)"sfs4rw");
  iVar2 = FUN_0041d880(local_714,".ini",local_818,0x104);
  if (iVar2 < 0) {
    return 0x8004e161;
  }
  uVar3 = FUN_00426f00((LPCSTR)((int)param_1 + 0x148),2,&local_83c);
  if ((-1 < (int)uVar3) &&
     (uVar3 = FUN_00425dd0(local_83c,(LPCSTR)((int)param_1 + 0x24c),local_818,0), -1 < (int)uVar3))
  {
    piVar5 = &DAT_004a46f8;
    do {
      DVar4 = GetPrivateProfileStringA
                        ("Common",(LPCSTR)piVar5[-2],"",(LPSTR)local_610,0x410,(LPCSTR)local_818);
      if (DVar4 != 0) {
        if (-1 < *piVar5) {
          local_844 = *piVar5 + (int)param_1;
          FUN_00402b90(piVar5[-1],&local_844,piVar5[2],local_610);
        }
        local_844 = piVar5[1];
        if (-1 < local_844) {
          if (*(int **)((int)param_1 + 0x144) == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = **(int **)((int)param_1 + 0x144);
          }
          iVar7 = 0;
          if (0 < iVar2) {
            do {
              local_840 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x144) + 8) + iVar7 * 4) +
                          local_844;
              FUN_00402b90(piVar5[-1],&local_840,piVar5[2],local_610);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar2);
          }
        }
      }
      piVar5 = piVar5 + 5;
    } while ((int)piVar5 < 0x4a484c);
    DVar4 = GetPrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,"",local_200,0x200,(LPCSTR)local_818);
    if (DVar4 != 0) {
      lpAppName = local_200;
      while (local_200[0] != '\0') {
        iVar2 = FUN_004027d0(param_1,lpAppName);
        local_844 = iVar2;
        if (iVar2 != 0) {
          piVar5 = &DAT_004a46fc;
          do {
            if ((-1 < *piVar5) &&
               (DVar4 = GetPrivateProfileStringA
                                  (lpAppName,(LPCSTR)piVar5[-3],"",(LPSTR)local_610,0x410,
                                   (LPCSTR)local_818), DVar4 != 0)) {
              local_840 = *piVar5 + iVar2;
              FUN_00402b90(piVar5[-2],&local_840,piVar5[1],local_610);
            }
            piVar5 = piVar5 + 5;
          } while ((int)piVar5 < 0x4a4850);
          uVar3 = 0;
          DVar4 = GetPrivateProfileStringA
                            (lpAppName,"NumKeyCodes","",(LPSTR)local_610,0x410,(LPCSTR)local_818);
          if ((DVar4 != 0) && (uVar3 = atoi((char *)local_610), uVar3 != *(uint *)(iVar2 + 0x23c)))
          {
            uVar3 = 0;
          }
          param_1 = local_838;
          uVar6 = 0;
          if (uVar3 != 0) {
            do {
              uVar1 = uVar6 + 1;
              FUN_00420f60(local_834,(BYTE *)"KeyCode%d");
              DVar4 = GetPrivateProfileStringA
                                (lpAppName,(LPCSTR)local_834,"",(LPSTR)local_610,0x410,
                                 (LPCSTR)local_818);
              if (DVar4 != 0) {
                iVar2 = atoi((char *)local_610);
                *(int *)(*(int *)(local_844 + 0x240) + uVar6 * 4) = iVar2;
              }
              param_1 = local_838;
              uVar6 = uVar1;
            } while (uVar1 < uVar3);
          }
        }
        iVar2 = lstrlenA(lpAppName);
        lpAppName = lpAppName + iVar2 + 1;
        local_200[0] = *lpAppName;
      }
    }
  }
  if (local_83c != (int *)0x0) {
    FUN_00425520(local_83c);
  }
  DeleteFileA((LPCSTR)local_818);
  return 0;
}


