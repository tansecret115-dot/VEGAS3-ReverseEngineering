/* Module: vegas30.exe
   Function: FUN_00469910
   Address: 00469910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00469910(int *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCWSTR pWVar1;
  uint _Size;
  int iVar2;
  int iVar3;
  LPCSTR lpString;
  int *piVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  int *piStack_25c;
  int *piStack_258;
  undefined4 uStack_254;
  int *piStack_250;
  int local_240 [33];
  int local_1bc;
  uint local_1b8;
  int local_18;
  LPCWSTR local_14;
  uint local_10;
  int local_c;
  LPCSTR local_8;
  
  piStack_258 = local_240;
  piVar4 = local_240;
  for (iVar3 = 0x8a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piStack_250 = &local_18;
  uStack_254 = 0x8c;
  piStack_25c = param_1;
  local_8 = (LPCSTR)0x0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((local_18 != 0x8c) || ((local_240[0] != 0x31 && (local_240[0] != 0x32)))) {
    return -0x7ffb1ff8;
  }
  lpString = (LPCSTR)0x0;
  if (local_1b8 != 0) {
    _Size = local_1b8 >> 1;
    local_8 = calloc(1,_Size);
    if (local_8 == (LPCSTR)0x0) {
      iVar3 = -0x7ff8fff2;
      goto LAB_00469b7c;
    }
    local_10 = local_1b8;
    if (_Size * 2 <= local_1b8) {
      local_10 = _Size * 2;
    }
    FUN_0060ac30();
    local_14 = (LPCWSTR)&piStack_25c;
    local_c = (**(code **)(*param_1 + 0xc))(param_1,&piStack_25c,local_10,&local_10);
    if (-1 < local_c) {
      if ((local_14 == (LPCWSTR)0x0) || (*local_14 != L'\0')) {
        WideCharToMultiByte(0,0,local_14,-1,local_8,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else {
        *local_8 = '\0';
      }
      local_8[_Size - 1] = '\0';
      if (local_10 < local_1b8) {
        (**(code **)(*param_1 + 0x14))(param_1,local_1b8 - local_10,0,1,0);
        local_8[_Size - 1] = '\0';
      }
    }
    lpString = local_8;
    iVar3 = local_c;
    if (local_c < 0) goto LAB_00469b7c;
  }
  iVar3 = local_1bc;
  if (local_1bc < 1) {
    iVar3 = 1;
  }
  if (lpString == (LPCSTR)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = lstrlenA(lpString);
    iVar2 = iVar2 + 1;
  }
  iVar3 = _SfList_AllocItem_12(param_3,iVar2 + 0x224 + iVar3 * 4,&local_14);
  pWVar1 = local_14;
  if (local_14 == (LPCWSTR)0x0) {
LAB_00469b6d:
    if (-1 < iVar3) {
      return iVar3;
    }
  }
  else {
    piVar4 = local_240;
    pWVar6 = local_14;
    for (iVar3 = 0x8a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)pWVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      pWVar6 = pWVar6 + 2;
    }
    iVar3 = FUN_005c22f0(param_1,1,param_2,local_14 + 0x48,local_14);
    if (-1 < iVar3) {
      iVar2 = *(int *)(pWVar1 + 0x42);
      if (iVar2 != 0) {
        pWVar6 = pWVar1 + 0x110;
        local_c = 0;
        pWVar5 = pWVar6;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          pWVar5[0] = L'\0';
          pWVar5[1] = L'\0';
          pWVar5 = pWVar5 + 2;
        }
        if (0 < *(int *)(pWVar1 + 0x42)) {
          do {
            iVar3 = FUN_005c1560(param_1,param_2,1,pWVar6);
            if (iVar3 < 0) break;
            local_c = local_c + 1;
            pWVar6 = pWVar6 + 2;
          } while (local_c < *(int *)(pWVar1 + 0x42));
        }
      }
      if (*(int *)(pWVar1 + 2) == 2) {
        pWVar6 = pWVar1 + 0x74;
        pWVar6[0] = L'\0';
        pWVar6[1] = L'\0';
        pWVar1[0x76] = L'\0';
        pWVar1[0x77] = L'\0';
        pWVar1[0x78] = L'\0';
        pWVar1[0x79] = L'\0';
        pWVar1[0x7a] = L'\0';
        pWVar1[0x7b] = L'\0';
        iVar3 = FUN_005c1ea0(param_1,1,pWVar6);
      }
      else if (*(int *)(pWVar1 + 2) == 3) {
        pWVar6 = pWVar1 + 0x7c;
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          pWVar6[0] = L'\0';
          pWVar6[1] = L'\0';
          pWVar6 = pWVar6 + 2;
        }
        iVar3 = FUN_005c1f50(param_1,1,pWVar1 + 0x7c,pWVar1);
      }
      if (-1 < iVar3) {
        *(LPCSTR *)(pWVar1 + 0x46) = local_8;
        iVar3 = _SfList_InsertList_16(param_3,0xffffffff,0,0xffffffff);
        goto LAB_00469b6d;
      }
    }
  }
  if (pWVar1 != (LPCWSTR)0x0) {
    FUN_00469690();
  }
LAB_00469b7c:
  if (local_8 != (LPCSTR)0x0) {
    free(local_8);
  }
  return iVar3;
}


