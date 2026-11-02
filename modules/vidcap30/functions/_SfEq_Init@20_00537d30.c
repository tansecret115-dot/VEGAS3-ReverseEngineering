/* Module: vidcap30.exe
   Function: _SfEq_Init@20
   Address: 00537d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfEq_Init_20(int *param_1,short *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  code *pcVar11;
  int iVar12;
  
                    /* 0x137d30  363  _SfEq_Init@20 */
  if ((*param_2 != 3) || ((param_2[7] != 0x20 && (param_2[7] != 0x40)))) {
    return 0x80004001;
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  pcVar10 = GlobalAlloc_exref;
  pvVar4 = GlobalAlloc(0x40,0x2c);
  pcVar11 = GlobalLock_exref;
  puVar5 = GlobalLock(pvVar4);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[2] = *(undefined4 *)(param_2 + 2);
    puVar5[3] = (uint)(ushort)param_2[7];
    uVar1 = param_2[1];
    puVar5[5] = param_4;
    puVar5[4] = (uint)uVar1;
    *puVar5 = 0;
    puVar5[1] = 0;
    pvVar4 = GlobalAlloc(0x40,param_4 << 5);
    puVar6 = GlobalLock(pvVar4);
    puVar5[9] = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      for (iVar9 = (puVar5[5] & 0x7ffffff) << 3; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = *param_3;
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar9 = 0; pcVar10 = GlobalAlloc_exref, pcVar11 = GlobalLock_exref, iVar9 != 0;
          iVar9 = iVar9 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    puVar7 = (undefined4 *)(puVar5[4] << 2);
    uVar8 = (*pcVar10)(0x40);
    iVar9 = (*pcVar11)(uVar8);
    puVar5[7] = iVar9;
    iVar12 = 0;
    bVar2 = puVar6 == (undefined4 *)0x0 || iVar9 == 0;
    if (0 < (int)puVar5[4]) {
      do {
        uVar8 = (*pcVar10)(0x40,puVar5[5] * 0xe0);
        uVar8 = (*pcVar11)(uVar8);
        *(undefined4 *)(puVar5[7] + iVar12 * 4) = uVar8;
        bVar2 = (bool)(bVar2 | *(int *)(puVar5[7] + iVar12 * 4) == 0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)puVar5[4]);
    }
    uVar8 = (*pcVar10)(0x40,(int)param_1 * 4);
    iVar9 = (*pcVar11)(uVar8);
    puVar5[6] = iVar9;
    bVar2 = (bool)(bVar2 | iVar9 == 0);
    if (iVar12 != 0) {
      uVar8 = (*pcVar10)(0x40,puVar5[4] << 2);
      iVar9 = (*pcVar11)(uVar8);
      puVar5[8] = iVar9;
      iVar12 = 0;
      bVar3 = bVar2 | iVar9 == 0;
      if (0 < (int)puVar5[4]) {
        do {
          uVar8 = (*pcVar10)(0x40,puVar5[5] * 0xe0);
          uVar8 = (*pcVar11)(uVar8);
          *(undefined4 *)(puVar5[8] + iVar12 * 4) = uVar8;
          bVar3 = bVar3 | *(int *)(puVar5[7] + iVar12 * 4) == 0;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)puVar5[4]);
      }
      uVar8 = (*pcVar10)(0x40,puVar5[4] << 7);
      iVar9 = (*pcVar11)(uVar8);
      puVar5[10] = iVar9;
      bVar2 = (bool)(bVar3 | iVar9 == 0);
    }
    if (!bVar2) {
      _SfEq_Reset_12(puVar5,puVar5[9],1);
      *puVar7 = puVar5;
      return 0;
    }
    _SfEq_Close_4(puVar5);
    return 0x8007000e;
  }
  return 0x8007000e;
}


