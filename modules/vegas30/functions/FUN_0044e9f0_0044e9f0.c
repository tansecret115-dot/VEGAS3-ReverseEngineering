/* Module: vegas30.exe
   Function: FUN_0044e9f0
   Address: 0044e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e9f0(HDC param_1,LPRECT param_2,LPRECT param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  BITMAPINFO *lpbmi;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x1;
  int iVar4;
  BYTE *pBVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  int cx;
  int iVar11;
  
  iVar2 = param_2->top;
  iVar6 = param_2->bottom - iVar2;
  if (0 < iVar6) {
    iVar7 = param_2->left;
    iVar9 = param_2->right - iVar7;
    if (0 < iVar9) {
      if ((param_4 == (undefined4 *)0x0) ||
         (lpbmi = (BITMAPINFO *)*param_4, lpbmi == (BITMAPINFO *)0x0)) {
        if ((*(byte *)(param_4 + 2) & 0x20) == 0) {
          DrawEdge(param_1,param_2,0,0x800);
          return;
        }
        pvVar3 = (HGDIOBJ)param_4[3];
      }
      else {
        if (param_3 == (LPRECT)0x0) {
          param_3 = param_2;
        }
        if ((param_4[2] & 1) == 0) {
          iVar4 = (lpbmi->bmiHeader).biWidth;
          param_4 = (undefined4 *)iVar9;
          if (iVar4 <= iVar9) {
            param_4 = (undefined4 *)iVar4;
          }
          iVar4 = (lpbmi->bmiHeader).biHeight;
          iVar10 = iVar6;
          if (iVar4 <= iVar6) {
            iVar10 = iVar4;
          }
          if (lpbmi == (BITMAPINFO *)0x0) {
            pBVar5 = (BYTE *)0x0;
          }
          else {
            DVar8 = (lpbmi->bmiHeader).biClrUsed;
            if ((DVar8 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
              DVar8 = 1 << ((byte)uVar1 & 0x1f);
            }
            pBVar5 = &lpbmi->bmiColors[DVar8 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
          }
          StretchDIBits(param_1,iVar7,iVar2,iVar9,iVar6,param_3->left,
                        (iVar4 - param_3->top) - iVar10,(int)param_4,iVar10,pBVar5,lpbmi,0,0xcc0020)
          ;
          return;
        }
        if ((HGDIOBJ)param_4[3] == (HGDIOBJ)0x0) {
          if (lpbmi == (BITMAPINFO *)0x0) {
            pBVar5 = (BYTE *)0x0;
          }
          else {
            DVar8 = (lpbmi->bmiHeader).biClrUsed;
            if ((DVar8 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
              DVar8 = 1 << ((byte)uVar1 & 0x1f);
            }
            pBVar5 = &lpbmi->bmiColors[DVar8 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
          }
          FUN_0044e840(param_1,iVar7,iVar2,iVar9,iVar6,param_3->left,param_3->top,pBVar5,lpbmi,0,
                       0xcc0020);
          return;
        }
        if ((param_4[2] & 0x20) == 0) {
          iVar2 = (lpbmi->bmiHeader).biWidth;
          iVar6 = (lpbmi->bmiHeader).biHeight;
          hdc = CreateCompatibleDC(param_1);
          pvVar3 = SelectObject(hdc,(HGDIOBJ)param_4[3]);
          iVar7 = param_3->top % iVar6;
          if (iVar7 < 0) {
            iVar7 = iVar7 + iVar6;
          }
          iVar9 = param_3->left % iVar2;
          if (iVar9 < 0) {
            iVar9 = iVar9 + iVar2;
          }
          param_4 = (undefined4 *)param_2->top;
          iVar4 = param_2->bottom - (int)param_4;
          if (0 < iVar4) {
            iVar10 = iVar6 - iVar7;
            param_3 = (LPRECT)iVar7;
            do {
              if (iVar4 <= iVar10) {
                iVar10 = iVar4;
              }
              iVar7 = param_2->left;
              iVar11 = param_2->right - iVar7;
              cx = iVar2 - iVar9;
              x1 = iVar9;
              while (0 < iVar11) {
                if (iVar11 <= cx) {
                  cx = iVar11;
                }
                BitBlt(param_1,iVar7,(int)param_4,cx,iVar10,hdc,x1,(int)param_3,0xcc0020);
                iVar7 = iVar7 + cx;
                x1 = 0;
                iVar11 = iVar11 - cx;
                cx = iVar2;
              }
              iVar4 = iVar4 - iVar10;
              param_4 = (undefined4 *)((int)param_4 + iVar10);
              param_3 = (LPRECT)0x0;
              iVar10 = iVar6;
            } while (0 < iVar4);
          }
          SelectObject(hdc,pvVar3);
          DeleteDC(hdc);
          return;
        }
        UnrealizeObject((HGDIOBJ)param_4[3]);
        SetBrushOrgEx(param_1,param_2->left - param_3->left,param_2->top - param_3->top,(LPPOINT)0x0
                     );
        pvVar3 = (HGDIOBJ)param_4[3];
      }
      pvVar3 = SelectObject(param_1,pvVar3);
      PatBlt(param_1,param_2->left,param_2->top,param_2->right - param_2->left,
             param_2->bottom - param_2->top,0xf00021);
      SelectObject(param_1,pvVar3);
      return;
    }
  }
  return;
}


