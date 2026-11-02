/* Module: vegas30k.dll
   Function: GetSubPixelCoverage
   Address: 01066140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall A_Buffer::GetSubPixelCoverage(struct SCANLINESTEP *,struct SUBPIXELMASK
   *) */

void __thiscall
A_Buffer::GetSubPixelCoverage(A_Buffer *this,SCANLINESTEP *param_1,SUBPIXELMASK *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  SUBPIXELMASK *pSVar9;
  int iVar10;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
                    /* 0x66140  104
                       ?GetSubPixelCoverage@A_Buffer@@AAEXPAUSCANLINESTEP@@PAUSUBPIXELMASK@@@Z */
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      uVar7 = *(uint *)(param_1 + local_10 * 8 + 0x1c);
      local_8 = *(uint *)(param_1 + local_10 * 8 + 0x3c);
      local_c = *(int *)(param_1 + local_10 * 8 + 0x20);
      iVar4 = *(int *)(param_1 + local_10 * 8 + 0x40);
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      else if (0x4000 < (int)uVar7) {
        uVar7 = 0x4000;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      else if (0x4000 < local_c) {
        local_c = 0x4000;
      }
      if ((int)local_8 < 0) {
        local_8 = 0;
      }
      else if (0x4000 < (int)local_8) {
        local_8 = 0x4000;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x4000 < iVar4) {
        iVar4 = 0x4000;
      }
      uVar8 = local_8;
      iVar5 = iVar4;
      if (local_c < iVar4) {
        uVar8 = uVar7;
        iVar5 = local_c;
        local_c = iVar4;
        uVar7 = local_8;
      }
      local_8 = uVar7;
      local_c = local_c >> 9;
      iVar10 = iVar5 >> 9;
      pSVar9 = param_2;
      iVar4 = 0;
      local_14 = iVar10;
      if (0 < iVar10) {
        do {
          if (local_10 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)pSVar9;
          }
          *(undefined4 *)pSVar9 = uVar6;
          local_14 = local_14 + -1;
          pSVar9 = pSVar9 + 4;
          iVar4 = iVar10;
        } while (local_14 != 0);
      }
      iVar1 = (local_c - iVar10) + -1;
      if (iVar1 < 1) {
        local_8 = 0;
      }
      else {
        local_8 = (int)(local_8 - uVar8) / iVar1;
      }
      if (iVar4 < local_c) {
        pSVar9 = param_2 + iVar4 * 4;
        local_14 = uVar8;
        do {
          if (local_14 >> 9 < 0x20) {
            bVar3 = (byte)(local_14 >> 9);
            if (local_10 == 0) {
              uVar7 = 0xffffffff >> (bVar3 & 0x1f);
            }
            else {
              uVar7 = 0xffffffffU >> (bVar3 & 0x1f) ^ *(uint *)pSVar9;
            }
            *(uint *)pSVar9 = uVar7;
          }
          uVar7 = local_8;
          if (iVar4 == iVar10) {
            lVar2 = (longlong)((iVar10 + 1) * 0x200 - iVar5) * (longlong)(int)local_8;
            uVar7 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
          }
          local_14 = local_14 + uVar7;
          iVar4 = iVar4 + 1;
          pSVar9 = pSVar9 + 4;
        } while (iVar4 < local_c);
      }
      if (iVar4 < 0x20) {
        iVar5 = 0x20 - iVar4;
        pSVar9 = param_2 + iVar4 * 4;
        do {
          if (local_10 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)pSVar9;
          }
          *(undefined4 *)pSVar9 = uVar6;
          pSVar9 = pSVar9 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x5c));
  }
  return;
}


