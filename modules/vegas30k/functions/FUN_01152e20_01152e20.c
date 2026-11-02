/* Module: vegas30k.dll
   Function: FUN_01152e20
   Address: 01152e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01152e20(HDC param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int cy;
  DWORD DVar3;
  int iVar4;
  HGDIOBJ pvVar5;
  HGDIOBJ pvVar6;
  int x;
  int iVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int y;
  undefined4 uVar13;
  COLORREF CVar14;
  HDC hdc;
  COLORREF CVar15;
  int local_2c;
  COLORREF local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = *(int *)(param_3 + 0x1bc);
  if (param_3 != -0xdc) {
    local_8 = *(undefined4 *)(param_3 + 0xec);
    local_4 = *(int *)(param_3 + 0x74) + 1;
    local_10 = 0;
    local_c = 0;
    FUN_01151f60(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af80c,DAT_012af80c);
    SetTextAlign(*(HDC *)(param_3 + 0xe0),0xe);
    if (param_4 == 0) {
      hdc = *(HDC *)(param_3 + 0xe0);
      DVar3 = DAT_012af818;
    }
    else {
      DVar3 = GetSysColor(0x11);
      hdc = *(HDC *)(param_3 + 0xe0);
    }
    SetTextColor(hdc,DVar3);
    cy = *(int *)(param_3 + 0x74);
    iVar11 = *(int *)(param_3 + 0x70);
    iVar7 = 0;
    iVar4 = **(int **)(param_3 + 0x44);
    if (0 < iVar4) {
      piVar9 = (int *)(*(int **)(param_3 + 0x44))[2];
      do {
        if ((*(int *)(*piVar9 + 8) == 0xffff) && (*(int *)(*piVar9 + 0xc) == 0xffff)) {
          if ((*(uint *)(param_3 + 0x164) & 0x300) != 0) {
            uVar13 = *(undefined4 *)(param_3 + 0xe0);
            CVar14 = DAT_012af804;
            CVar15 = DAT_012af800;
            goto LAB_01152ef5;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar7 < iVar4);
    }
    uVar13 = *(undefined4 *)(param_3 + 0xe0);
    CVar14 = DAT_012af808;
    CVar15 = DAT_012af804;
LAB_01152ef5:
    local_8 = iVar11;
    FUN_01151f60(uVar13,&local_10,CVar14,CVar15);
    FUN_01151e40(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af800);
    param_4 = 0;
    if (*(int *)(param_3 + 0x60) != 0) {
      local_2c = 0;
      iVar4 = iVar11;
      do {
        iVar11 = iVar4;
        if ((param_4 < *(uint *)(param_3 + 100)) || (*(uint *)(param_3 + 0xb8) <= param_4)) {
          if (*(short *)(local_2c + 2 + *(int *)(param_3 + 0x1c0)) != 0) {
            iVar11 = iVar4 + *(short *)(local_2c + 2 + *(int *)(param_3 + 0x1c0));
            local_10 = iVar4;
            if (iVar11 < *param_2) goto LAB_011531dd;
            local_c = 1;
            local_8 = iVar11;
            local_4 = cy;
            FUN_01151e70(*(undefined4 *)(param_3 + 0xe0),iVar4,1,1,cy + -1,DAT_012af80c);
            local_10 = local_10 + 1;
            iVar4 = FUN_01152da0(param_4,param_3);
            if ((iVar4 == 0) || ((*(uint *)(param_3 + 0x164) & 0x300) == 0)) {
              FUN_01151f60(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af808,DAT_012af804);
            }
            else {
              FUN_01151f60(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af804,DAT_012af800);
              local_4 = local_4 + 1;
            }
            SetBkColor(*(HDC *)(param_3 + 0xe0),DAT_012af800);
            bVar1 = *(byte *)(local_2c + 4 + *(int *)(param_3 + 0x1c0));
            uVar8 = (param_4 != *(uint *)(param_3 + 0x54)) - 1 & 0xd;
            if ((bVar1 & 8) != 0) {
              DVar3 = GetSysColor(0x11);
              local_20 = SetTextColor(*(HDC *)(param_3 + 0xe0),DVar3);
            }
            iVar4 = FUN_011532b0(*(undefined4 *)(param_3 + 0xe0),(local_10 + local_8) / 2,&local_10,
                                 (uint)*(ushort *)(local_2c + 6 + *(int *)(param_3 + 0x1c0)) + iVar2
                                 ,uVar8);
            if ((bVar1 & 8) != 0) {
              SetTextColor(*(HDC *)(param_3 + 0xe0),local_20);
            }
            if (((param_4 == *(uint *)(param_3 + 0x54)) && (-2 < (int)((local_8 - iVar4) - uVar8)))
               && (10 < local_4 - local_c)) {
              iVar7 = iVar4 + 4;
              iVar12 = (local_4 + local_c) / 2;
              iVar4 = iVar4 + 0xb;
              y = iVar12 + -3;
              pvVar5 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x10,0);
              pvVar5 = SelectObject(*(HDC *)(param_3 + 0xe0),pvVar5);
              if (*(int *)(param_3 + 0x58) == 0) {
                x = (iVar7 + iVar4) / 2;
                MoveToEx(*(HDC *)(param_3 + 0xe0),x,y,(LPPOINT)0x0);
                pcVar10 = LineTo_exref;
                LineTo(*(HDC *)(param_3 + 0xe0),iVar7,iVar12 + 3);
                pvVar6 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x14,0);
                SelectObject(*(HDC *)(param_3 + 0xe0),pvVar6);
                LineTo(*(HDC *)(param_3 + 0xe0),iVar4,iVar12 + 3);
              }
              else {
                MoveToEx(*(HDC *)(param_3 + 0xe0),iVar4,y,(LPPOINT)0x0);
                LineTo(*(HDC *)(param_3 + 0xe0),iVar7,y);
                pcVar10 = LineTo_exref;
                LineTo(*(HDC *)(param_3 + 0xe0),(iVar7 + iVar4) / 2,iVar12 + 3);
                pvVar6 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x14,0);
                SelectObject(*(HDC *)(param_3 + 0xe0),pvVar6);
                x = iVar4;
              }
              (*pcVar10)(*(undefined4 *)(param_3 + 0xe0),x,y);
              SelectObject(*(HDC *)(param_3 + 0xe0),pvVar5);
            }
          }
          if (param_2[2] <= iVar11) break;
        }
LAB_011531dd:
        param_4 = param_4 + 1;
        local_2c = local_2c + 0x10;
        iVar4 = iVar11;
      } while (param_4 < *(uint *)(param_3 + 0x60));
    }
    if (iVar11 < param_2[2]) {
      local_8 = *(int *)(param_3 + 0xec) + 1;
      local_c = 1;
      local_10 = iVar11;
      local_4 = cy;
      FUN_01151e70(*(undefined4 *)(param_3 + 0xe0),iVar11,1,1,cy + -1,DAT_012af80c);
      local_10 = local_10 + 1;
      if (local_10 < local_8) {
        FUN_01151f60(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af808,DAT_012af804);
        FUN_01151e40(*(undefined4 *)(param_3 + 0xe0),&local_10,DAT_012af800);
      }
    }
    iVar2 = *param_2;
    BitBlt(param_1,iVar2,0,param_2[2] - iVar2,cy,*(HDC *)(param_3 + 0xe0),iVar2,1,0xcc0020);
  }
  return;
}


