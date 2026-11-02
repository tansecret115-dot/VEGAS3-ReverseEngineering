/* Module: sftrans1.dll
   Function: FUN_0048bfc0
   Address: 0048bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048bfc0(int *param_1,uint param_2,undefined4 *param_3)

{
  short *psVar1;
  short sVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  wchar_t local_4 [2];
  
  if ((((param_3 != (undefined4 *)0x0) && (0 < (int)param_2)) && (param_1 != (int *)0x0)) &&
     (((wchar_t *)*param_1 != (wchar_t *)0x0 && (sVar3 = wcslen((wchar_t *)*param_1), sVar3 != 0))))
  {
    puVar12 = param_3;
    for (uVar7 = (param_2 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = param_2 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    pwVar5 = (wchar_t *)*param_1;
    if (*pwVar5 == L' ') {
      pwVar6 = pwVar5 + 1;
      pwVar4 = wcsstr(pwVar6,L"\r\n");
      if (pwVar4 != (wchar_t *)0x0) {
        uVar7 = (int)pwVar4 - (int)pwVar6 >> 1;
        if ((int)param_2 < (int)(uVar7 + 1)) {
          uVar7 = param_2 - 1;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((1 < (int)uVar7) && (*pwVar6 == L'\"')) {
          uVar7 = uVar7 - 2;
          pwVar6 = pwVar5 + 2;
        }
        puVar12 = param_3;
        for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *(undefined4 *)pwVar6;
          pwVar6 = pwVar6 + 2;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar12 = (char)*pwVar6;
          pwVar6 = (wchar_t *)((int)pwVar6 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        if (uVar7 != 0) {
          FUN_00486350(param_3,0x7e,0x22);
        }
        sVar3 = wcslen(L"\r\n");
        *param_1 = (int)(pwVar4 + sVar3);
        return 0;
      }
    }
    else {
      local_4[0] = L'\t';
      local_4[1] = 0;
      pwVar5 = wcsstr(pwVar5,local_4);
      pwVar6 = wcsstr((wchar_t *)*param_1,L"\r\n");
      if (pwVar6 != (wchar_t *)0x0) {
        if ((pwVar5 != (wchar_t *)0x0) && (pwVar5 < pwVar6)) {
          psVar11 = (short *)*param_1;
          uVar7 = (int)pwVar5 - (int)psVar11 >> 1;
          if ((int)param_2 < (int)(uVar7 + 1)) {
            uVar7 = param_2 - 1;
          }
          if ((int)uVar7 < 0) {
            uVar7 = 0;
            uVar8 = uVar7;
          }
          else {
            uVar8 = uVar7;
            if ((1 < (int)uVar7) && (*psVar11 == 0x22)) {
              psVar11 = psVar11 + 1;
              uVar8 = uVar7 - 2;
            }
          }
          puVar12 = param_3;
          for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *(undefined4 *)psVar11;
            psVar11 = psVar11 + 2;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar8 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)puVar12 = (char)*psVar11;
            psVar11 = (short *)((int)psVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          if (uVar8 != 0) {
            FUN_00486350(param_3,0x7e,0x22);
          }
          iVar10 = uVar8 + 1;
          psVar11 = (short *)(*param_1 + uVar7 * 2);
          sVar2 = *(short *)(*param_1 + uVar7 * 2);
          while (sVar2 == 9) {
            psVar1 = psVar11 + 1;
            psVar11 = psVar11 + 1;
            sVar2 = *psVar1;
          }
          uVar7 = (int)pwVar6 - (int)psVar11 >> 1;
          param_3 = (undefined4 *)((int)param_3 + iVar10 * 2);
          if ((int)param_2 < (int)(uVar7 + 1 + iVar10)) {
            uVar7 = (param_2 - iVar10) - 1;
          }
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          else if ((uVar7 != 0) && (*psVar11 == 0x22)) {
            uVar7 = uVar7 - 2;
            psVar11 = psVar11 + 1;
          }
          puVar12 = param_3;
          for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *(undefined4 *)psVar11;
            psVar11 = psVar11 + 2;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar7 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)puVar12 = (char)*psVar11;
            psVar11 = (short *)((int)psVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          if (uVar7 != 0) {
            FUN_00486350(param_3,0x7e,0x22);
          }
          sVar3 = wcslen(L"\r\n");
          *param_1 = (int)(pwVar6 + sVar3);
          return 2;
        }
        psVar11 = (short *)*param_1;
        uVar7 = (int)pwVar6 - (int)psVar11 >> 1;
        if ((int)param_2 < (int)(uVar7 + 1)) {
          uVar7 = param_2 - 1;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((1 < (int)uVar7) && (*psVar11 == 0x22)) {
          uVar7 = uVar7 - 2;
          psVar11 = psVar11 + 1;
        }
        puVar12 = param_3;
        for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *(undefined4 *)psVar11;
          psVar11 = psVar11 + 2;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar12 = (char)*psVar11;
          psVar11 = (short *)((int)psVar11 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        if (uVar7 != 0) {
          FUN_00486350(param_3,0x7e,0x22);
        }
        sVar3 = wcslen(L"\r\n");
        *param_1 = (int)(pwVar6 + sVar3);
        return 1;
      }
    }
  }
  return 0xffffffff;
}


