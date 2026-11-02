/* Module: sfppack3.dll
   Function: FUN_5cc50fe0
   Address: 5cc50fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc50fe0(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  HGLOBAL pvVar4;
  int iVar5;
  uint uVar6;
  HDC hDC;
  uint uVar7;
  int local_10;
  int local_c;
  int local_8 [2];
  
  puVar2 = (undefined4 *)GetWindowLongA(param_1,0);
  pHVar3 = GetCapture();
  if (pHVar3 == param_1) {
    if ((LPCVOID)puVar2[10] != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle((LPCVOID)puVar2[10]);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle((LPCVOID)puVar2[10]);
      GlobalFree(pvVar4);
      puVar2[10] = 0;
      puVar2[0xb] = 0;
    }
    if (puVar2[0x18] != 0) {
      MessageBeep(0);
      return;
    }
    if (puVar2[7] == 0) {
      if (puVar2[0x13] == 0) {
        if ((HWND)puVar2[0x1b] != (HWND)0x0) {
          if ((int)puVar2[0xd] < 1) {
            uVar6 = (uint)*(ushort *)(puVar2 + 9);
            uVar7 = uVar6;
          }
          else {
            uVar6 = (uint)*(ushort *)(puVar2 + 0xd);
            uVar7 = (uint)*(ushort *)(puVar2 + 0xe);
          }
          PostMessageA((HWND)puVar2[0x1b],0x612,0,uVar7 << 0x10 | uVar6);
        }
      }
      else {
        iVar5 = puVar2[0xf];
        if (param_2 < iVar5) {
          puVar2[0xf] = param_2;
          param_2 = iVar5;
        }
        iVar5 = puVar2[0x10];
        if (param_3 < iVar5) {
          puVar2[0x10] = param_3;
          param_3 = iVar5;
        }
        uVar7 = 0;
        puVar2[0xd] = 0xffffffff;
        puVar2[0xe] = 0xffffffff;
        if (puVar2[0x28] != 0) {
          do {
            FUN_5cc4fe30((int)puVar2,(int *)(puVar2[0x2d] + uVar7 * 8),&local_10);
            if ((((puVar2[0xd] == -1) && ((int)puVar2[0xf] <= local_10)) &&
                ((int)puVar2[0x10] <= local_c)) && ((local_c <= param_3 && (local_10 <= param_2))))
            {
              puVar2[0xd] = uVar7;
            }
            if (puVar2[0xd] != -1) {
              if (param_2 < local_10) break;
              if (((int)puVar2[0x10] <= local_c) && (local_c <= param_3)) {
                puVar2[0xe] = uVar7;
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)puVar2[0x28]);
        }
        if ((puVar2[0xd] != -1) && (puVar2[0xe] == -1)) {
          puVar2[0xe] = puVar2[0x28] + -1;
        }
        InvalidateRect(param_1,(RECT *)0x0,1);
        puVar2[0x13] = 0;
      }
      ReleaseCapture();
      if (puVar2[0x16] != 0) {
        hDC = GetDC(param_1);
        if (hDC != (HDC)0x0) {
          iVar5 = puVar2[0xe];
          iVar1 = puVar2[0xd];
          FUN_5cc500a0(puVar2,hDC,iVar1,iVar5);
          puVar2[0xe] = 0xffffffff;
          puVar2[0xd] = 0xffffffff;
          FUN_5cc500a0(puVar2,hDC,iVar1,iVar5);
          ReleaseDC(param_1,hDC);
          puVar2[0x16] = 0;
          puVar2[9] = 0xffffffff;
          puVar2[0x14] = 0;
          return;
        }
        puVar2[0xe] = 0xffffffff;
        puVar2[0xd] = 0xffffffff;
        InvalidateRect(param_1,(RECT *)0x0,0);
        puVar2[0x16] = 0;
      }
      puVar2[9] = 0xffffffff;
      puVar2[0x14] = 0;
    }
    else {
      local_10 = param_2;
      local_c = param_3;
      FUN_5cc4fef0((int)puVar2,&local_10,local_8);
      puVar2[8] = local_8[0];
      iVar5 = puVar2[0x24];
      if (((int)puVar2[0x24] <= local_8[0]) &&
         (iVar5 = puVar2[0x25], local_8[0] <= (int)puVar2[0x25])) {
        iVar5 = local_8[0];
      }
      puVar2[8] = iVar5;
      FUN_5cc51260((int)puVar2);
      puVar2[7] = 0;
      InvalidateRect(param_1,(RECT *)0x0,1);
      ReleaseCapture();
      if ((HWND)puVar2[0x1d] != (HWND)0x0) {
        PostMessageA((HWND)puVar2[0x1d],0x623,0,puVar2[8]);
        return;
      }
    }
  }
  return;
}


