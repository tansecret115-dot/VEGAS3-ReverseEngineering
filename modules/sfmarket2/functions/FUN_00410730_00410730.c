/* Module: sfmarket2.dll
   Function: FUN_00410730
   Address: 00410730
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00410730(wchar_t *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  wchar_t *pwStack_68;
  wchar_t *pwStack_64;
  wchar_t *pwStack_60;
  wchar_t **ppwStack_5c;
  short local_2c [4];
  wchar_t *local_24;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  wchar_t *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar1 = (int *)(*(code *)**(undefined4 **)param_1)();
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  param_1 = (wchar_t *)0x0;
  iVar2 = (**(code **)(*local_8 + 0x1c))();
  pcVar7 = _wcsicmp_exref;
  if ((iVar2 < 0) || (iVar2 = _wcsicmp(param_1,L"#document"), iVar2 != 0)) {
LAB_00410a2e:
    piVar1 = (int *)0x8004e0ff;
  }
  else {
    local_10 = (int *)0x0;
    piVar1 = (int *)(**(code **)(*local_8 + 0x34))();
    ppwStack_5c = (wchar_t **)0x4107a6;
    (**(code **)(*local_8 + 8))();
    while (local_8 = local_10, -1 < (int)piVar1) {
      if (local_10 == (int *)0x0) {
LAB_00410815:
        if (-1 < (int)piVar1) {
          if (local_8 == (int *)0x0) {
            piVar1 = (int *)0x8004e0ff;
            goto LAB_00410a43;
          }
          local_14 = (int *)0x0;
          piVar1 = (int *)(**(code **)(*local_8 + 0x44))();
          if (-1 < (int)piVar1) {
            if (local_14 == (int *)0x0) goto LAB_00410a2e;
            local_c = (wchar_t *)0x0;
            local_1c = 0;
            piVar1 = (int *)(**(code **)(*local_14 + 0x38))();
            goto joined_r0x0041085e;
          }
        }
        break;
      }
      Ordinal_6();
      param_1 = (wchar_t *)0x0;
      ppwStack_5c = (wchar_t **)0x4107d2;
      piVar1 = (int *)(**(code **)(*local_8 + 0x1c))();
      if ((int)piVar1 < 0) break;
      iVar2 = _wcsicmp(param_1,L"alerts");
      if (iVar2 == 0) goto LAB_00410815;
      piVar1 = (int *)(**(code **)(*local_8 + 0x40))();
      ppwStack_5c = (wchar_t **)0x410806;
      (**(code **)(*local_8 + 8))();
    }
  }
LAB_00410a33:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
    local_8 = (int *)0x0;
  }
LAB_00410a43:
  Ordinal_6();
  return piVar1;
joined_r0x0041085e:
  if (((int)piVar1 < 0) || (local_c == (wchar_t *)0x0)) goto LAB_004109da;
  ppwStack_5c = (wchar_t **)0x410877;
  Ordinal_6();
  ppwStack_5c = &param_1;
  param_1 = (wchar_t *)0x0;
  pwStack_60 = local_c;
  pwStack_64 = L"\xf08b\xf73b谏Ģ";
  piVar1 = (int *)(**(code **)(*(int *)local_c + 0x1c))();
  if (-1 < (int)piVar1) {
    pwStack_64 = L"deltatime";
    pwStack_68 = param_1;
    iVar2 = (*pcVar7)();
    if (iVar2 == 0) {
      pwStack_64 = local_2c;
      local_2c[0] = 0;
      pwStack_68 = local_c;
      piVar1 = (int *)(**(code **)(*(int *)local_c + 0x20))();
      pwVar3 = local_24;
      if ((-1 < (int)piVar1) && (local_2c[0] == 8)) {
        local_18 = (int *)0x80070057;
        if (local_24 != (wchar_t *)0x0) {
          wcslen(local_24);
          FUN_00492f90();
          wcscpy((wchar_t *)&pwStack_68,pwVar3);
          pwVar3 = wcstok((wchar_t *)&pwStack_68,L":");
          if (pwVar3 != (wchar_t *)0x0) {
            iVar2 = _wtoi(pwVar3);
            pwVar3 = wcstok((wchar_t *)0x0,L":");
            if (pwVar3 != (wchar_t *)0x0) {
              iVar4 = _wtoi(pwVar3);
              pwVar3 = wcstok((wchar_t *)0x0,L":");
              if (pwVar3 != (wchar_t *)0x0) {
                iVar5 = _wtoi(pwVar3);
                pwVar3 = wcstok((wchar_t *)0x0,L":");
                if (pwVar3 != (wchar_t *)0x0) {
                  iVar6 = _wtoi(pwVar3);
                  local_18 = (int *)0x0;
                  *param_4 = iVar6 + (iVar5 + (iVar4 + iVar2 * 0x18) * 0x3c) * 0x3c;
                }
              }
            }
          }
        }
        piVar1 = local_18;
        if (-1 < (int)local_18) {
          local_1c = 1;
        }
      }
      Ordinal_9(local_2c);
      pcVar7 = _wcsicmp_exref;
    }
  }
  pwStack_64 = local_c;
  pwStack_68 = 
  L"\xf73b綉糸謗\xf045喍勸譐（㡑\xf08b\xf73b贏ﺊ\xffff䖋僰ࢋ凿㬈觷\xf07d䥼紹瓨謿ﱅ䶍凴譐０㑒\xf08b䖋僼ႋ勿謈\xf445\xf73b䖉糼㬢瓇謮၍喋儌偒㷨"
  ;
  (**(code **)(*(int *)local_c + 8))();
  local_c = (wchar_t *)0x0;
  if ((int)piVar1 < 0) goto LAB_004109da;
  ppwStack_5c = (wchar_t **)local_14;
  pwStack_60 = 
  L"\xf08b\xf73b贏ﺊ\xffff䖋僰ࢋ凿㬈觷\xf07d䥼紹瓨謿ﱅ䶍凴譐０㑒\xf08b䖋僼ႋ勿謈\xf445\xf73b䖉糼㬢瓇謮၍喋儌偒㷨"
  ;
  piVar1 = (int *)(**(code **)(*local_14 + 0x38))();
  goto joined_r0x0041085e;
LAB_004109da:
  ppwStack_5c = (wchar_t **)0x4109e3;
  (**(code **)(*local_14 + 8))();
  local_14 = (int *)0x0;
  if (-1 < (int)piVar1) {
    if (local_1c == 0) goto LAB_00410a2e;
    piVar1 = (int *)(**(code **)(*local_8 + 0x34))();
    ppwStack_5c = (wchar_t **)0x410a07;
    (**(code **)(*local_8 + 8))();
    local_8 = local_10;
    if (-1 < (int)piVar1) {
      if (local_10 == (int *)0x0) goto LAB_00410a43;
      ppwStack_5c = (wchar_t **)0x410a23;
      piVar1 = FUN_00410a60(local_10,param_2,param_3);
    }
  }
  goto LAB_00410a33;
}


