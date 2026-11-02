/* Module: vidcap30.exe
   Function: FUN_004302d0
   Address: 004302d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004302d0(int *param_1,uint param_2,byte param_3,undefined4 param_4)

{
  HWND pHVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  tagPOINT local_8;
  
  local_8.x = (LONG)(short)param_4;
  local_8.y = (LONG)(short)((uint)param_4 >> 0x10);
  if ((param_2 == 0x201) || (param_2 == 0x204)) {
    if (((*(byte *)(param_1 + 1) & 0x80) != 0) && (param_1[0x18] == 0)) {
      FUN_00430780(param_1,local_8.x,local_8.y);
    }
    if ((param_1[1] & 4U) != 0) {
      param_1[1] = param_1[1] & 0xffffffdf;
    }
    SetFocus((HWND)*param_1);
  }
  if (0x203 < param_2) {
    if (param_2 == 0x204) {
      if (param_1[0x18] != 0) {
        return 0;
      }
      if ((param_3 & 1) != 0) {
        return 0;
      }
      SetCapture((HWND)*param_1);
      return 0;
    }
    if (param_2 == 0x205) {
      if ((param_3 & 1) != 0) {
        return 0;
      }
      pHVar2 = GetCapture();
      if (pHVar2 != (HWND)*param_1) {
        return 0;
      }
      ReleaseCapture();
      ClientToScreen((HWND)*param_1,&local_8);
      SendMessageA((HWND)*param_1,0x7b,(WPARAM)*param_1,local_8.y << 0x10 | local_8.x & 0xffffU);
      return 0;
    }
    if (param_2 != 0x2a3) {
      return 0;
    }
    pHVar2 = (HWND)*param_1;
    pHVar1 = GetCapture();
    if (pHVar1 != pHVar2) {
      FUN_0042fb00(param_1,0,0);
      param_1[0xf] = 0;
      return 0;
    }
    if (param_1[0x18] != 3) {
      return 0;
    }
    if (param_1[0x1d] == 0) {
      return 0;
    }
    param_1[0x1d] = 0;
    InvalidateRect(pHVar2,(RECT *)(param_1 + 0x19),0);
    return 0;
  }
  if (param_2 != 0x203) {
    if (0x201 < param_2) {
      if (param_2 != 0x202) {
        return 0;
      }
      iVar4 = param_1[0x18];
      param_1[0x18] = 0;
      pHVar2 = GetCapture();
      if (pHVar2 == (HWND)*param_1) {
        ReleaseCapture();
      }
      if (iVar4 == 1) {
        return 0;
      }
      if (iVar4 != 3) {
        return 0;
      }
      if ((code *)param_1[0x29] != (code *)0x0) {
        (*(code *)param_1[0x29])(FUN_00430260);
      }
      uVar3 = param_1[0x1d];
      if (uVar3 == 0) {
        param_1[0x10] = 0;
        return 0;
      }
      param_1[0x1d] = 0;
      InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 0x19),0);
      if (uVar3 < 0x80) {
        return 0;
      }
      if (0xff < uVar3) {
        return 0;
      }
      uVar3 = uVar3 & 0x7f;
      if ((uint)param_1[0x2c] <= uVar3) {
        return 0;
      }
      if ((*(byte *)(uVar3 * 0x20 + 0xca + (int)param_1) & 4) == 0) {
        return 0;
      }
      SendMessageA((HWND)*param_1,0x111,*(ushort *)(param_1 + uVar3 * 8 + 0x31) | 0x30000,0);
      return 0;
    }
    if (param_2 != 0x201) {
      if (param_2 == 0x1f) {
        param_1[0x18] = 0;
        param_1[0x1d] = 0;
        InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 9),0);
        if ((code *)param_1[0x29] != (code *)0x0) {
          (*(code *)param_1[0x29])(FUN_00430260);
        }
        pHVar2 = GetCapture();
        if (pHVar2 == (HWND)*param_1) {
          ReleaseCapture();
        }
        UpdateWindow((HWND)*param_1);
        return 0;
      }
      if (param_2 != 0x200) {
        return 0;
      }
      pHVar2 = (HWND)*param_1;
      pHVar1 = GetCapture();
      if (pHVar1 != pHVar2) {
        piVar6 = (int *)0x0;
        if ((((param_1[9] <= local_8.x) && (local_8.x < param_1[0xb])) && (param_1[10] <= local_8.y)
            ) && (local_8.y < param_1[0xc])) {
          uVar3 = param_1[0xf];
          uVar5 = 0;
          if ((0x7f < uVar3) && (uVar3 < 0x100)) {
            piVar6 = param_1 + 0x19;
            uVar5 = uVar3;
          }
          FUN_0042fb00(param_1,piVar6,uVar5);
          return 0;
        }
        if (param_1[0x10] == 0) {
          return 0;
        }
        FUN_0042fb00(param_1,0,0);
        return 0;
      }
      if (param_1[0x18] != 1) {
        if (param_1[0x18] != 3) {
          return 0;
        }
        iVar4 = 0;
        if ((((((RECT *)(param_1 + 0x19))->left <= local_8.x) && (local_8.x < param_1[0x1b])) &&
            (param_1[0x1a] <= local_8.y)) && (local_8.y < param_1[0x1c])) {
          iVar4 = param_1[0xf];
        }
        if (iVar4 == param_1[0x1d]) {
          return 0;
        }
        param_1[0x1d] = iVar4;
        InvalidateRect(pHVar2,(RECT *)(param_1 + 0x19),0);
        return 0;
      }
      if ((-param_1[6] <= local_8.x - param_1[2]) && (local_8.x - param_1[2] <= param_1[6])) {
        if ((-param_1[7] <= local_8.y - param_1[3]) && (local_8.y - param_1[3] <= param_1[7])) {
          return 0;
        }
      }
      param_1[0x18] = 4;
      return 0;
    }
  }
  if ((param_1[0x18] == 3) || (param_1[0x18] != 0)) {
    return 0;
  }
  param_1[2] = local_8.x;
  param_1[4] = local_8.x;
  param_1[3] = local_8.y;
  param_1[5] = local_8.y;
  uVar3 = param_1[0xf];
  param_1[1] = (uint)(param_2 == 0x203) << 3 | param_1[1] & 0xfffffff7U;
  if ((uVar3 < 0x80) || (0xff < uVar3)) {
    param_1[0x18] = 1;
  }
  else {
    param_1[0x1d] = uVar3;
    param_1[0x18] = 3;
    InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 0x19),0);
    uVar3 = param_1[0x1d] & 0x7f;
    if (((uVar3 < (uint)param_1[0x2c]) &&
        ((*(byte *)(uVar3 * 0x20 + 0xcb + (int)param_1) & 0x80) != 0)) &&
       ((*(byte *)((int)param_1 + uVar3 * 0x20 + 0xca) & 4) != 0)) {
      if ((code *)param_1[0x28] != (code *)0x0) {
        (*(code *)param_1[0x28])(0x7d,500,FUN_00430260,param_1);
      }
      SendMessageA((HWND)*param_1,0x111,*(ushort *)(param_1 + uVar3 * 8 + 0x31) | 0x20000,0);
      SetCapture((HWND)*param_1);
      return 0;
    }
  }
  SetCapture((HWND)*param_1);
  return 0;
}


