/* Module: vegas30.exe
   Function: FUN_004ec010
   Address: 004ec010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ec010(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  wchar_t *pwVar11;
  bool bVar12;
  bool bVar13;
  byte local_420 [1024];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14 [4];
  
  local_14[3] = 0;
  local_18 = 0;
  local_1c = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  SetFilePointer(param_1,0,(PLONG)(local_14 + 2),0);
  pbVar3 = &stack0xfffffbd4;
  BVar1 = ReadFile(param_1,local_420,0x3fe,local_14,(LPOVERLAPPED)0x0);
  for (uVar7 = 0; (local_420[0] == 0 && (uVar7 < local_14[0])); uVar7 = uVar7 + 1) {
    local_420[0] = local_420[uVar7 + 1];
  }
  uVar8 = (uVar7 * 0x7fffffff + local_14[0]) * 2;
  if ((BVar1 != 0) && (0x9c < uVar8)) {
    uVar4 = 0x400 - local_14[0];
    pbVar9 = local_420 + local_14[0];
    local_14[2] = uVar8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar9 = 0;
      pbVar9 = pbVar9 + 1;
    }
    iVar2 = FUN_005e3d70(local_420,local_14[0]);
    if (iVar2 == 0) {
      iVar2 = (local_14[0] - uVar7) + 1;
      local_20 = iVar2 * 2;
      FUN_0060ac30();
      MultiByteToWideChar(0,1,(LPCSTR)(local_420 + uVar7),-1,(LPWSTR)&stack0xfffffbd4,iVar2);
      iVar2 = local_20 + -0xe;
      (local_420 + iVar2)[0] = 0;
      (local_420 + iVar2)[1] = 0;
    }
    else {
      pbVar3 = local_420;
      local_14[2] = uVar8;
    }
    local_14[2] = local_14[2] - 0x9c;
    for (uVar7 = 0; uVar7 < local_14[2]; uVar7 = uVar7 + 1) {
      iVar2 = 8;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pbVar10 = &DAT_00613e38;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < *pbVar10;
        bVar13 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_14[3] = 10;
        goto LAB_004ec24d;
      }
      iVar2 = 0x10;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pwVar11 = L"REEL UND";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < (byte)*pwVar11;
        bVar13 = *pbVar9 == (byte)*pwVar11;
        pbVar9 = pbVar9 + 1;
        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_14[3] = 0xb;
        goto LAB_004ec24d;
      }
      iVar2 = 10;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pwVar11 = L"TITLE";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < (byte)*pwVar11;
        bVar13 = *pbVar9 == (byte)*pwVar11;
        pbVar9 = pbVar9 + 1;
        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_14[3] = 0xc;
      }
      iVar2 = 0x1c;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pwVar11 = L"ADOBE PREMIERE";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < (byte)*pwVar11;
        bVar13 = *pbVar9 == (byte)*pwVar11;
        pbVar9 = pbVar9 + 1;
        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_18 = 1;
      }
      iVar2 = 0x10;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pbVar10 = &DAT_00613e84;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < *pbVar10;
        bVar13 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_1c = 1;
      }
      iVar2 = 0x9c;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pwVar11 = L"EDT   REL   MODE  TYP P S  T     P-VTR IN    P-VTR OUT   R-VTR IN    R-VTR OUT";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < (byte)*pwVar11;
        bVar13 = *pbVar9 == (byte)*pwVar11;
        pbVar9 = pbVar9 + 1;
        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) goto LAB_004ec246;
      iVar2 = 0x9c;
      bVar12 = false;
      iVar6 = 0;
      bVar13 = true;
      pbVar9 = pbVar3;
      pwVar11 = L"EDT REL MODE  TYP P S   T     P-VTR IN     P-VTR OUT    R-VTR IN     R-VTR OUT";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar9 < (byte)*pwVar11;
        bVar13 = *pbVar9 == (byte)*pwVar11;
        pbVar9 = pbVar9 + 1;
        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
      } while (bVar13);
      if (!bVar13) {
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar6 == 0) {
        local_14[3] = 0xe;
        iVar2 = local_18;
        goto joined_r0x004ec244;
      }
      pbVar3 = pbVar3 + 2;
    }
    iVar2 = local_18;
    if ((local_14[3] == 0xe) || ((local_14[3] == 0 && (iVar2 = local_1c, local_18 == 1)))) {
joined_r0x004ec244:
      if (iVar2 == 1) {
LAB_004ec246:
        local_14[3] = 0xd;
      }
    }
  }
LAB_004ec24d:
  local_14[1] = 0;
  local_14[2] = 0;
  SetFilePointer(param_1,0,(PLONG)(local_14 + 2),0);
  return local_14[3];
}


