/* Module: sftrkfx1.dll
   Function: FUN_5cbb1290
   Address: 5cbb1290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb1290(HDC param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  HBITMAP h;
  HGDIOBJ pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  HDC hdc;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int local_48;
  int local_34;
  int local_30;
  RECT local_10;
  
  iVar18 = param_2[2] - *param_2;
  if ((iVar18 != 0) && (param_2[3] != param_2[1])) {
    uVar19 = param_3 & 0xff;
    iVar4 = (int)(((param_4 & 0xff) - uVar19) * 0x400) / iVar18;
    uVar17 = param_3 >> 8 & 0xff;
    uVar14 = param_3 >> 0x10 & 0xff;
    iVar5 = (int)(((param_4 >> 8 & 0xff) - uVar17) * 0x400) / iVar18;
    iVar6 = (int)(((param_4 >> 0x10 & 0xff) - uVar14) * 0x400) / iVar18;
    puVar7 = FUN_5cbdf370((int *)0x13bc90);
    h = CreateCompatibleBitmap(param_1,iVar18,8);
    pvVar8 = SelectObject(param_1,h);
    local_30 = 0;
    do {
      if (-1 < iVar18) {
        iVar9 = iVar4 * 10;
        iVar10 = iVar5 * 10;
        iVar11 = iVar6 * 10;
        param_3 = uVar19 << 10;
        param_4 = uVar17 << 10;
        local_48 = uVar14 << 10;
        local_34 = iVar18;
        do {
          uVar12 = *puVar7;
          uVar15 = puVar7[1];
          uVar1 = puVar7[uVar15 + 0x41];
          uVar2 = puVar7[uVar12 + 0x41];
          puVar7[uVar12 + 0x41] = uVar2 ^ uVar1;
          *puVar7 = (uint)*(byte *)((int)puVar7 + uVar12 + 8);
          uVar15 = (uint)*(byte *)((int)puVar7 + uVar15 + 8);
          uVar12 = (uVar2 ^ uVar1) & 0x800003ff;
          puVar7[1] = uVar15;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
          }
          uVar1 = *puVar7;
          uVar2 = puVar7[uVar15 + 0x41];
          uVar3 = puVar7[uVar1 + 0x41];
          puVar7[uVar1 + 0x41] = uVar3 ^ uVar2;
          iVar13 = uVar12 * ((int)(iVar9 + (iVar9 >> 0x1f & 0x3ffU)) >> 10) + param_3;
          *puVar7 = (uint)*(byte *)((int)puVar7 + uVar1 + 8);
          uVar15 = (uint)*(byte *)((int)puVar7 + uVar15 + 8);
          uVar12 = (uVar3 ^ uVar2) & 0x800003ff;
          puVar7[1] = uVar15;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
          }
          uVar1 = puVar7[uVar15 + 0x41];
          iVar16 = uVar12 * ((int)(iVar10 + (iVar10 >> 0x1f & 0x3ffU)) >> 10) + param_4;
          uVar12 = *puVar7;
          uVar2 = puVar7[uVar12 + 0x41];
          puVar7[uVar12 + 0x41] = uVar2 ^ uVar1;
          *puVar7 = (uint)*(byte *)((int)puVar7 + uVar12 + 8);
          uVar12 = (uVar2 ^ uVar1) & 0x800003ff;
          puVar7[1] = (uint)*(byte *)((int)puVar7 + uVar15 + 8);
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
          }
          iVar20 = uVar12 * ((int)(iVar11 + (iVar11 >> 0x1f & 0x3ffU)) >> 10) + local_48;
          uVar12 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3ffU)) >> 10;
          if ((int)uVar12 < 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0xff;
            if ((int)uVar12 < 0x100) {
              uVar15 = uVar12;
            }
          }
          iVar13 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3ffU)) >> 10;
          if (iVar13 < 0) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0xff;
            if (iVar13 < 0x100) {
              iVar16 = iVar13;
            }
          }
          iVar13 = (int)(iVar20 + (iVar20 >> 0x1f & 0x3ffU)) >> 10;
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else if (0xff < iVar13) {
            iVar13 = 0xff;
          }
          SetBkColor(param_1,(uint)CONCAT11((char)iVar13,(char)iVar16) << 8 | uVar15 & 0xff);
          local_10.right = local_34 + 1;
          local_10.bottom = local_30 + 1;
          local_10.left = local_34;
          local_10.top = local_30;
          ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
          param_3 = param_3 + iVar4;
          param_4 = param_4 + iVar5;
          local_48 = local_48 + iVar6;
          local_34 = local_34 + -1;
        } while (-1 < local_34);
      }
      local_30 = local_30 + 1;
    } while (local_30 < 8);
    pvVar8 = SelectObject(param_1,pvVar8);
    hdc = CreateCompatibleDC((HDC)0x0);
    SelectObject(hdc,pvVar8);
    iVar18 = param_2[3] + -1;
    if (param_2[1] <= iVar18) {
      do {
        uVar14 = *puVar7;
        uVar17 = puVar7[1];
        uVar19 = puVar7[uVar17 + 0x41];
        uVar12 = puVar7[uVar14 + 0x41];
        puVar7[uVar14 + 0x41] = uVar12 ^ uVar19;
        *puVar7 = (uint)*(byte *)((int)puVar7 + uVar14 + 8);
        puVar7[1] = (uint)*(byte *)((int)puVar7 + uVar17 + 8);
        BitBlt(param_1,*param_2,iVar18,param_2[2] - *param_2,1,hdc,0,(uVar12 ^ uVar19) & 7,0xcc0020)
        ;
        iVar18 = iVar18 + -1;
      } while (param_2[1] <= iVar18);
    }
    DeleteDC(hdc);
    FUN_5cbdf350(puVar7);
    DeleteObject(pvVar8);
  }
  return;
}


