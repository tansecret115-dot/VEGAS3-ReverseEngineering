/* Module: mp3rw.dll
   Function: FUN_00402880
   Address: 00402880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402880(void *param_1)

{
  uint uVar1;
  LPCSTR lpAppName;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  uchar *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  int local_844;
  void *local_840;
  int *local_83c;
  int local_838;
  uchar local_834 [28];
  uchar local_818 [260];
  uchar local_714 [260];
  uchar local_610;
  uchar local_60f [1039];
  char local_200 [512];
  
  local_83c = (int *)0x0;
  local_840 = param_1;
  GetTempPathA(0x104,(LPSTR)local_714);
  _mbscat(local_714,(uchar *)"sfs4rw");
  iVar3 = FUN_0041d900(local_714,".ini",local_818,0x104);
  if (iVar3 < 0) {
    return 0x8004e161;
  }
  uVar4 = FUN_00426f80((LPCSTR)((int)param_1 + 0x148),2,&local_83c);
  if ((-1 < (int)uVar4) &&
     (uVar4 = FUN_00425e50(local_83c,(LPCSTR)((int)param_1 + 0x24c),local_818,0), -1 < (int)uVar4))
  {
    piVar8 = &DAT_004a46f8;
    do {
      pcVar11 = GetPrivateProfileStringA_exref;
      DVar5 = GetPrivateProfileStringA
                        ("Common",(LPCSTR)piVar8[-2],"",(LPSTR)&local_610,0x410,(LPCSTR)local_818);
      if (DVar5 != 0) {
        if (-1 < *piVar8) {
          local_844 = *piVar8 + (int)param_1;
          FUN_00402bd0(piVar8[-1],&local_844,piVar8[2],&local_610);
        }
        iVar3 = piVar8[1];
        if (-1 < iVar3) {
          if (*(int **)((int)param_1 + 0x144) == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = **(int **)((int)param_1 + 0x144);
          }
          iVar10 = 0;
          param_1 = local_840;
          pcVar11 = GetPrivateProfileStringA_exref;
          if (0 < iVar7) {
            do {
              local_838 = *(int *)(*(int *)(*(int *)((int)local_840 + 0x144) + 8) + iVar10 * 4) +
                          iVar3;
              FUN_00402bd0(piVar8[-1],&local_838,piVar8[2],&local_610);
              iVar10 = iVar10 + 1;
              param_1 = local_840;
              pcVar11 = GetPrivateProfileStringA_exref;
            } while (iVar10 < iVar7);
          }
        }
      }
      piVar8 = piVar8 + 5;
    } while ((int)piVar8 < 0x4a484c);
    iVar3 = (*pcVar11)(0,0,&DAT_00490864,local_200,0x200,local_818);
    if (iVar3 != 0) {
      lpAppName = local_200;
      while (local_200[0] != '\0') {
        local_844 = FUN_004027d0(param_1,lpAppName);
        if (local_844 != 0) {
          piVar8 = &DAT_004a46fc;
          do {
            if ((-1 < *piVar8) &&
               (iVar3 = (*pcVar11)(lpAppName,piVar8[-3],&DAT_00490864,&local_610,0x410,local_818),
               iVar3 != 0)) {
              local_838 = *piVar8 + local_844;
              FUN_00402bd0(piVar8[-2],&local_838,piVar8[1],&local_610);
            }
            piVar8 = piVar8 + 5;
          } while ((int)piVar8 < 0x4a4850);
          uVar4 = 0;
          iVar3 = (*pcVar11)(lpAppName,"NumKeyCodes",&DAT_00490864,&local_610,0x410,local_818);
          if (iVar3 != 0) {
            uVar4 = 0;
            puVar6 = &local_610;
            uVar2 = local_610;
            while (((uVar2 != '\0' && ('/' < (char)uVar2)) && ((char)uVar2 < ':'))) {
              puVar6 = puVar6 + 1;
              uVar4 = (char)uVar2 + -0x30 + uVar4 * 10;
              uVar2 = *puVar6;
            }
            if (uVar4 != *(uint *)(local_844 + 0x23c)) {
              uVar4 = 0;
            }
          }
          param_1 = local_840;
          uVar9 = 0;
          if (uVar4 != 0) {
            do {
              uVar1 = uVar9 + 1;
              FUN_00420fe0(local_834,(BYTE *)"KeyCode%d");
              DVar5 = GetPrivateProfileStringA
                                (lpAppName,(LPCSTR)local_834,"",(LPSTR)&local_610,0x410,
                                 (LPCSTR)local_818);
              if (DVar5 != 0) {
                iVar3 = 0;
                puVar6 = &local_610;
                uVar2 = local_610;
                while (((uVar2 != '\0' && ('/' < (char)uVar2)) && ((char)uVar2 < ':'))) {
                  puVar6 = puVar6 + 1;
                  iVar3 = (char)uVar2 + -0x30 + iVar3 * 10;
                  uVar2 = *puVar6;
                }
                *(int *)(*(int *)(local_844 + 0x240) + uVar9 * 4) = iVar3;
              }
              param_1 = local_840;
              uVar9 = uVar1;
              pcVar11 = GetPrivateProfileStringA_exref;
            } while (uVar1 < uVar4);
          }
        }
        iVar3 = lstrlenA(lpAppName);
        lpAppName = lpAppName + iVar3 + 1;
        local_200[0] = *lpAppName;
      }
    }
  }
  if (local_83c != (int *)0x0) {
    FUN_004255a0(local_83c);
  }
  DeleteFileA((LPCSTR)local_818);
  return 0;
}


