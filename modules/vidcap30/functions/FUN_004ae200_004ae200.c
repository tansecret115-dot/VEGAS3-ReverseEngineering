/* Module: vidcap30.exe
   Function: FUN_004ae200
   Address: 004ae200
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_004ae200(byte *param_1,undefined4 param_2,HWND param_3,HWND param_4)

{
  int iVar1;
  int iVar2;
  LONG LVar3;
  DWORD DVar4;
  HWND pHVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_14;
  
  switch(param_2) {
  case 0x60a:
    return *(HWND *)(param_1 + 0x4c);
  case 0x60b:
    return *(HWND *)(param_1 + 0x44);
  case 0x60c:
    return *(HWND *)(param_1 + 0x48);
  case 0x60d:
    *(int *)(param_1 + 0x44) = (int)(short)param_4;
    *(int *)(param_1 + 0x48) = (int)(short)((uint)param_4 >> 0x10);
    break;
  case 0x60e:
    *(HWND *)(param_1 + 0x44) = param_4;
    break;
  case 0x60f:
    *(HWND *)(param_1 + 0x48) = param_4;
    break;
  case 0x610:
    FUN_004ad090(param_1,param_4,param_3);
    return *(HWND *)(param_1 + 0x4c);
  case 0x611:
    pHVar5 = *(HWND *)(param_1 + 0x44);
    if (((int)*(HWND *)(param_1 + 0x44) <= (int)param_4) &&
       (pHVar5 = *(HWND *)(param_1 + 0x48), (int)param_4 <= (int)*(HWND *)(param_1 + 0x48))) {
      pHVar5 = param_4;
    }
    *(HWND *)(param_1 + 0x50) = pHVar5;
    return pHVar5;
  case 0x61e:
    return *(HWND *)(param_1 + 0xa8);
  case 0x61f:
    *(HWND *)(param_1 + 0xa8) = param_4;
    break;
  case 0x620:
    return *(HWND *)(param_1 + 4);
  case 0x621:
    *(HWND *)(param_1 + 4) = param_3;
    return param_3;
  case 0x622:
    uVar6 = GetWindowLongA(*(HWND *)(param_1 + 0x38),-0x10);
    uVar6 = uVar6 & 0xffff0000 | (uint)param_3 & 0xffff;
    SetWindowLongA(*(HWND *)(param_1 + 0x38),-0x10,uVar6);
    FUN_004adc20(param_1,uVar6);
    if ((short)param_4 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
    }
    break;
  case 0x623:
    return *(HWND *)(param_1 + 8);
  case 0x624:
    if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
      RemovePropA(*(HWND *)(param_1 + 8),s_SpinMeRound_005b7798);
      RemovePropA(*(HWND *)(param_1 + 8),s_SpinMeLo_005b77a4);
      SetWindowLongA(*(HWND *)(param_1 + 8),-4,*(LONG *)(param_1 + 0xc));
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    *(HWND *)(param_1 + 8) = param_3;
    if (param_3 != (HWND)0x0) {
      LVar3 = SetWindowLongA(param_3,-4,0x4adf70);
      *(LONG *)(param_1 + 0xc) = LVar3;
      if (LVar3 == 0) {
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        return (HWND)0x0;
      }
      SetPropA(*(HWND *)(param_1 + 8),s_SpinMeRound_005b7798,param_1);
      SetPropA(*(HWND *)(param_1 + 8),s_SpinMeLo_005b77a4,*(HANDLE *)(param_1 + 0xc));
      SendMessageA(*(HWND *)(param_1 + 8),0xc5,(uint)param_4 & 0xffff,0);
      uVar6 = GetWindowLongA(*(HWND *)(param_1 + 0x38),-0x10);
      uVar6 = uVar6 & 0xfffeffff | 0x4000;
      SetWindowLongA(*(HWND *)(param_1 + 0x38),-0x10,uVar6);
      FUN_004adc20(param_1,uVar6);
      GetWindowRect(*(HWND *)(param_1 + 8),&local_14);
      local_14.left = local_14.right;
      DVar4 = GetVersion();
      if ((byte)DVar4 < 4) {
        local_14.left = local_14.left + 1;
      }
      lpPoints = &local_14;
      cPoints = 2;
      local_14.right = local_14.left + 0xd;
      pHVar5 = GetParent(*(HWND *)(param_1 + 0x38));
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)lpPoints,cPoints);
      SetWindowPos(*(HWND *)(param_1 + 0x38),(HWND)0x0,local_14.left,local_14.top,
                   local_14.right - local_14.left,local_14.bottom - local_14.top,0x14);
    }
    return *(HWND *)(param_1 + 8);
  }
  uVar6 = *(uint *)(param_1 + 0x44);
  if (((int)uVar6 < 0) && (iVar9 = *(int *)(param_1 + 0x48), -1 < iVar9)) {
    uVar6 = ~-(uint)(iVar9 != 0) & uVar6;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x48);
    uVar6 = (int)(iVar9 - uVar6) / 2 + uVar6;
  }
  *(uint *)(param_1 + 0x50) = uVar6;
  if ((*param_1 & 0x80) != 0) {
    iVar7 = FUN_004ac330(iVar9);
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x44);
    iVar8 = FUN_004ac330(iVar2);
    iVar9 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x58) = iVar7 - iVar8;
    *(int *)(param_1 + 0x54) =
         iVar9 - (int)(((longlong)iVar7 * (longlong)(iVar1 - iVar2)) / (longlong)(iVar7 - iVar8));
  }
  *(uint *)(param_1 + 0x78) = (uint)(iVar9 - *(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0xa8));
  FUN_004ad090(param_1,*(undefined4 *)(param_1 + 0x4c),param_3);
  return (HWND)0x0;
}


