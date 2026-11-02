/* Module: vegas30k.dll
   Function: _SfDibEqualize@16
   Address: 010e1bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibEqualize_16(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  HGLOBAL pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  byte local_20;
  byte bStack_1f;
  byte bStack_1e;
  LPVOID local_1c;
  HGLOBAL local_18;
  undefined2 *local_14;
  undefined2 *local_10;
  HGLOBAL local_c;
  int local_8;
  int local_4;
  
                    /* 0xe1bc0  847  _SfDibEqualize@16 */
  uVar6 = _SfGetPixelType_4(param_1);
  _SfGetPixelBitsPerChannel_8(uVar6,&local_20);
  bVar3 = (byte)((uint)_local_20 >> 0x10);
  if (bVar3 == 0) {
    return -0x7fffbfff;
  }
  local_14 = (undefined2 *)((param_3[3] - param_3[1]) * (param_3[2] - *param_3));
  if ((int)local_14 < 1) {
    return 0;
  }
  pvVar7 = GlobalAlloc(2,((1 << ((byte)((uint)_local_20 >> 0x18) & 0x1f)) +
                          (1 << (bVar3 & 0x1f)) * 2 + (1 << ((byte)_local_20 & 0x1f)) +
                         (1 << ((byte)((uint)_local_20 >> 8) & 0x1f))) * 4);
  if (pvVar7 == (HGLOBAL)0x0) {
    return -0x7ff8fff2;
  }
  iVar11 = 1 << (bStack_1e & 0x1f);
  iVar9 = (8 < bStack_1e) + 1;
  local_c = pvVar7;
  local_18 = GlobalAlloc(2,iVar9 * iVar11);
  local_1c = GlobalLock(pvVar7);
  local_1c = (LPVOID)((int)local_1c +
                     ((1 << ((byte)((uint)_local_20 >> 0x18) & 0x1f)) + (1 << (local_20 & 0x1f)) +
                      (1 << (bStack_1f & 0x1f)) + (1 << ((byte)((uint)_local_20 >> 0x10) & 0x1f))) *
                     4);
  iVar8 = _SfDibHistogram_40(param_1,param_2,param_3,param_4,0,0,0,0,0,local_1c);
  pvVar7 = local_c;
  if (iVar8 == 0) {
    local_10 = GlobalLock(local_18);
    iVar8 = (int)local_14 + 1;
    if (iVar9 == 1) {
      iVar9 = 0;
      iVar2 = iVar8 >> 0x1f;
      if (0 < iVar11) {
        do {
          local_4 = iVar2;
          local_8 = iVar8;
          uVar12 = __allshl();
          uVar4 = __aulldiv(uVar12,local_8,local_4);
          iVar10 = iVar9 + 1;
          local_1c = (LPVOID)((int)local_1c + 4);
          *(undefined1 *)(iVar9 + (int)local_10) = uVar4;
          iVar9 = iVar10;
          iVar8 = local_8;
          iVar2 = local_4;
        } while (iVar10 < iVar11);
      }
    }
    else {
      puVar1 = local_10;
      iVar9 = iVar8 >> 0x1f;
      if (0 < iVar11) {
        do {
          local_4 = iVar9;
          local_8 = iVar8;
          local_14 = puVar1;
          uVar12 = __allshl();
          uVar5 = __aulldiv(uVar12,local_8,local_4);
          *local_14 = uVar5;
          local_14 = local_14 + 1;
          iVar11 = iVar11 + -1;
          puVar1 = local_14;
          iVar8 = local_8;
          iVar9 = local_4;
        } while (iVar11 != 0);
      }
    }
    iVar8 = _SfDibLUT_24(param_1,param_2,param_3,param_4,local_10,2);
    pvVar7 = local_18;
    GlobalUnlock(local_18);
    GlobalFree(pvVar7);
    pvVar7 = local_c;
    GlobalUnlock(local_c);
    GlobalFree(pvVar7);
    return iVar8;
  }
  GlobalUnlock(local_c);
  GlobalFree(pvVar7);
  GlobalFree(local_18);
  return iVar8;
}


