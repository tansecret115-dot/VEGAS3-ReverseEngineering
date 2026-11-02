/* Module: ednt3260.dll
   Function: FUN_630f61c0
   Address: 630f61c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_630f61c0(void *this,int param_1,int param_2,int param_3,short param_4,short param_5,
            short param_6,undefined2 *param_7,short param_8,short param_9,short param_10,
            short param_11,short param_12,short *param_13,short *param_14)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_10;
  short local_c;
  
  iVar12 = (int)param_4;
  iVar7 = (int)param_5;
  if (iVar12 < iVar7) {
    iVar8 = iVar7 - iVar12;
    psVar5 = (short *)(param_2 + iVar12 * 2);
    do {
      *psVar5 = (0x18 - *(short *)((param_1 - param_2) + (int)psVar5)) * 0x80;
      iVar8 = iVar8 + -1;
      psVar5 = psVar5 + 1;
    } while (iVar8 != 0);
  }
  iVar8 = (int)param_6;
  bVar3 = false;
  _param_4 = 0;
  do {
    if (iVar7 <= iVar12) {
      param_1._0_2_ = (undefined2)iVar8;
      *param_7 = (undefined2)param_1;
      return;
    }
    sVar10 = *(short *)(&DAT_631023c8 + iVar8 * 2);
    if (param_5 <= *(short *)(&DAT_631023c8 + iVar8 * 2)) {
      sVar10 = param_5;
    }
    sVar4 = *(short *)(param_2 + iVar12 * 2);
    local_10 = sVar10 - iVar12;
    iVar12 = iVar12 + 1;
    sVar10 = *(short *)(param_2 + iVar12 * 2);
    psVar5 = (short *)(param_2 + iVar12 * 2);
    if (1 < local_10) {
      local_10 = local_10 + -1;
      iVar12 = iVar12 + local_10;
      do {
        sVar1 = *psVar5;
        iVar13 = (int)sVar4 - (int)sVar1;
        if (iVar13 < 0) {
          iVar13 = (int)sVar1 - (int)sVar4;
        }
        sVar6 = (short)(iVar13 >> 1);
        sVar9 = 0xff;
        if (sVar6 < 0xff) {
          sVar9 = sVar6;
        }
        if (sVar4 < sVar1) {
          sVar4 = sVar1;
        }
        psVar5 = psVar5 + 1;
        sVar4 = *(short *)(&DAT_63101f70 + sVar9 * 2) + sVar4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    if (iVar8 < 3) {
      if ((int)sVar4 == sVar10 + -0x100) {
        _param_4 = 0x180;
        local_c = sVar4;
      }
      else {
        local_c = sVar4;
        if (sVar10 < sVar4) {
          _param_4 = ((int)((int)param_4 - 0x40U) < 1) - 1 & (int)param_4 - 0x40U;
        }
      }
    }
    else if (iVar8 < 6) {
      if ((int)sVar4 == sVar10 + -0x100) {
        _param_4 = 0x180;
      }
      else if (sVar10 < sVar4) {
        _param_4 = ((int)((int)param_4 - 0x40U) < 1) - 1 & (int)param_4 - 0x40U;
      }
      bVar2 = local_c <= sVar4;
      local_c = sVar4;
      if (bVar2) {
        bVar3 = true;
      }
    }
    else {
      if (iVar8 == 6) {
        if (param_5 != 7) {
          if ((int)sVar4 == sVar10 + -0x100) {
            _param_4 = 0x180;
          }
          else if (sVar10 < sVar4) {
            _param_4 = ((int)((int)param_4 - 0x40U) < 1) - 1 & (int)param_4 - 0x40U;
          }
        }
        if (sVar4 < local_c) goto LAB_630f63cf;
      }
      else if (iVar8 < 0x14) {
        if ((int)sVar4 == sVar10 + -0x100) {
          _param_4 = 0x140;
        }
        else if (sVar10 < sVar4) {
          _param_4 = (int)param_4 - 0x40;
          goto LAB_630f63bf;
        }
      }
      else if (iVar8 < 0x17) {
        _param_4 = (int)param_4 - 0x80;
LAB_630f63bf:
        _param_4 = ((int)_param_4 < 1) - 1 & _param_4;
      }
      bVar3 = true;
    }
LAB_630f63cf:
    if (bVar3) {
      iVar13 = (int)sVar4 - (int)param_11;
      if (iVar13 < (int)*param_13 - (int)param_9) {
        iVar13 = (int)*param_13 - (int)param_9;
      }
      *param_13 = (short)iVar13;
      iVar13 = (int)sVar4 - (int)param_10;
      if (iVar13 < (int)*param_14 - (int)param_8) {
        iVar13 = (int)*param_14 - (int)param_8;
      }
      *param_14 = (short)iVar13;
      uVar11 = (uint)(short)iVar13;
      if ((int)uVar11 <= (int)*param_13 - (int)param_4) {
        uVar11 = (int)*param_13 - (int)param_4;
      }
    }
    else {
      *param_13 = sVar4 - param_11;
      *param_14 = sVar4 - param_10;
      uVar11 = (uint)(ushort)(*param_13 - param_4);
    }
    sVar10 = (short)uVar11;
    if (sVar4 < param_12) {
      sVar10 = sVar10 + (short)((int)param_12 - (int)sVar4 >> 2);
    }
    sVar4 = *(short *)(&DAT_631021b8 +
                      ((iVar8 >> (*(byte *)((int)this + 0x3fc04) & 0x1f)) +
                      *(short *)((int)this + 0x6304) * 0x32) * 2);
    if (*(short *)(&DAT_631021b8 +
                  ((iVar8 >> (*(byte *)((int)this + 0x3fc04) & 0x1f)) +
                  *(short *)((int)this + 0x6304) * 0x32) * 2) <= sVar10) {
      sVar4 = sVar10;
    }
    iVar8 = iVar8 + 1;
    *(short *)(param_3 + -2 + iVar8 * 2) = sVar4;
  } while( true );
}


