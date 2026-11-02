/* Module: vegas30k.dll
   Function: _SfDibQuantizePalette@24
   Address: 0104d940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibQuantizePalette_24
          (int *param_1,int *param_2,int *param_3,RECT *param_4,int param_5,undefined4 param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_100;
  int local_fc;
  int local_f8;
  tagRECT local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  tagRECT local_d0;
  undefined1 local_c0 [4];
  uint local_bc [3];
  code *local_b0;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  ushort uStack_7e;
  byte bStack_7b;
  int local_60;
  undefined4 local_5c;
  int local_30;
  
                    /* 0x4d940  878  _SfDibQuantizePalette@24 */
  iVar2 = _SfGetPixelType_4(param_2);
  if (iVar2 < 0x10) {
    return (undefined1 *)0x80004001;
  }
  if (0x20 < iVar2) {
    return (undefined1 *)0x80004001;
  }
  if (param_3 != (int *)0x0) goto LAB_0104d9bc;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0104d9b0;
    iVar7 = *param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_0104d9bc;
    }
LAB_0104d9b0:
    iVar7 = *param_2 + param_2[8] * 4;
  }
  param_3 = (int *)(iVar7 + (int)param_2);
LAB_0104d9bc:
  if (param_5 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
    param_5 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  local_d4 = iVar2;
  SetRect(&local_d0,0,0,param_2[1],param_2[2]);
  if (param_4 == (RECT *)0x0) {
    local_f0.left = local_d0.left;
    local_f0.top = local_d0.top;
    local_f0.right = local_d0.right;
    local_f0.bottom = local_d0.bottom;
  }
  else {
    IntersectRect(&local_f0,&local_d0,param_4);
  }
  local_f8 = local_f0.right - local_f0.left;
  local_100 = local_f0.bottom - local_f0.top;
  if ((0 < local_f8) && (0 < local_100)) {
    local_e0 = _SfGetPixelType_4(param_1);
    if ((local_e0 != 0x17) && (local_e0 != 0x18)) {
      return (undefined1 *)0x80004001;
    }
    if (param_1[8] != 0) {
      local_d8 = _SfGetPixelBitsPerChannel_8(iVar2,local_c0);
      local_dc = *param_1 + (int)param_1;
      uVar3 = param_1[8];
      if ((uVar3 != 0) && (local_dc != 0)) {
        pvVar4 = GlobalAlloc(2,0x8000);
        pMem = GlobalLock(pvVar4);
        if (pMem != (undefined4 *)0x0) {
          _SfXCHGGetFunctionPointers_20(local_e0,local_d4,param_6,local_bc,0);
          local_30 = *param_2 + (int)param_2;
          iVar2 = param_2[2];
          puVar9 = pMem;
          for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0xffffffff;
            puVar9 = puVar9 + 1;
          }
          iVar2 = (int)param_3 +
                  ((int)(local_d8 * local_f0.left + (local_d8 * local_f0.left >> 0x1f & 7U)) >> 3) +
                  (iVar2 - local_f0.bottom) * param_5;
          if ((local_bc[0] & 0x10) == 0) {
            if (0 < local_100) {
              do {
                local_5c = 0;
                iVar7 = local_f8;
                local_60 = iVar2;
                if (0 < local_f8) {
                  do {
                    (*local_b0)(local_bc);
                    iVar5 = ((CONCAT11(uStack_7f,uStack_80) & 0xff) >> 3) +
                            ((uStack_7e & 0xf8) * 0x20 + (CONCAT21(uStack_7e,uStack_7f) & 0xf8)) * 4
                    ;
                    if (*(char *)(iVar5 + (int)pMem) == -1) {
                      *(undefined1 *)(iVar5 + (int)pMem) = 10;
                    }
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                iVar2 = iVar2 + param_5;
                local_100 = local_100 + -1;
              } while (local_100 != 0);
            }
          }
          else if (0 < local_100) {
            do {
              local_5c = 0;
              iVar7 = local_f8;
              local_60 = iVar2;
              if (0 < local_f8) {
                do {
                  (*local_b0)(local_bc);
                  iVar5 = (bStack_7b & 0xfffff8) * 0x80 + (uStack_7e >> 6 & 0xffffffe0) +
                          ((CONCAT21(uStack_7e,uStack_7f) & 0xff) >> 3);
                  if (*(char *)(iVar5 + (int)pMem) == -1) {
                    *(undefined1 *)(iVar5 + (int)pMem) = 10;
                  }
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              iVar2 = iVar2 + param_5;
              local_100 = local_100 + -1;
            } while (local_100 != 0);
            local_100 = 0;
          }
          uVar8 = 0;
          iVar2 = 2;
          local_fc = param_5;
          while( true ) {
            iVar7 = iVar2 + -1;
            uVar6 = FUN_0104d430(pMem,iVar2,iVar7,iVar7,1);
            if ((uVar6 <= uVar3) && (uVar6 != 0)) {
              uVar8 = uVar6;
              local_100 = iVar7;
              local_fc = iVar2;
              local_f8 = iVar7;
            }
            uVar6 = FUN_0104d430(pMem,iVar7,iVar2,iVar7,2);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar2;
              local_fc = iVar7;
              local_f8 = iVar7;
            }
            uVar6 = FUN_0104d430(pMem,iVar7,iVar7,iVar2,3);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar7;
              local_fc = iVar7;
              local_f8 = iVar2;
            }
            uVar6 = FUN_0104d430(pMem,iVar2,iVar2,iVar7,1);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar2;
              local_fc = iVar2;
              local_f8 = iVar7;
            }
            uVar6 = FUN_0104d430(pMem,iVar2,iVar7,iVar2,2);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar7;
              local_fc = iVar2;
              local_f8 = iVar2;
            }
            uVar6 = FUN_0104d430(pMem,iVar7,iVar2,iVar2,3);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar2;
              local_fc = iVar7;
              local_f8 = iVar2;
            }
            uVar6 = FUN_0104d430(pMem,iVar2,iVar2,iVar2,4);
            if ((uVar6 <= uVar3) && (uVar8 < uVar6)) {
              uVar8 = uVar6;
              local_100 = iVar2;
              local_fc = iVar2;
              local_f8 = iVar2;
            }
            if (uVar8 != 0) break;
            iVar2 = iVar2 + 1;
          }
          FUN_0104d5b0(pMem,local_fc,local_100,local_f8,5,local_dc);
          pvVar4 = GlobalHandle(pMem);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem);
          GlobalFree(pvVar4);
          return (undefined1 *)0x0;
        }
        return (undefined1 *)0x8007000e;
      }
    }
    return &DAT_80070057;
  }
  return (undefined1 *)0x0;
}


