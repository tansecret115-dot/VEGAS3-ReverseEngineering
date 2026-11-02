/* Module: sfpaplug.dll
   Function: FUN_00434220
   Address: 00434220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00434220(int param_1,int param_2,uint param_3,short *param_4,uint param_5,uint param_6,
            int *param_7,undefined4 param_8,int *param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var;
  int *piVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00434020();
    FUN_0042b9d0((int *)*piVar1);
  }
  *(int *)(param_1 + 8) = param_2;
  FUN_0042baa0(piVar1,4,-1,-1,0x80000000);
  local_18 = 0;
  local_8 = (int *)0x0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  FUN_00418220((int *)&local_18);
  param_2 = 0;
  if (0 < *param_9) {
    do {
      piVar8 = *(int **)(param_9[2] + param_2 * 4);
      piVar11 = local_14;
      piVar3 = local_10;
      piVar12 = local_c;
      piVar4 = local_8;
      if ((piVar8 != (int *)0x0) &&
         (((piVar8[0x9a] = 2, piVar8[0xd0] != 2 ||
           (local_4 = (int *)(uint)((uint)piVar8[0x90] < local_18), local_4 == (int *)0x0)) &&
          ((*(byte *)(piVar8 + 0x8e) & 0x10) != 0)))) {
        piVar13 = piVar8 + 1;
        iVar6 = FUN_00434060((short *)piVar13,param_4,param_5,param_3 & 1);
        piVar11 = local_14;
        piVar3 = local_10;
        piVar12 = local_c;
        piVar4 = local_8;
        if (((iVar6 != 0) &&
            (uVar7 = FUN_00434510(0x10,piVar8[0x8f],param_6), piVar11 = local_14, piVar3 = local_10,
            piVar12 = local_c, piVar4 = local_8, uVar7 != 0)) &&
           ((piVar8[0x93] != 0 ||
            (bVar5 = FUN_00434540(param_9,param_2,piVar13,0x10,0), piVar11 = local_14,
            piVar3 = local_10, piVar12 = local_c, piVar4 = local_8,
            CONCAT31(extraout_var,bVar5) == 0)))) {
          iVar6 = 5;
          bVar5 = true;
          piVar8[0x9a] = 0;
          psVar10 = &DAT_0044de30;
          piVar11 = piVar13;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar5 = *psVar10 == (short)*piVar11;
            psVar10 = psVar10 + 1;
            piVar11 = (int *)((int)piVar11 + 2);
          } while (bVar5);
          if (bVar5) {
LAB_004343f9:
            iVar6 = 0;
          }
          else {
            iVar6 = 5;
            bVar5 = true;
            psVar10 = &DAT_0044de20;
            piVar11 = piVar13;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar5 = *psVar10 == (short)*piVar11;
              psVar10 = psVar10 + 1;
              piVar11 = (int *)((int)piVar11 + 2);
            } while (bVar5);
            if (bVar5) goto LAB_004343f9;
            iVar6 = 5;
            bVar5 = true;
            psVar10 = &DAT_0044de70;
            piVar11 = piVar13;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar5 = *psVar10 == (short)*piVar11;
              psVar10 = psVar10 + 1;
              piVar11 = (int *)((int)piVar11 + 2);
            } while (bVar5);
            piVar11 = piVar8;
            piVar3 = local_10;
            piVar12 = local_c;
            piVar4 = local_8;
            if (bVar5) goto LAB_00434412;
            iVar6 = 5;
            bVar5 = true;
            psVar10 = &DAT_0044de60;
            piVar11 = piVar13;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar5 = *psVar10 == (short)*piVar11;
              psVar10 = psVar10 + 1;
              piVar11 = (int *)((int)piVar11 + 2);
            } while (bVar5);
            piVar11 = local_14;
            piVar4 = piVar8;
            if (bVar5) goto LAB_00434412;
            iVar6 = 5;
            bVar5 = true;
            psVar10 = &DAT_0044df10;
            piVar12 = piVar13;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar5 = *psVar10 == (short)*piVar12;
              psVar10 = psVar10 + 1;
              piVar12 = (int *)((int)piVar12 + 2);
            } while (bVar5);
            piVar12 = piVar8;
            piVar4 = local_8;
            if (bVar5) goto LAB_00434412;
            iVar6 = 5;
            bVar5 = true;
            psVar10 = &DAT_0044dea0;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar5 = *psVar10 == (short)*piVar13;
              psVar10 = psVar10 + 1;
              piVar13 = (int *)((int)piVar13 + 2);
            } while (bVar5);
            piVar3 = piVar8;
            piVar12 = local_c;
            if (bVar5) goto LAB_00434412;
            iVar6 = -1;
          }
          local_4 = piVar8;
          FUN_0042a470((int *)*piVar1,iVar6,(int *)&local_4,1);
          piVar11 = local_14;
          piVar3 = local_10;
          piVar12 = local_c;
          piVar4 = local_8;
        }
      }
LAB_00434412:
      local_8 = piVar4;
      local_c = piVar12;
      local_10 = piVar3;
      local_14 = piVar11;
      param_2 = param_2 + 1;
    } while (param_2 < *param_9);
    if (local_14 != (int *)0x0) {
      param_9 = local_14;
      FUN_0042a470((int *)*piVar1,0,(int *)&param_9,1);
    }
    if (local_10 != (int *)0x0) {
      param_9 = local_10;
      FUN_0042a470((int *)*piVar1,-1,(int *)&param_9,1);
    }
    if (local_c != (int *)0x0) {
      param_9 = local_c;
      FUN_0042a470((int *)*piVar1,-1,(int *)&param_9,1);
    }
    if (local_8 != (int *)0x0) {
      param_9 = local_8;
      FUN_0042a470((int *)*piVar1,-1,(int *)&param_9,1);
    }
  }
  piVar8 = (int *)*piVar1;
  iVar6 = 0;
  if (0 < *piVar8) {
    do {
      iVar9 = *(int *)(piVar8[2] + iVar6 * 4);
      *(int *)(iVar9 + 0x260) = iVar6;
      puVar2 = *(undefined4 **)(iVar9 + 0x264);
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar9 = (**(code **)*puVar2)(puVar2,&DAT_0044db00,&param_9), -1 < iVar9)) {
        (**(code **)(*param_9 + 0xc))(param_9,iVar6);
        (**(code **)(*param_7 + 8))(param_7);
      }
      piVar8 = (int *)*piVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *piVar8);
  }
  return 0;
}


