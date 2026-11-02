/* Module: vegas30.exe
   Function: SfDibAdjust
   Address: 00583980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDibAdjust(struct tagBITMAPINFOHEADER const *,void *,struct tagRECT const
   *,long,struct tagBITMAPINFOHEADER const *,void const *,struct tagRECT const *,long,struct
   tSFDIBADJUST const *) */

long SfDibAdjust(tagBITMAPINFOHEADER *param_1,void *param_2,tagRECT *param_3,long param_4,
                tagBITMAPINFOHEADER *param_5,void *param_6,tagRECT *param_7,long param_8,
                tSFDIBADJUST *param_9)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint local_218;
  uint local_214;
  uint local_210;
  WORD *local_20c;
  WORD *local_208;
  uint local_204;
  byte *local_200;
  byte *local_1fc;
  byte *local_1f8;
  int local_1f4;
  long local_1f0;
  int local_1ec;
  RECT local_1e8;
  RECT local_1d8;
  undefined1 local_1c8 [4];
  uint local_1c4;
  int local_1c0;
  uint local_1bc [3];
  code *pcStack_1b0;
  code *local_1a0;
  byte local_180;
  byte local_17f;
  byte local_17e [5];
  byte local_179;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  int local_160;
  uint local_15c;
  int local_130;
  undefined1 local_100 [256];
  
                    /* 0x183980  18
                       ?SfDibAdjust@@YGJPBUtagBITMAPINFOHEADER@@PAXPBUtagRECT@@J0PBX2JPBUtSFDIBADJUST@@@Z
                        */
  iVar3 = _SfGetPixelType_4(param_1);
  iVar4 = _SfGetPixelType_4(param_5);
  if (((iVar4 < 0x10) || (0x20 < iVar4)) || ((iVar3 != 0x1d && (iVar3 != 0x1c)))) {
    return -0x7fffbfff;
  }
  iVar5 = _SfGetPixelBitsPerChannel_8(iVar4,local_1c8);
  _SfGetPixelBitsPerChannel_8(iVar3,local_1c8);
  local_1e8.right = param_1->biWidth;
  uVar7 = param_1->biHeight >> 0x1f;
  local_1e8.bottom = (param_1->biHeight ^ uVar7) - uVar7;
  local_1e8.left = 0;
  local_1e8.top = 0;
  if (param_3 != (tagRECT *)0x0) {
    IntersectRect(&local_1e8,&local_1e8,param_3);
  }
  local_1d8.right = param_5->biWidth;
  local_1d8.left = 0;
  local_1d8.top = 0;
  uVar7 = param_5->biHeight >> 0x1f;
  local_1d8.bottom = (param_5->biHeight ^ uVar7) - uVar7;
  if (param_7 != (tagRECT *)0x0) {
    IntersectRect(&local_1d8,&local_1d8,param_7);
  }
  local_214 = local_1e8.bottom - local_1e8.top;
  local_218 = local_1e8.right - local_1e8.left;
  if (*param_9 == (tSFDIBADJUST)0x0) {
    if (local_1d8.right - local_1d8.left < (int)local_214) {
      local_214 = local_1d8.right - local_1d8.left;
    }
    uVar7 = local_1d8.bottom - local_1d8.top;
    local_210 = local_214;
    local_204 = local_218;
    if ((int)uVar7 < (int)local_218) {
      local_218 = uVar7;
      local_204 = uVar7;
    }
  }
  else {
    if (local_1d8.bottom - local_1d8.top < (int)local_214) {
      local_214 = local_1d8.bottom - local_1d8.top;
    }
    uVar7 = local_1d8.right - local_1d8.left;
    local_210 = local_218;
    local_204 = local_214;
    if ((int)uVar7 < (int)local_218) {
      local_218 = uVar7;
      local_210 = uVar7;
      local_204 = local_214;
    }
  }
  if (local_218 == 0) {
    return 0;
  }
  if (local_214 == 0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    if (param_1->biCompression == 0) {
      if (((param_1->biClrUsed != 0) || (uVar2 = param_1->biBitCount, uVar2 == 0)) || (8 < uVar2))
      goto LAB_00583b45;
      param_2 = (void *)((int)&param_1->biSize + param_1->biSize + (1 << ((byte)uVar2 & 0x1f)) * 4);
    }
    else if (param_1->biCompression == 3) {
      param_2 = &param_1[1].biPlanes;
    }
    else {
LAB_00583b45:
      param_2 = (void *)((int)&param_1->biSize + param_1->biSize + param_1->biClrUsed * 4);
    }
  }
  if (param_6 != (void *)0x0) goto LAB_00583bb0;
  if (param_5->biCompression == 0) {
    if (((param_5->biClrUsed != 0) || (uVar2 = param_5->biBitCount, uVar2 == 0)) || (8 < uVar2))
    goto LAB_00583ba3;
    DVar6 = 1 << ((byte)uVar2 & 0x1f);
  }
  else {
    if (param_5->biCompression == 3) {
      param_6 = &param_5[1].biPlanes;
      goto LAB_00583bb0;
    }
LAB_00583ba3:
    DVar6 = param_5->biClrUsed;
  }
  param_6 = (void *)((int)&param_5->biSize + param_5->biSize + DVar6 * 4);
LAB_00583bb0:
  local_20c = param_2;
  if (param_4 == 0) {
    uVar7 = (uint)param_1->biBitCount * param_1->biWidth + 0x1f;
    param_4 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  else if (param_4 < 0) {
    uVar7 = param_1->biHeight >> 0x1f;
    local_20c = (WORD *)((((param_1->biHeight ^ uVar7) - uVar7) + -1) *
                         ((param_4 ^ param_4 >> 0x1f) - (param_4 >> 0x1f)) + (int)param_2);
  }
  local_208 = param_6;
  if (param_8 == 0) {
    uVar7 = (uint)param_5->biBitCount * param_5->biWidth + 0x1f;
    local_1f0 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  else {
    local_1f0 = param_8;
    if (param_8 < 0) {
      uVar7 = param_5->biHeight >> 0x1f;
      local_208 = (WORD *)((((param_5->biHeight ^ uVar7) - uVar7) + -1) *
                           ((param_8 ^ param_8 >> 0x1f) - (param_8 >> 0x1f)) + (int)param_6);
    }
  }
  local_208 = (WORD *)((int)local_208 + local_1f0 * local_1d8.top);
  if (*param_9 == (tSFDIBADJUST)0x0) {
    if ((char)param_9[1] < '\0') {
      local_1ec = -4;
      local_1f4 = (local_204 + local_1e8.left) * 4 + -4;
    }
    else {
      local_1f4 = local_1e8.left * 4;
      local_1ec = 4;
    }
    if ((char)param_9[2] < '\0') {
      iVar10 = ((local_210 - 1) + local_1e8.top) * param_4;
      iVar12 = -param_4;
    }
    else {
      iVar10 = param_4 * local_1e8.top;
      iVar12 = param_4;
    }
  }
  else {
    if ((char)*param_9 < '\0') {
      local_1f4 = (local_1e8.left + local_218) * 4 + -4;
      iVar12 = -4;
    }
    else {
      local_1f4 = local_1e8.left * 4;
      iVar12 = 4;
    }
    local_1ec = param_4;
    iVar10 = local_1e8.top;
    if ((char)param_9[3] < '\0') {
      local_1ec = -param_4;
      iVar10 = local_1e8.top + -1 + local_214;
    }
    iVar10 = iVar10 * param_4;
  }
  local_1c4 = *(uint *)(param_9 + 0x18) & 1;
  FUN_00583800(local_100,*(undefined4 *)(param_9 + 8),*(undefined4 *)(param_9 + 0xc),
               *(undefined4 *)(param_9 + 0x10),*(undefined4 *)(param_9 + 0x14),
               *(uint *)(param_9 + 0x18) >> 1 & 1);
  _SfXCHGGetFunctionPointers_20(iVar3,iVar4,3,local_1bc,0);
  if (param_5->biClrUsed == 0) {
    local_130 = 0;
  }
  else {
    local_130 = (int)&param_5->biSize + param_5->biSize;
  }
  local_20c = (WORD *)((int)local_20c + iVar10);
  uVar7 = local_1d8.left * iVar5;
  local_218 = (int)(local_210 + ((int)local_210 >> 0x1f & 3U)) >> 2;
  local_214 = local_210 & 0x80000003;
  if ((int)local_214 < 0) {
    local_214 = (local_214 - 1 | 0xfffffffc) + 1;
  }
  local_1fc = &local_180;
  local_200 = &local_17f;
  local_1f8 = local_17e + 1;
  pbVar9 = local_17e;
  if ((local_1bc[0] & 0x10) != 0) {
    local_200 = local_17e + 1;
    local_214 = local_210;
    local_218 = 0;
    local_1fc = &local_17f;
    local_1f8 = &local_179;
    pbVar9 = local_17e + 3;
  }
  if (0 < (int)local_204) {
    local_1c0 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
    uVar7 = uVar7 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    do {
      puVar11 = (undefined1 *)((int)local_20c + local_1f4);
      local_160 = local_1c0 + (int)local_208;
      local_15c = uVar7;
      if (local_1c4 == 0) {
        uVar8 = local_218;
        if (0 < (int)local_218) {
          do {
            (*local_1a0)(local_1bc);
            puVar11[2] = local_100[CONCAT11(local_17e[1],local_17e[0]) & 0xff];
            puVar11[1] = local_100[CONCAT12(local_17e[1],CONCAT11(local_17e[0],local_17f)) & 0xff];
            *puVar11 = local_100[CONCAT12(local_17e[0],CONCAT11(local_17f,local_180)) & 0xff];
            puVar11[3] = local_17e[1];
            puVar11 = puVar11 + iVar12;
            puVar11[2] = local_100[CONCAT11(uStack_175,uStack_176) & 0xff];
            puVar11[1] = local_100[CONCAT12(uStack_175,CONCAT11(uStack_176,uStack_177)) & 0xff];
            *puVar11 = local_100[CONCAT12(uStack_176,CONCAT11(uStack_177,uStack_178)) & 0xff];
            puVar11[3] = uStack_175;
            puVar11 = puVar11 + iVar12;
            puVar11[2] = local_100[CONCAT11(uStack_16d,uStack_16e) & 0xff];
            puVar11[1] = local_100[CONCAT12(uStack_16d,CONCAT11(uStack_16e,uStack_16f)) & 0xff];
            *puVar11 = local_100[CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170)) & 0xff];
            puVar11[3] = uStack_16d;
            puVar11 = puVar11 + iVar12;
            puVar11[2] = local_100[CONCAT11(uStack_165,uStack_166) & 0xff];
            puVar11[1] = local_100[CONCAT12(uStack_165,CONCAT11(uStack_166,uStack_167)) & 0xff];
            *puVar11 = local_100[CONCAT12(uStack_166,CONCAT11(uStack_167,uStack_168)) & 0xff];
            puVar11[3] = uStack_165;
            puVar11 = puVar11 + iVar12;
            uVar8 = uVar8 + -1;
          } while (uVar8 != 0);
        }
        uVar8 = local_214;
        if (0 < (int)local_214) {
          do {
            (*pcStack_1b0)(local_1bc);
            puVar11[2] = local_100[*pbVar9];
            puVar11[1] = local_100[*local_200];
            *puVar11 = local_100[*local_1fc];
            puVar11[3] = *local_1f8;
            puVar11 = puVar11 + iVar12;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else {
        uVar8 = local_218;
        if (0 < (int)local_218) {
          do {
            (*local_1a0)(local_1bc);
            uVar1 = local_100[((CONCAT12(local_17e[0],CONCAT11(local_17f,local_180)) & 0xff) +
                               (CONCAT12(local_17e[1],CONCAT11(local_17e[0],local_17f)) & 0xff) +
                              (CONCAT11(local_17e[1],local_17e[0]) & 0xff)) / 3];
            *puVar11 = uVar1;
            puVar11[1] = uVar1;
            puVar11[2] = uVar1;
            puVar11[3] = local_17e[1];
            puVar11 = puVar11 + iVar12;
            uVar1 = local_100[((CONCAT12(uStack_176,CONCAT11(uStack_177,uStack_178)) & 0xff) +
                               (CONCAT12(uStack_175,CONCAT11(uStack_176,uStack_177)) & 0xff) +
                              (CONCAT11(uStack_175,uStack_176) & 0xff)) / 3];
            *puVar11 = uVar1;
            puVar11[1] = uVar1;
            puVar11[2] = uVar1;
            puVar11[3] = uStack_175;
            puVar11 = puVar11 + iVar12;
            uVar1 = local_100[((CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170)) & 0xff) +
                               (CONCAT12(uStack_16d,CONCAT11(uStack_16e,uStack_16f)) & 0xff) +
                              (CONCAT11(uStack_16d,uStack_16e) & 0xff)) / 3];
            *puVar11 = uVar1;
            puVar11[1] = uVar1;
            puVar11[2] = uVar1;
            puVar11[3] = uStack_16d;
            puVar11 = puVar11 + iVar12;
            uVar1 = local_100[((CONCAT12(uStack_166,CONCAT11(uStack_167,uStack_168)) & 0xff) +
                               (CONCAT12(uStack_165,CONCAT11(uStack_166,uStack_167)) & 0xff) +
                              (CONCAT11(uStack_165,uStack_166) & 0xff)) / 3];
            *puVar11 = uVar1;
            puVar11[1] = uVar1;
            puVar11[2] = uVar1;
            puVar11[3] = uStack_165;
            puVar11 = puVar11 + iVar12;
            uVar8 = uVar8 + -1;
          } while (uVar8 != 0);
        }
        uVar8 = local_214;
        if (0 < (int)local_214) {
          do {
            (*pcStack_1b0)(local_1bc);
            uVar1 = local_100[((uint)*local_1fc + (uint)*local_200 + (uint)*pbVar9) / 3];
            *puVar11 = uVar1;
            puVar11[1] = uVar1;
            puVar11[2] = uVar1;
            puVar11[3] = *local_1f8;
            puVar11 = puVar11 + iVar12;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      local_208 = (WORD *)((int)local_208 + local_1f0);
      local_20c = (WORD *)((int)local_20c + local_1ec);
      local_204 = local_204 - 1;
    } while (local_204 != 0);
  }
  return 0;
}


