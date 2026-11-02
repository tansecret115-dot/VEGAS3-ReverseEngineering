/* Module: sftrkfx1.dll
   Function: FUN_5cbcc280
   Address: 5cbcc280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbcc280(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  POINT pt;
  POINT pt_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  UINT_PTR UVar5;
  HWND pHVar6;
  uint *puVar7;
  BOOL BVar8;
  LONG LVar9;
  uint uVar10;
  RECT *lprc;
  tagPOINT tStack_8;
  
  puVar1 = param_1;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar6 = GetCapture();
      if (pHVar6 != (HWND)param_1[10]) {
        return;
      }
      ReleaseCapture();
      param_1[3] = param_1[3] & 0xfffdffff;
      if (param_1[0x30] == 5) {
        (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],4,param_1[0x2e]);
      }
      if (param_1[0x2f] != 0) {
        KillTimer((HWND)param_1[10],0x2a);
        param_1[0x2f] = 0;
      }
      (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],8,0);
      ShowCaret((HWND)param_1[10]);
      param_1[0x30] = 0xffffffff;
      FUN_5cbcc1b0((int)param_1,-1,1);
      FUN_5cbcc040(param_1,param_1[7],1);
      return;
    }
    if (param_4 != 9) {
      return;
    }
    if ((param_1[3] & 0x40) != 0) {
      return;
    }
    uVar2 = FUN_5cbcc0c0((int)param_1,param_2,param_3);
    if (uVar2 == 0xffffffff) {
      return;
    }
    param_1[0x2d] = param_1[7];
    if (uVar2 == 5) {
      iVar3 = FUN_5cbc9fa0(param_1,param_1[7]);
      param_1[0x29] = iVar3 - param_3;
      param_1[0x28] = iVar3 - param_2;
      param_1[0x2a] = param_2;
      param_1[0x2b] = param_3;
      uVar4 = GetMessageTime();
      param_1[0x2c] = uVar4;
    }
    HideCaret((HWND)param_1[10]);
    SetCapture((HWND)param_1[10]);
    param_1[0x30] = uVar2;
    param_1[0x2e] = 0xffffffff;
    (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],9,0);
    FUN_5cbcc1b0((int)param_1,uVar2,1);
    if (uVar2 != 5) {
      UVar5 = SetTimer((HWND)param_1[10],0x2a,0xfa,(TIMERPROC)0x0);
      param_1[0x2f] = UVar5;
    }
  }
  if (param_1[0x30] == 5) {
    lprc = (RECT *)&DAT_5cc10b68;
    param_4 = DAT_5cc10b60;
    if ((param_1[3] & 0x20000) != 0) {
      lprc = (RECT *)&DAT_5cc10b78;
      param_4 = DAT_5cc10b64;
    }
    puVar7 = (uint *)((int)(param_1[3] << 0xf) >> 0x1f);
    tStack_8.x = param_2 - param_1[0x2a];
    tStack_8.y = param_3 - param_1[0x2b];
    if ((((param_1[3] & 0x8000) == 0) &&
        (pt.y = tStack_8.y, pt.x = tStack_8.x, BVar8 = PtInRect(lprc,pt), BVar8 != 0)) &&
       (LVar9 = GetMessageTime(), param_4 < LVar9 - param_1[0x2c])) {
      param_1 = (uint *)0x1;
      puVar7 = param_1;
    }
    param_1 = puVar7;
    tStack_8.x = param_2;
    tStack_8.y = param_3;
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar8 = PtInRect((RECT *)(puVar1 + 0x1a),pt_00);
    if (BVar8 == 0) {
      param_1 = (uint *)((int)(puVar1[3] << 0xf) >> 0x1f);
    }
    uVar2 = puVar1[3];
    uVar4 = puVar1[7];
    puVar1[3] = ((uint)param_1 & 1) << 0x11 | uVar2 & 0xfffdffff;
    if ((uVar2 & 8) == 0) {
      if (puVar1[0x2a] != param_2) {
        if (param_1 == (uint *)0x0) {
          uVar4 = FUN_5cbca1b0(puVar1,puVar1[0x28] + param_2);
        }
        else {
          iVar3 = param_2 - puVar1[0x2a];
          if (iVar3 < 0) {
            iVar3 = iVar3 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          uVar2 = puVar1[4];
          uVar10 = iVar3 / 2 + uVar4;
          if (((int)uVar2 <= (int)uVar10) && (uVar2 = puVar1[5], (int)uVar10 <= (int)puVar1[5])) {
            uVar2 = uVar10;
          }
          if (uVar2 != uVar4) {
            iVar3 = FUN_5cbc9fa0(puVar1,uVar2);
            uVar10 = puVar1[0x1b];
            uVar4 = uVar2;
            tStack_8.x = iVar3 - puVar1[0x28];
            if ((tStack_8.y < (int)uVar10) || (uVar10 = puVar1[0x1d], (int)uVar10 < tStack_8.y)) {
              tStack_8.y = uVar10;
            }
          }
        }
      }
    }
    else if (puVar1[0x2b] != param_3) {
      if (param_1 == (uint *)0x0) {
        uVar4 = FUN_5cbca1b0(puVar1,puVar1[0x29] + param_3);
      }
      else {
        iVar3 = param_3 - puVar1[0x2b];
        if (iVar3 < 0) {
          iVar3 = iVar3 + -1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        uVar10 = uVar4 - iVar3 / 2;
        uVar2 = puVar1[4];
        if (((int)uVar2 <= (int)uVar10) && (uVar2 = puVar1[5], (int)uVar10 <= (int)puVar1[5])) {
          uVar2 = uVar10;
        }
        if (uVar2 != uVar4) {
          iVar3 = FUN_5cbc9fa0(puVar1,uVar2);
          uVar10 = ((RECT *)(puVar1 + 0x1a))->left;
          tStack_8.y = iVar3 - puVar1[0x29];
          uVar4 = uVar2;
          if ((tStack_8.x < (int)uVar10) || (uVar10 = puVar1[0x1c], (int)uVar10 < tStack_8.x)) {
            tStack_8.x = uVar10;
          }
        }
      }
    }
    puVar1[0x2a] = tStack_8.x;
    puVar1[0x2b] = tStack_8.y;
    uVar2 = GetMessageTime();
    puVar1[0x2c] = uVar2;
    if ((param_1 != (uint *)0x0) && ((tStack_8.x != param_2 || (tStack_8.y != param_3)))) {
      puVar1[3] = puVar1[3] | 0x40000;
      ClientToScreen((HWND)puVar1[10],&tStack_8);
      SetCursorPos(tStack_8.x,tStack_8.y);
      puVar1[3] = puVar1[3] & 0xfffbffff;
    }
    if (uVar4 != puVar1[0x2e]) {
      puVar1[0x2e] = uVar4;
      FUN_5cbcc040(puVar1,uVar4,1);
      (*(code *)puVar1[0x32])(puVar1,puVar1[0xb],puVar1[0x31],5,uVar4);
      return;
    }
  }
  else {
    uVar2 = FUN_5cbcc0c0((int)param_1,param_2,param_3);
    FUN_5cbcc1b0((int)param_1,uVar2,0);
    if (param_1[0x30] == uVar2) {
      (*(code *)param_1[0x32])(param_1,param_1[0xb],param_1[0x31],param_1[0x30],0);
    }
  }
  return;
}


