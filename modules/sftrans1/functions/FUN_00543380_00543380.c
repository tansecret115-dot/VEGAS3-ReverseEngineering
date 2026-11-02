/* Module: sftrans1.dll
   Function: FUN_00543380
   Address: 00543380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00543380(int param_1,undefined4 param_2)

{
  wchar_t *_Str;
  LPCVOID pvVar1;
  int iVar2;
  size_t sVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined2 *puVar7;
  char cVar8;
  int iVar9;
  int local_14;
  int local_10;
  
  iVar9 = 0;
  local_10 = 2;
  local_14 = 0;
  FUN_005441b0();
  FUN_004dd740(param_1 + 0xa0,0x54,0xffffffff,0xffffffff,0x80000002,0,0,0);
  iVar2 = FUN_005431e0();
  do {
    if (iVar2 == -1) {
      if (*(int *)(param_1 + 4) < 0) {
        return 0x80004005;
      }
      return (*(int *)(param_1 + 4) < 1) - 1 & 0x80004005;
    }
    if (*(int *)(param_1 + 4) < 0) {
      return 0x80004005;
    }
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 == 1) {
LAB_005433e1:
      iVar2 = FUN_00543f00(iVar2);
joined_r0x00543443:
      if (iVar2 != 0) {
        return 0x80004005;
      }
      goto switchD_00543406_caseD_a;
    }
    switch(iVar2) {
    case 10:
    case 0xd:
      break;
    default:
      if (iVar6 == 0) goto LAB_005433e1;
      if (iVar6 == 2) {
        iVar9 = iVar9 * 0x10;
        iVar6 = isdigit(iVar2);
        cVar8 = (char)iVar2;
        if (iVar6 == 0) {
          iVar6 = islower(iVar2);
          if (iVar6 == 0) {
            if (iVar2 < 0x41) {
              return 0x80004005;
            }
            if (0x46 < iVar2) {
              return 0x80004005;
            }
            local_14 = iVar9 + -0x37 + (int)cVar8;
          }
          else {
            if (iVar2 < 0x61) {
              return 0x80004005;
            }
            if (0x66 < iVar2) {
              return 0x80004005;
            }
            local_14 = iVar9 + -0x57 + (int)cVar8;
          }
        }
        else {
          local_14 = iVar9 + -0x30 + (int)cVar8;
        }
        local_10 = local_10 + -1;
        iVar9 = local_14;
        if (local_10 == 0) {
          iVar9 = FUN_00543f00(local_14);
          if (iVar9 != 0) {
            return 0x80004005;
          }
          local_10 = 2;
          local_14 = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          iVar9 = local_14;
        }
      }
      else {
        if (iVar6 != 3) {
          return 0x80004005;
        }
        if (0 < **(int **)(param_1 + 0xa0)) {
          FUN_00543790();
        }
        if (*(char *)(param_1 + 0x88) != '\0') {
          FUN_005439d0();
          *(undefined1 *)(param_1 + 0x88) = 0;
        }
        iVar2 = *(int *)((*(int **)(param_1 + 0xa0))[2] + -4 + **(int **)(param_1 + 0xa0) * 4);
        iVar9 = local_14;
        if (*(wchar_t **)(iVar2 + 8) == (wchar_t *)0x0) {
          pvVar4 = GlobalAlloc(0x40,4);
          puVar7 = GlobalLock(pvVar4);
          if (puVar7 == (undefined2 *)0x0) {
            return 0x8007000e;
          }
          pvVar1 = *(LPCVOID *)(iVar2 + 8);
          if (pvVar1 != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(pvVar1);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pvVar1);
            GlobalFree(pvVar4);
          }
          *(undefined2 **)(iVar2 + 8) = puVar7;
          *(undefined4 *)(iVar2 + 0xc) = 2;
          *puVar7 = *(undefined2 *)(param_1 + 0x10);
          *(undefined2 *)(*(int *)(iVar2 + 8) + 2) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        else {
          iVar6 = *(int *)(iVar2 + 0xc);
          sVar3 = wcslen(*(wchar_t **)(iVar2 + 8));
          if (iVar6 < (int)(sVar3 + 2)) {
            _Str = *(wchar_t **)(iVar2 + 8);
            *(undefined4 *)(iVar2 + 8) = 0;
            *(undefined4 *)(iVar2 + 0xc) = 0;
            sVar3 = wcslen(_Str);
            pvVar4 = GlobalAlloc(0x40,(sVar3 + 2) * 2);
            pvVar5 = GlobalLock(pvVar4);
            if (pvVar5 == (LPVOID)0x0) {
              pvVar4 = GlobalHandle(_Str);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(_Str);
              GlobalFree(pvVar4);
              return 0x8007000e;
            }
            pvVar1 = *(LPCVOID *)(iVar2 + 8);
            if (pvVar1 != (LPCVOID)0x0) {
              pvVar4 = GlobalHandle(pvVar1);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pvVar1);
              GlobalFree(pvVar4);
            }
            *(LPVOID *)(iVar2 + 8) = pvVar5;
            *(size_t *)(iVar2 + 0xc) = sVar3 + 2;
            iVar6 = 0;
            if (0 < (int)sVar3) {
              do {
                *(wchar_t *)(*(int *)(iVar2 + 8) + iVar6 * 2) = _Str[iVar6];
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)sVar3);
            }
            *(undefined2 *)(*(int *)(iVar2 + 8) + sVar3 * 2) = *(undefined2 *)(param_1 + 0x10);
            *(undefined2 *)(*(int *)(iVar2 + 8) + 2 + sVar3 * 2) = 0;
            pvVar4 = GlobalHandle(_Str);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(_Str);
            GlobalFree(pvVar4);
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          else {
            sVar3 = wcslen(*(wchar_t **)(iVar2 + 8));
            *(undefined2 *)(*(int *)(iVar2 + 8) + sVar3 * 2) = *(undefined2 *)(param_1 + 0x10);
            *(undefined2 *)(*(int *)(iVar2 + 8) + 2 + sVar3 * 2) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
        }
      }
      break;
    case 0x5c:
      iVar2 = FUN_00543d80(param_2);
      goto joined_r0x00543443;
    case 0x7b:
      iVar2 = FUN_00543c20();
      goto joined_r0x0054342a;
    case 0x7d:
      iVar2 = FUN_00543cc0();
joined_r0x0054342a:
      if (iVar2 != 0) {
        return 0x80004005;
      }
    }
switchD_00543406_caseD_a:
    iVar2 = FUN_005431e0();
  } while( true );
}


