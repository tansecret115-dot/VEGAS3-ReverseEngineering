/* Module: ednt3260.dll
   Function: FUN_630f8550
   Address: 630f8550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f8550(int param_1,int param_2,int param_3,short param_4,short param_5,short param_6,
                 int param_7,short param_8,short param_9,short param_10,short param_11)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  undefined4 *puVar11;
  
  if (param_6 == 0) {
    _param_6 = (int)param_10;
    if (_param_6 < param_11) {
      psVar7 = (short *)(&DAT_631023c8 + _param_6 * 2);
      _param_6 = param_11 - _param_6;
      iVar3 = (int)param_8;
      do {
        sVar2 = *psVar7;
        if (param_9 <= *psVar7) {
          sVar2 = param_9;
        }
        iVar8 = (int)sVar2;
        uVar10 = (*(short *)(param_2 + -0x631023c8 + (int)psVar7) - param_4) - param_5;
        if (0x1fe0 < (short)uVar10) {
          FUN_630f92d0();
        }
        if ((short)uVar10 < 0) {
          uVar10 = 0;
        }
        param_11 = (uVar10 & 0x1fe0) + param_5;
        if (iVar3 < iVar8) {
          iVar9 = iVar8 - iVar3;
          psVar6 = (short *)(param_1 + iVar3 * 2);
          do {
            sVar2 = (short)(*(short *)((param_3 - param_1) + (int)psVar6) - param_11) >> 5;
            if (sVar2 < 0) {
              sVar2 = 0;
            }
            if (0x3f < sVar2) {
              sVar2 = 0x3f;
            }
            sVar2 = (&DAT_63102348)[sVar2];
            *psVar6 = sVar2;
            psVar1 = (short *)(param_7 + sVar2 * 2);
            *psVar1 = *psVar1 + 1;
            iVar9 = iVar9 + -1;
            psVar6 = psVar6 + 1;
          } while (iVar9 != 0);
        }
        psVar7 = psVar7 + 1;
        _param_6 = _param_6 + -1;
        iVar3 = iVar8;
      } while (_param_6 != 0);
    }
  }
  else {
    iVar3 = (int)param_8;
    if (iVar3 < param_9) {
      uVar4 = param_9 - iVar3;
      puVar11 = (undefined4 *)(param_1 + iVar3 * 2);
      for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)puVar11 = 0;
        puVar11 = (undefined4 *)((int)puVar11 + 2);
      }
      return;
    }
  }
  return;
}


