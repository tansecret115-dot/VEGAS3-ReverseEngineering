/* Module: sfppack2.dll
   Function: FUN_5cd0ad90
   Address: 5cd0ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0ad90(HWND param_1,int param_2,LONG param_3,LONG param_4)

{
  int iVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  HDC pHVar4;
  POINT local_18;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  puVar2 = (undefined4 *)GetWindowLongA(param_1,0);
  if (puVar2[0x18] != 0) {
    MessageBeep(0);
    return;
  }
  pHVar3 = GetCapture();
  if (pHVar3 == param_1) {
    if ((puVar2[0x13] != 0) && (-1 < (int)puVar2[0x11])) {
      pHVar4 = GetDC(param_1);
      local_10 = puVar2[0xf];
      local_c = puVar2[0x10];
      iVar1 = puVar2[0x11];
      if (iVar1 < 0) {
        local_8 = 0;
      }
      else {
        local_8 = (puVar2[0x20] - puVar2[0x1e]) + -1;
        if (iVar1 <= local_8) {
          local_8 = iVar1;
        }
      }
      iVar1 = puVar2[0x12];
      if (iVar1 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = (puVar2[0x21] - puVar2[0x1f]) + -1;
        if (iVar1 <= local_4) {
          local_4 = iVar1;
        }
      }
      FUN_5cd0aef0(pHVar4,&local_10);
      ReleaseDC(param_1,pHVar4);
    }
    puVar2[0x14] = 0;
    ReleaseCapture();
    return;
  }
  local_18.x = param_3;
  local_18.y = param_4;
  pHVar4 = (HDC)FUN_5cd09a60((int)puVar2,&local_18);
  if (pHVar4 == (HDC)0xffffffff) {
    MessageBeep(0);
    return;
  }
  if (param_2 == 0) {
    FUN_5cd0a470(puVar2,pHVar4);
    if ((HWND)puVar2[0x1b] != (HWND)0x0) {
      PostMessageA((HWND)puVar2[0x1b],0x612,0,(int)pHVar4 << 0x10 | (uint)*(ushort *)(puVar2 + 0xd))
      ;
    }
  }
  return;
}


