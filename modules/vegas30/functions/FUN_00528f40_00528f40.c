/* Module: vegas30.exe
   Function: FUN_00528f40
   Address: 00528f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00528f40(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  LRESULT LVar4;
  LPCSTR lpString2;
  HWND pHVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  puVar3 = param_2;
  iVar1 = param_2[2];
  switch(iVar1) {
  case 1:
  case 6:
    uVar6 = FUN_005287d0(param_1,param_2);
    return uVar6;
  case 2:
  case 7:
  case 0x15:
    if (*(int *)(param_1 + 0x120) == 0) {
      uVar6 = FUN_0040c4b0(DAT_0064762c,*(undefined4 *)(param_1 + 0x188),param_2[3],param_2[4]);
      return uVar6;
    }
    local_4 = 0x7f88;
    pHVar5 = WindowFromPoint(*(POINT *)(param_2 + 3));
    do {
      if (pHVar5 == (HWND)0x0) {
LAB_005291ed:
        SendMessageA(*(HWND *)(param_1 + 0xdc),0x60e,0,0);
        FUN_00524ec0(param_1);
        return local_4;
      }
      if (pHVar5 == *(HWND *)(param_1 + 0xb0)) {
        SendMessageA(*(HWND *)(param_1 + 0xdc),0x60e,0,0);
        FUN_00524ec0(param_1);
LAB_005291e5:
        if (pHVar5 != (HWND)0x0) {
          return local_4;
        }
        goto LAB_005291ed;
      }
      if (pHVar5 == *(HWND *)(param_1 + 8)) {
        local_4 = FUN_0040c4b0(DAT_0064762c,*(undefined4 *)(param_1 + 0x188),puVar3[3],puVar3[4]);
        goto LAB_005291e5;
      }
      pHVar5 = GetParent(pHVar5);
    } while( true );
  case 3:
  case 8:
    if (*(int *)(param_1 + 0x188) != 0) {
      if (*(int *)(param_1 + 0x120) == 0) {
        FUN_0040c570(DAT_0064762c,*(int *)(param_1 + 0x188),param_2[3],param_2[4],iVar1 == 8);
        if (*(int *)(param_1 + 0x188) != 0) {
          FUN_00524190(param_1);
        }
      }
      else {
        for (pHVar5 = WindowFromPoint(*(POINT *)(param_2 + 3)); pHVar5 != (HWND)0x0;
            pHVar5 = GetParent(pHVar5)) {
          if (pHVar5 == *(HWND *)(param_1 + 8)) {
            FUN_0040c570(DAT_0064762c,*(undefined4 *)(param_1 + 0x188),puVar3[3],puVar3[4],
                         iVar1 == 8);
            if (pHVar5 != (HWND)0x0) goto LAB_005292b6;
            break;
          }
        }
        FUN_0040c740(DAT_0064762c);
LAB_005292b6:
        if (*(int *)(param_1 + 0x188) != 0) {
          FUN_00524190(param_1);
          return 0;
        }
      }
    }
    return 0;
  case 4:
  case 9:
    SendMessageA(*(HWND *)(param_1 + 0xdc),0x60e,0,0);
    FUN_00524ec0(param_1);
    FUN_0040c740(DAT_0064762c);
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00524190(param_1);
    }
    break;
  case 0xc:
    _SfList_CreateExZ_32(&param_2,4,0x40,0x10,0x40000002,0,0,0);
    if (param_2 != (undefined4 *)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0xb0),0x605,1,(LPARAM)param_2);
      FUN_00528cf0(param_1,param_2,puVar3[3],puVar3[4]);
      FUN_004ec820(param_2);
      return 0;
    }
    break;
  case 0xd:
    lpString2 = (LPCSTR)FUN_004ed410(param_2[1]);
    if ((lpString2 != (LPCSTR)0x0) && (iVar1 = puVar3[5], iVar1 != 0)) {
      lstrcpynA((LPSTR)(iVar1 + 0x10),lpString2,0x50);
      *(undefined1 *)(iVar1 + 0x5f) = 0;
      return 0;
    }
    break;
  case 0xe:
    FUN_00528ef0(param_1,param_2[3],param_2[4],param_2[5]);
    return 0;
  case 0xf:
    _SfList_CreateExZ_32(&param_2,4,0x40,0x10,0x40000002,0,0,0);
    if (param_2 != (undefined4 *)0x0) {
      LVar4 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x60e,0,(LPARAM)param_2);
      if (LVar4 != 0) {
        FUN_00528e30(param_1,param_2,puVar3[3],puVar3[4]);
      }
      FUN_004ec820(param_2);
      return 0;
    }
    break;
  case 0x1e:
    FUN_00527520(param_1);
    piVar2 = *(int **)(param_1 + 0x84);
    if (((piVar2 != (int *)0x0) && (*piVar2 == 1)) && (piVar2[1] == 1)) {
      EndDialog(*(HWND *)(param_1 + 8),1);
      return 0;
    }
    break;
  case 0x1f:
    FUN_00524ad0(param_1);
    return 0;
  case 0x20:
    param_2[10] = DAT_0064b358;
    param_2[0xb] = DAT_0064b35c;
    param_2[0xc] = DAT_0064b360;
    return 0;
  case 0x33:
    FUN_00404790(*param_2);
    return 0;
  case 0x34:
    FUN_00404790(0);
    return 0;
  }
  return 0;
}


