/* Module: vegas30.exe
   Function: FUN_004396c0
   Address: 004396c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004396c0(int param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HFONT pHVar4;
  HDC pHVar5;
  HDC pHVar6;
  HBITMAP pHVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int cx;
  bool bVar11;
  bool bVar12;
  
  iVar2 = param_1;
  iVar8 = 0x10;
  bVar11 = false;
  iVar3 = 0;
  bVar12 = true;
  pbVar9 = param_2;
  pbVar10 = (byte *)(param_1 + 0x90);
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    bVar11 = *pbVar9 < *pbVar10;
    bVar12 = *pbVar9 == *pbVar10;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar12);
  if (!bVar12) {
    iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
  }
  if (iVar3 != 0) {
    piVar1 = (int *)(param_1 + 0x80);
    param_1 = *(int *)(param_1 + 0x138);
    if (((*piVar1 == 0) && (((DAT_0064b110 == 0xb || (DAT_0064b110 == 0xc)) || (DAT_0064b110 == 0)))
        ) && (param_1 < 0xe)) {
      param_1 = 0xd;
    }
    if (param_1 <= *(int *)(iVar2 + 0x134)) {
      param_1 = *(int *)(iVar2 + 0x134);
    }
    FUN_00439600(iVar2,1);
    *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)param_2;
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_2 + 0xc);
    cx = *(int *)(param_2 + 8) - *(int *)param_2;
    iVar8 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
    iVar3 = FUN_00438b50(iVar2);
    if (iVar3 == 0) {
      iVar3 = param_1 + 1;
      *(uint *)(iVar2 + 0xa8) = (uint)(0x14 < cx / iVar3);
      if (cx < iVar8) {
        DAT_0063dc34 = (iVar8 + -8) / iVar3;
        param_1 = 0xfffffc7c;
        DAT_0063dc30 = cx;
        if (DAT_0063dc34 * 2 <= cx) {
          DAT_0063dc30 = DAT_0063dc34 * 2;
        }
        if (DAT_0063dc30 / 2 <= DAT_0063dc34) {
          DAT_0063dc34 = DAT_0063dc30 / 2;
        }
        *(int *)(iVar2 + 0xa0) = (cx - DAT_0063dc30) / 2 + *(int *)(iVar2 + 0x90);
        *(int *)(iVar2 + 0xa4) = (*(int *)(iVar2 + 0x94) - DAT_0063dc34 / 2) + iVar8;
      }
      else {
        param_1 = 0;
        DAT_0063dc34 = (cx + -8) / iVar3;
        DAT_0063dc30 = iVar8;
        if (DAT_0063dc34 * 2 <= iVar8) {
          DAT_0063dc30 = DAT_0063dc34 * 2;
        }
        if (DAT_0063dc30 / 2 <= DAT_0063dc34) {
          DAT_0063dc34 = DAT_0063dc30 / 2;
        }
        *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0x98) - (cx + -8);
        *(int *)(iVar2 + 0xa4) = (DAT_0063dc30 + iVar8) / 2 + *(int *)(iVar2 + 0x94);
      }
      _DAT_0063dc38 = param_1;
      _DAT_0063dc3c = param_1;
      _mbscpy(&DAT_0063dc4c,&DAT_00647ab4);
      pHVar4 = CreateFontIndirectA((LOGFONTA *)&DAT_0063dc30);
      *(HFONT *)(iVar2 + 0x8c) = pHVar4;
    }
    else {
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    if ((*(HWND *)(iVar2 + 8) != (HWND)0x0) && (DAT_006487c4 != 0)) {
      pHVar5 = GetDC(*(HWND *)(iVar2 + 8));
      pHVar6 = CreateCompatibleDC(pHVar5);
      *(HDC *)(iVar2 + 0x84) = pHVar6;
      pHVar7 = CreateCompatibleBitmap(pHVar5,cx,iVar8);
      *(HBITMAP *)(iVar2 + 0x88) = pHVar7;
      ReleaseDC(*(HWND *)(iVar2 + 8),pHVar5);
      pHVar5 = *(HDC *)(iVar2 + 0x84);
      if (pHVar5 != (HDC)0x0) {
        if (*(int *)(iVar2 + 0x88) != 0) {
          return;
        }
        if (pHVar5 != (HDC)0x0) {
          DeleteDC(pHVar5);
          *(undefined4 *)(iVar2 + 0x84) = 0;
        }
      }
      if (*(HGDIOBJ *)(iVar2 + 0x88) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(iVar2 + 0x88));
        *(undefined4 *)(iVar2 + 0x88) = 0;
      }
    }
  }
  return;
}


