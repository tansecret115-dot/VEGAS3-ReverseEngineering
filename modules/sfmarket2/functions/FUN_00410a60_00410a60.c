/* Module: sfmarket2.dll
   Function: FUN_00410a60
   Address: 00410a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00410a60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  int *piStack_74;
  int **ppiStack_70;
  short local_4c [4];
  wchar_t *local_44;
  int *local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  wchar_t *local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  wchar_t *local_8;
  
  piVar5 = (int *)0x0;
  (**(code **)(*param_1 + 4))();
  do {
    if (param_1 == (int *)0x0) {
      return piVar5;
    }
    local_8 = (wchar_t *)0x0;
    piVar5 = (int *)(**(code **)(*param_1 + 0x1c))();
    pcVar7 = Ordinal_6_exref;
    if (-1 < (int)piVar5) {
      ppiStack_70 = (int **)0x410aa9;
      iVar1 = _wcsicmp(local_8,L"alert");
      pcVar7 = Ordinal_6_exref;
      if (iVar1 == 0) {
        local_2c = 0;
        local_14 = (int *)0x0;
        ppiStack_70 = (int **)0x410ac4;
        iVar1 = (**(code **)(*param_1 + 0x44))();
        if ((-1 < iVar1) && (local_14 != (int *)0x0)) {
          ppiStack_70 = &local_10;
          local_10 = (int *)0x0;
          piStack_74 = local_14;
          iVar1 = (**(code **)(*local_14 + 0x38))();
          while ((-1 < iVar1 && (local_10 != (int *)0x0))) {
            Ordinal_6(local_8);
            local_8 = (wchar_t *)0x0;
            iVar1 = (**(code **)(*local_10 + 0x1c))(local_10,&local_8);
            if ((-1 < iVar1) && (iVar1 = _wcsicmp(local_8,L"global"), iVar1 == 0)) {
              local_4c[0] = 0;
              iVar1 = (**(code **)(*local_10 + 0x20))(local_10,local_4c);
              if (((-1 < iVar1) && (local_4c[0] == 8)) &&
                 ((iVar1 = _wcsicmp(local_44,L"Yes"), iVar1 == 0 ||
                  (iVar1 = _wcsicmp(local_44,L"1"), iVar1 == 0)))) {
                local_2c = 1;
              }
              Ordinal_9(local_4c);
            }
            (**(code **)(*local_10 + 8))(local_10);
            local_10 = (int *)0x0;
            iVar1 = (**(code **)(*local_14 + 0x38))(local_14,&local_10);
          }
          (**(code **)(*local_14 + 8))(local_14);
          local_14 = (int *)0x0;
        }
        ppiStack_70 = &local_c;
        piStack_74 = param_1;
        local_24 = (wchar_t *)0x0;
        local_20 = (wchar_t *)0x0;
        local_1c = (wchar_t *)0x0;
        local_18 = (wchar_t *)0x0;
        local_c = (int *)0x0;
        piVar5 = (int *)(**(code **)(*param_1 + 0x34))();
        while (-1 < (int)piVar5) {
          if (local_c == (int *)0x0) {
            if ((((-1 < (int)piVar5) && (local_24 != (wchar_t *)0x0)) &&
                (iVar1 = Ordinal_7(local_24), iVar1 != 0)) &&
               (((local_20 != (wchar_t *)0x0 && (iVar1 = Ordinal_7(local_20), iVar1 != 0)) &&
                ((local_18 != (wchar_t *)0x0 &&
                 ((iVar1 = Ordinal_7(local_18), iVar1 != 0 &&
                  (local_3c = (int *)_wtoi(local_24), local_3c != (int *)0x0)))))))) {
              piVar6 = (int *)0x0;
              if (local_1c != (wchar_t *)0x0) {
                iVar1 = Ordinal_7(local_1c);
                pwVar2 = local_1c;
                if (iVar1 != 0) {
                  local_38 = &local_34;
                  local_10 = (int *)0x80070057;
                  piVar5 = local_10;
                  piVar6 = local_38;
                  if (local_1c != (wchar_t *)0x0) {
                    wcslen(local_1c);
                    FUN_00492f90();
                    wcscpy((wchar_t *)&piStack_74,pwVar2);
                    pwVar2 = wcstok((wchar_t *)&piStack_74,L":");
                    piVar5 = local_10;
                    piVar6 = local_38;
                    if (pwVar2 != (wchar_t *)0x0) {
                      iVar1 = _wtoi(pwVar2);
                      pwVar2 = wcstok((wchar_t *)0x0,L":");
                      piVar5 = local_10;
                      piVar6 = local_38;
                      if (pwVar2 != (wchar_t *)0x0) {
                        iVar3 = _wtoi(pwVar2);
                        pwVar2 = wcstok((wchar_t *)0x0,L":");
                        piVar5 = local_10;
                        piVar6 = local_38;
                        if (pwVar2 != (wchar_t *)0x0) {
                          iVar4 = _wtoi(pwVar2);
                          pwVar2 = wcstok((wchar_t *)0x0,L":");
                          piVar5 = local_10;
                          piVar6 = local_38;
                          if (pwVar2 != (wchar_t *)0x0) {
                            local_34 = _wtoi(pwVar2);
                            local_10 = (int *)0x0;
                            local_34 = local_34 + (iVar4 + (iVar3 + iVar1 * 0x18) * 0x3c) * 0x3c;
                            piVar5 = local_10;
                            piVar6 = local_38;
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar1 = local_2c;
              if (-1 < (int)piVar5) {
                local_10 = (int *)0x0;
                piVar5 = (int *)FUN_0040ef70(local_20,local_18,piVar6,local_3c,local_2c,&local_10);
                if (-1 < (int)piVar5) {
                  piVar5 = param_2;
                  if (iVar1 != 0) {
                    piVar5 = param_3;
                  }
                  local_3c = local_10;
                  piVar5 = (int *)FUN_00427510(piVar5,-1,(int *)&local_3c,1);
                  if ((int)piVar5 < 0) {
                    FUN_0040f560(local_10);
                  }
                }
              }
            }
            break;
          }
          Ordinal_6(local_8);
          local_8 = (wchar_t *)0x0;
          piVar5 = (int *)(**(code **)(*local_c + 0x1c))(local_c,&local_8);
          if ((-1 < (int)piVar5) &&
             ((((iVar1 = _wcsicmp(local_8,L"id"), iVar1 == 0 ||
                (iVar1 = _wcsicmp(local_8,L"name"), iVar1 == 0)) ||
               (iVar1 = _wcsicmp(local_8,L"deltatime"), iVar1 == 0)) ||
              (iVar1 = _wcsicmp(local_8,L"URL"), iVar1 == 0)))) {
            piVar5 = (int *)FUN_00410ec0(local_c);
          }
          local_28 = (int *)0x0;
          if (-1 < (int)piVar5) {
            piVar5 = (int *)(**(code **)(*local_c + 0x40))(local_c,&local_28);
          }
          (**(code **)(*local_c + 8))(local_c);
          local_c = local_28;
        }
        pcVar7 = Ordinal_6_exref;
        Ordinal_6(local_18);
        Ordinal_6(local_1c);
        Ordinal_6(local_20);
        Ordinal_6(local_24);
      }
    }
    local_30 = (int *)0x0;
    if (-1 < (int)piVar5) {
      ppiStack_70 = (int **)0x410e85;
      piVar5 = (int *)(**(code **)(*param_1 + 0x40))();
    }
    (**(code **)(*param_1 + 8))();
    param_1 = local_30;
    ppiStack_70 = (int **)0x410e9c;
    (*pcVar7)();
    if ((int)piVar5 < 0) {
      return piVar5;
    }
  } while( true );
}


