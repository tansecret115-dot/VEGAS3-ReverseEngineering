/* Module: pncrt.dll
   Function: FUN_7801cbd0
   Address: 7801cbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_7801cbd0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  size_t sVar1;
  void *pvVar2;
  int *piVar3;
  ulong *puVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined4 *local_4;
  
  iVar10 = 2;
  pwVar6 = (wchar_t *)*param_1;
  puVar8 = param_1;
  while (pwVar6 != (wchar_t *)0x0) {
    puVar8 = puVar8 + 1;
    sVar1 = wcslen(pwVar6);
    iVar10 = iVar10 + 1 + sVar1;
    pwVar6 = (wchar_t *)*puVar8;
  }
  pvVar2 = malloc(iVar10 * 2);
  *param_3 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *param_4 = 0;
LAB_7801ce3c:
    piVar3 = _errno();
    *piVar3 = 0xc;
    puVar4 = __doserrno();
    *puVar4 = 8;
    return 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar10 = 2;
    pwVar6 = (wchar_t *)*param_2;
    puVar8 = param_2;
    while (pwVar6 != (wchar_t *)0x0) {
      puVar8 = puVar8 + 1;
      sVar1 = wcslen(pwVar6);
      iVar10 = iVar10 + 1 + sVar1;
      pwVar6 = (wchar_t *)*puVar8;
    }
    if (param_2 != (undefined4 *)0x0) {
      if (DAT_78041e30 == (wchar_t *)0x0) {
        DAT_78041e30 = FUN_7800cf80();
        if (DAT_78041e30 == (wchar_t *)0x0) {
          return 0xffffffff;
        }
      }
      local_4 = (undefined4 *)0x0;
      if (*DAT_78041e30 != L'\0') {
        wVar7 = *DAT_78041e30;
        pwVar6 = DAT_78041e30;
        do {
          if (wVar7 == L'=') break;
          sVar1 = wcslen(pwVar6);
          local_4 = (undefined4 *)((int)local_4 + sVar1 + 1);
          wVar7 = DAT_78041e30[(int)local_4];
          pwVar6 = DAT_78041e30 + (int)local_4;
        } while (wVar7 != L'\0');
      }
      wVar7 = DAT_78041e30[(int)local_4];
      puVar8 = local_4;
      while ((((wVar7 == L'=' && (DAT_78041e30[(int)puVar8 + 1] != L'\0')) &&
              (DAT_78041e30[(int)puVar8 + 2] == L':')) && (DAT_78041e30[(int)puVar8 + 3] == L'=')))
      {
        sVar1 = wcslen(DAT_78041e30 + (int)(puVar8 + 1));
        puVar8 = (undefined4 *)((int)puVar8 + sVar1 + 5);
        wVar7 = DAT_78041e30[(int)puVar8];
      }
      pvVar2 = malloc(((int)puVar8 + iVar10 + (int)local_4 * 0x7fffffff) * 2);
      *param_4 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        free((void *)*param_3);
        *param_3 = 0;
        goto LAB_7801ce3c;
      }
      goto LAB_7801cc5f;
    }
  }
  *param_4 = 0;
  puVar8 = param_4;
  local_4 = this;
LAB_7801cc5f:
  pwVar6 = (wchar_t *)*param_3;
  if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
    pwVar6 = pwVar6 + 1;
  }
  else {
    wcscpy(pwVar6,(wchar_t *)*param_1);
    pwVar11 = (wchar_t *)*param_1;
    param_1 = param_1 + 1;
    sVar1 = wcslen(pwVar11);
    pwVar6 = pwVar6 + sVar1 + 1;
  }
  pwVar11 = (wchar_t *)*param_1;
  while (pwVar11 != (wchar_t *)0x0) {
    wcscpy(pwVar6,pwVar11);
    pwVar11 = (wchar_t *)*param_1;
    param_1 = param_1 + 1;
    sVar1 = wcslen(pwVar11);
    pwVar6[sVar1] = L' ';
    pwVar6 = pwVar6 + sVar1 + 1;
    pwVar11 = (wchar_t *)*param_1;
  }
  pwVar6[-1] = L'\0';
  *pwVar6 = L'\0';
  pwVar6 = (wchar_t *)*param_4;
  if (param_2 != (undefined4 *)0x0) {
    uVar9 = (int)puVar8 - (int)local_4;
    pwVar11 = DAT_78041e30 + (int)local_4;
    pwVar12 = pwVar6;
    for (uVar5 = (uVar9 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pwVar12 = *(undefined4 *)pwVar11;
      pwVar11 = pwVar11 + 2;
      pwVar12 = pwVar12 + 2;
    }
    for (uVar5 = uVar9 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)pwVar12 = (char)*pwVar11;
      pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      pwVar12 = (wchar_t *)((int)pwVar12 + 1);
    }
    pwVar11 = (wchar_t *)*param_2;
    pwVar6 = pwVar6 + uVar9;
    while (pwVar11 != (wchar_t *)0x0) {
      wcscpy(pwVar6,pwVar11);
      pwVar11 = (wchar_t *)*param_2;
      param_2 = param_2 + 1;
      sVar1 = wcslen(pwVar11);
      pwVar6 = pwVar6 + sVar1 + 1;
      pwVar11 = (wchar_t *)*param_2;
    }
  }
  if (pwVar6 != (wchar_t *)0x0) {
    if (pwVar6 == (wchar_t *)*param_4) {
      *pwVar6 = L'\0';
      pwVar6 = pwVar6 + 1;
    }
    *pwVar6 = L'\0';
  }
  free(DAT_78041e30);
  DAT_78041e30 = (wchar_t *)0x0;
  return 0;
}


