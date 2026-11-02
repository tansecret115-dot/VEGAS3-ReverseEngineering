/* Module: sfpagepeel.dll
   Function: FUN_0041df00
   Address: 0041df00
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0041df00(uint *param_1,undefined4 param_2,HWND param_3,HWND param_4)

{
  uint uVar1;
  DWORD DVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_14;
  
  switch(param_2) {
  case 0x60a:
    return (HWND)param_1[0x13];
  case 0x60b:
    return (HWND)param_1[0x11];
  case 0x60c:
    return (HWND)param_1[0x12];
  case 0x60d:
    param_1[0x11] = (int)(short)param_4;
    param_1[0x12] = (int)(short)((uint)param_4 >> 0x10);
    break;
  case 0x60e:
    param_1[0x11] = (uint)param_4;
    break;
  case 0x60f:
    param_1[0x12] = (uint)param_4;
    break;
  case 0x610:
    FUN_0041cd90((int)param_1,(int)param_4);
    return (HWND)param_1[0x13];
  case 0x611:
    pHVar3 = (HWND)param_1[0x11];
    if (((int)param_1[0x11] <= (int)param_4) &&
       (pHVar3 = (HWND)param_1[0x12], (int)param_4 <= (int)param_1[0x12])) {
      pHVar3 = param_4;
    }
    param_1[0x14] = (uint)pHVar3;
    return pHVar3;
  case 0x61e:
    return (HWND)param_1[0x2a];
  case 0x61f:
    param_1[0x2a] = (uint)param_4;
    break;
  case 0x620:
    return (HWND)param_1[1];
  case 0x621:
    param_1[1] = (uint)param_3;
    return param_3;
  case 0x622:
    uVar4 = GetWindowLongA((HWND)param_1[0xe],-0x10);
    uVar4 = uVar4 & 0xffff0000 | (uint)param_3 & 0xffff;
    SetWindowLongA((HWND)param_1[0xe],-0x10,uVar4);
    FUN_0041d920(param_1,uVar4);
    if ((short)param_4 != 0) {
      InvalidateRect((HWND)param_1[0xe],(RECT *)0x0,1);
    }
    break;
  case 0x623:
    return (HWND)param_1[2];
  case 0x624:
    if ((HWND)param_1[2] != (HWND)0x0) {
      RemovePropA((HWND)param_1[2],s_SpinMeRound_0047ca70);
      RemovePropA((HWND)param_1[2],s_SpinMeLo_0047ca7c);
      SetWindowLongA((HWND)param_1[2],-4,param_1[3]);
      param_1[3] = 0;
    }
    param_1[2] = (uint)param_3;
    if (param_3 != (HWND)0x0) {
      uVar4 = SetWindowLongA(param_3,-4,0x41dc70);
      param_1[3] = uVar4;
      if (uVar4 == 0) {
        param_1[2] = 0;
        return (HWND)0x0;
      }
      SetPropA((HWND)param_1[2],s_SpinMeRound_0047ca70,param_1);
      SetPropA((HWND)param_1[2],s_SpinMeLo_0047ca7c,(HANDLE)param_1[3]);
      SendMessageA((HWND)param_1[2],0xc5,(uint)param_4 & 0xffff,0);
      uVar4 = GetWindowLongA((HWND)param_1[0xe],-0x10);
      uVar4 = uVar4 & 0xfffeffff | 0x4000;
      SetWindowLongA((HWND)param_1[0xe],-0x10,uVar4);
      FUN_0041d920(param_1,uVar4);
      GetWindowRect((HWND)param_1[2],&local_14);
      local_14.left = local_14.right;
      DVar2 = GetVersion();
      if ((byte)DVar2 < 4) {
        local_14.left = local_14.left + 1;
      }
      lpPoints = &local_14;
      cPoints = 2;
      local_14.right = local_14.left + 0xd;
      pHVar3 = GetParent((HWND)param_1[0xe]);
      MapWindowPoints((HWND)0x0,pHVar3,(LPPOINT)lpPoints,cPoints);
      SetWindowPos((HWND)param_1[0xe],(HWND)0x0,local_14.left,local_14.top,
                   local_14.right - local_14.left,local_14.bottom - local_14.top,0x14);
    }
    return (HWND)param_1[2];
  }
  uVar4 = param_1[0x11];
  if (((int)uVar4 < 0) && (uVar7 = param_1[0x12], -1 < (int)uVar7)) {
    uVar4 = ~-(uint)(uVar7 != 0) & uVar4;
  }
  else {
    uVar7 = param_1[0x12];
    uVar4 = (int)(uVar7 - uVar4) / 2 + uVar4;
  }
  param_1[0x14] = uVar4;
  if ((*param_1 & 0x80) != 0) {
    iVar5 = FUN_0041c030(uVar7);
    uVar4 = param_1[0x12];
    uVar1 = param_1[0x11];
    iVar6 = FUN_0041c030(uVar1);
    uVar7 = param_1[0x12];
    param_1[0x16] = iVar5 - iVar6;
    param_1[0x15] =
         uVar7 - (int)(((longlong)iVar5 * (longlong)(int)(uVar4 - uVar1)) /
                      (longlong)(iVar5 - iVar6));
  }
  param_1[0x1e] = (uint)((int)(uVar7 - param_1[0x11]) <= (int)param_1[0x2a]);
  FUN_0041cd90((int)param_1,param_1[0x13]);
  return (HWND)0x0;
}


