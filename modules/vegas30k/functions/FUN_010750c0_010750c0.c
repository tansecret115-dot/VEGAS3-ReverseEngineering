/* Module: vegas30k.dll
   Function: FUN_010750c0
   Address: 010750c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010750c0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_4;
  
  puVar5 = param_1;
  sVar6 = 1;
  uVar1 = param_1[3];
  piVar11 = (int *)*param_1;
  param_1 = (undefined4 *)0x0;
  iVar7 = 0;
  local_4 = *(int *)(*piVar11 + 0x34c);
  if (0 < (int)puVar5[1]) {
    do {
      piVar11 = (int *)(*(int *)(puVar5[0x13] + 4) * (int)param_1 + *(int *)(puVar5[0x13] + 8));
      iVar8 = 0;
      while( true ) {
        piVar2 = (int *)*piVar11;
        if (piVar2 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar2;
        }
        if (iVar9 <= iVar8) break;
        iVar9 = *(int *)(piVar2[1] * iVar8 + piVar2[2]);
        iVar7 = *(int *)(iVar9 + 0x34c);
        iVar9 = *(int *)(iVar9 + 0x21c);
        if (iVar9 == 0) {
          *(undefined2 *)(iVar7 + 8) = 1;
          iVar8 = iVar8 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(*(int *)(iVar9 + 0x34c) + 6);
        }
      }
      iVar8 = _SfList_Sort_12(*piVar11,-(uint)(uVar1 != 2) & uVar1,&LAB_01075050);
      if (iVar8 < 0) break;
      iVar8 = 0;
      while( true ) {
        piVar2 = (int *)*piVar11;
        if (piVar2 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar2;
        }
        if (iVar9 <= iVar8) break;
        iVar7 = *(int *)(*(int *)(piVar2[1] * iVar8 + piVar2[2]) + 0x34c);
        *(int *)(local_4 + 0x2c) = iVar7;
        *(short *)(iVar7 + 6) = sVar6;
        sVar6 = sVar6 + 1;
        iVar8 = iVar8 + 1;
        local_4 = iVar7;
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < (int)puVar5[1]);
  }
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  uVar1 = puVar5[0x11];
  iVar7 = *(int *)(*(int *)*puVar5 + 0x34c);
  param_1._0_2_ = CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
  puVar5[0x36] = CONCAT13((char)uVar1,(int3)CONCAT22((short)(uVar1 >> 8),param_1._0_2_));
  puVar5[0x35] = uVar1;
  puVar5[0x37] = puVar5[7];
  iVar8 = FUN_01072870(puVar5,6,iVar7,(uint)((uVar1 & 0x7ff) != 0) + (uVar1 >> 0xb));
  if (-1 < iVar8) {
    uVar3 = puVar5[7];
    param_1._0_2_ = CONCAT11((char)((uint)uVar3 >> 0x10),(char)((uint)uVar3 >> 0x18));
    param_1 = (undefined4 *)CONCAT22(CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8)),param_1._0_2_);
    puVar5[0x39] = param_1;
    iVar8 = FUN_01072870(puVar5,5,iVar7,
                         (uint)((puVar5[0x11] & 0x7ff) != 0) + ((uint)puVar5[0x11] >> 0xb));
    if ((-1 < iVar8) && (puVar5[3] == 2)) {
      sVar6 = 1;
      param_1 = (undefined4 *)0x0;
      iVar8 = *(int *)(*(int *)*puVar5 + 0x34c);
      if (0 < (int)puVar5[1]) {
        do {
          piVar11 = (int *)(*(int *)(puVar5[0x13] + 4) * (int)param_1 + *(int *)(puVar5[0x13] + 8));
          iVar9 = 0;
          while( true ) {
            piVar2 = (int *)*piVar11;
            if (piVar2 == (int *)0x0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *piVar2;
            }
            if (iVar10 <= iVar9) break;
            iVar10 = *(int *)(piVar2[1] * iVar9 + piVar2[2]);
            iVar7 = *(int *)(iVar10 + 0x34c);
            iVar10 = *(int *)(iVar10 + 0x21c);
            if (iVar10 == 0) {
              *(undefined2 *)(iVar7 + 8) = 1;
              iVar9 = iVar9 + 1;
            }
            else {
              iVar9 = iVar9 + 1;
              *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(*(int *)(iVar10 + 0x34c) + 6);
            }
          }
          iVar9 = _SfList_Sort_12(*piVar11,2,&LAB_01075050);
          if (iVar9 < 0) break;
          iVar9 = 0;
          while( true ) {
            piVar2 = (int *)*piVar11;
            if (piVar2 == (int *)0x0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *piVar2;
            }
            if (iVar10 <= iVar9) break;
            iVar7 = *(int *)(*(int *)(piVar2[1] * iVar9 + piVar2[2]) + 0x34c);
            *(int *)(iVar8 + 0x30) = iVar7;
            *(short *)(iVar7 + 6) = sVar6;
            sVar6 = sVar6 + 1;
            iVar9 = iVar9 + 1;
            iVar8 = iVar7;
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
        } while ((int)param_1 < (int)puVar5[1]);
      }
      *(undefined4 *)(iVar7 + 0x30) = 0;
      uVar1 = puVar5[0x12];
      uVar3 = *(undefined4 *)(*(int *)*puVar5 + 0x34c);
      param_1._0_2_ = CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
      param_1._0_3_ = CONCAT12((char)(uVar1 >> 8),param_1._0_2_);
      param_1 = (undefined4 *)CONCAT13((char)uVar1,param_1._0_3_);
      puVar5[0x236] = param_1;
      puVar5[0x235] = uVar1;
      puVar5[0x237] = puVar5[7];
      iVar7 = FUN_01072870(puVar5,8,uVar3,(uint)((uVar1 & 0x7ff) != 0) + (uVar1 >> 0xb));
      if (-1 < iVar7) {
        uVar4 = puVar5[7];
        param_1._0_2_ = CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar4 >> 8),param_1._0_2_);
        param_1 = (undefined4 *)CONCAT13((char)uVar4,param_1._0_3_);
        puVar5[0x239] = param_1;
        FUN_01072870(puVar5,7,uVar3,
                     (uint)((puVar5[0x12] & 0x7ff) != 0) + ((uint)puVar5[0x12] >> 0xb));
      }
    }
  }
  return;
}


