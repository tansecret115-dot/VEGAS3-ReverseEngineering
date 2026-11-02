/* Module: mpgaout.dll
   Function: FUN_10002610
   Address: 10002610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10002610(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_54;
  undefined4 *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  ulonglong local_24;
  undefined4 local_1c [2];
  undefined8 local_14;
  
  if (param_2 == 0) {
    param_4 = 1;
  }
  puVar1 = (undefined2 *)(param_1 + 0x9084);
  while( true ) {
    iVar10 = FUN_10003340(param_1,puVar1,*(int *)(param_1 + 0xc530),*(int *)(param_1 + 0x9050),
                          param_2,param_3,param_4);
    if (iVar10 == 0) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x44e00) + 0x40) != 0) break;
    *(int *)(param_1 + 0xc53c) = *(int *)(param_1 + 0xc53c) + 1;
    *(undefined2 **)(param_1 + 0x907c) = puVar1;
    dVar4 = *(double *)(param_1 + 0xc518);
    *(int *)(param_1 + 0x9080) = param_1 + 0x9984;
    if ((byte)(0.0 < dVar4 | (byte)((ushort)((ushort)NAN(dVar4) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar4 == 0.0) << 0xe) >> 8)) != 0x40) {
      dVar5 = *(double *)(param_1 + 0xc520);
      if (dVar5 <= dVar4 - 1.0) {
        *(undefined4 *)(param_1 + 0xc50c) = 1;
        *(undefined4 *)(param_1 + 0x9060) = 1;
        dVar5 = dVar5 + (1.0 - dVar4);
      }
      else {
        dVar5 = dVar5 - dVar4;
        *(undefined4 *)(param_1 + 0xc50c) = 0;
        *(undefined4 *)(param_1 + 0x9060) = 0;
      }
      *(double *)(param_1 + 0xc520) = dVar5;
    }
    *(int *)(param_1 + 0xc52c) =
         (*(int *)(param_1 + 0xc50c) + *(int *)(param_1 + 0xc508)) * *(int *)(param_1 + 0xc534);
    iVar10 = *(int *)(param_1 + 0x9050);
    if (iVar10 == 2) {
      if (*(int *)(param_1 + 8) == 1) {
        FUN_100095e0(param_1,(int)puVar1,param_1 + 0xad08,param_1 + 0xa908,(int *)(param_1 + 0x9030)
                    );
      }
      else if (0 < *(int *)(param_1 + 0xc530)) {
        iVar10 = 0;
        do {
          iVar9 = 0x1f;
          FUN_10007330();
          iVar2 = iVar10 + 1;
          puVar8 = (undefined8 *)(param_1 + 0xa908 + iVar10 * 0x100);
          iVar10 = 0;
          do {
            *puVar8 = *(undefined8 *)(param_1 + 0xaf08 + iVar10);
            iVar10 = iVar10 + 8;
            puVar8 = puVar8 + 1;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          iVar10 = iVar2;
        } while (iVar2 < *(int *)(param_1 + 0xc530));
      }
      local_3c = param_1 + 0xa484;
      local_40 = param_1 + 0xa908;
      local_44 = param_1 + 0xa384;
      local_48 = (int *)(param_1 + 0xc52c);
      local_54 = param_1 + 0xa284;
      local_60 = param_1 + 0x30;
      local_64 = param_1 + 0xad08;
      local_68 = param_1 + 0x4830;
      local_6c = param_1 + 0xa784;
      local_70 = param_1 + 0x6c30;
      local_74 = (int *)(param_1 + 0x9030);
      iVar10 = 0;
      do {
        iVar2 = iVar10 + 1;
        local_30 = 0;
        do {
          iVar9 = local_30 + 1;
          if (0 < *(int *)(param_1 + 0xc530)) {
            puVar14 = (undefined4 *)(param_1 + 0x907c);
            iVar13 = iVar10 * 0xc00 + 0x30 + param_1;
            iVar16 = 0;
            do {
              pdVar7 = (double *)(local_30 * 0x100 + iVar13);
              iVar13 = iVar13 + 0x2400;
              iVar6 = iVar16 + 1;
              FUN_10003a60(puVar14,iVar16,pdVar7);
              puVar14 = puVar14 + 1;
              iVar16 = iVar6;
            } while (iVar6 < *(int *)(param_1 + 0xc530));
          }
          local_30 = iVar9;
        } while (iVar9 < 0xc);
        iVar10 = iVar2;
      } while (iVar2 < 3);
      FUN_10003ec8(local_60,local_3c,*(int *)(param_1 + 0xc530),*(int *)(param_1 + 0x9048));
      FUN_100061f8(local_3c,(int)local_74,local_64);
      if (*(int *)(param_1 + 0x9034) == 1) {
        FUN_10006180(local_60,local_68,*(int *)(param_1 + 0x9048));
        FUN_10003ec8(local_68,local_6c,1,*(int *)(param_1 + 0x9048));
      }
      FUN_10004018(local_3c,local_44,(int)local_74);
      FUN_1000641c(param_1,local_40,local_44,local_54,local_48,local_74);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_10005c20(local_74,local_54,local_44,(uint *)(param_1 + 0xc528));
      }
      FUN_10006070(param_1,local_74);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_1 + 0xc528),0x10);
      }
      FUN_1000654c(param_1,local_54,(int)local_74);
      FUN_100042f4(param_1,local_54,local_44,local_3c,(int)local_74);
      FUN_10005070(local_3c,local_60,local_6c,local_68,local_54,local_70,(int)local_74);
      FUN_100056a0(param_1,local_70,local_54,(int)local_74);
      for (iVar10 = 0; iVar10 < *(int *)(param_1 + 0xc52c); iVar10 = iVar10 + 1) {
        FUN_1000ace8(*(int **)(param_1 + 0x44e00),0);
      }
    }
    else if ((iVar10 < 3) && (iVar10 == 1)) {
      iVar2 = param_1 + 0xa484;
      iVar10 = param_1 + 0x30;
      iVar9 = param_1 + 0x4830;
      piVar3 = (int *)(param_1 + 0x9030);
      iVar13 = param_1 + 0xa908;
      iVar16 = param_1 + 0xa284;
      local_30 = 0;
      do {
        iVar6 = local_30 + 1;
        if (0 < *(int *)(param_1 + 0xc530)) {
          puVar14 = (undefined4 *)(param_1 + 0x907c);
          iVar11 = param_1 + 0x30;
          iVar12 = 0;
          do {
            pdVar7 = (double *)(local_30 * 0x100 + iVar11);
            iVar11 = iVar11 + 0x2400;
            iVar15 = iVar12 + 1;
            FUN_10003a60(puVar14,iVar12,pdVar7);
            puVar14 = puVar14 + 1;
            iVar12 = iVar15;
          } while (iVar15 < *(int *)(param_1 + 0xc530));
        }
        local_30 = iVar6;
      } while (iVar6 < 0xc);
      FUN_10003d74(iVar10,iVar2,*(int *)(param_1 + 0xc530));
      if (*(int *)(param_1 + 0x9034) == 1) {
        FUN_10006130(iVar10,iVar9);
        FUN_10003d74(iVar9,param_1 + 0xa784,1);
      }
      FUN_1000629c(iVar2,(int)piVar3,param_1 + 0xad08);
      if (*(int *)(param_1 + 8) == 1) {
        FUN_1000a130(param_1,(int)puVar1,param_1 + 0xad08,iVar13,piVar3);
      }
      else if (0 < *(int *)(param_1 + 0xc530)) {
        iVar6 = 0;
        do {
          iVar12 = 0x1f;
          FUN_10007330();
          iVar11 = iVar6 + 1;
          puVar8 = (undefined8 *)(iVar13 + iVar6 * 0x100);
          iVar6 = 0;
          do {
            *puVar8 = *(undefined8 *)(param_1 + 0xaf08 + iVar6);
            iVar6 = iVar6 + 8;
            puVar8 = puVar8 + 1;
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
          iVar6 = iVar11;
        } while (iVar11 < *(int *)(param_1 + 0xc530));
      }
      FUN_10006364(param_1,iVar13,iVar16,(int *)(param_1 + 0xc52c),piVar3);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_10005980(piVar3,iVar16,(uint *)(param_1 + 0xc528));
      }
      FUN_10006070(param_1,piVar3);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_1 + 0xc528),0x10);
      }
      iVar13 = 0;
      FUN_100064e0(param_1,iVar16,(int)piVar3);
      FUN_100062f4(param_1,iVar2,iVar16,(int)piVar3);
      FUN_10005348(param_1,iVar2,iVar10,param_1 + 0xa784,iVar9,iVar16,param_1 + 0x6c30,(int)piVar3);
      FUN_10005518(param_1,param_1 + 0x6c30,iVar16,(int)piVar3);
      if (0 < *(int *)(param_1 + 0xc52c)) {
        do {
          iVar13 = iVar13 + 1;
          FUN_1000ace8(*(int **)(param_1 + 0x44e00),0);
        } while (iVar13 < *(int *)(param_1 + 0xc52c));
      }
    }
    local_4c = local_1c;
    local_24._0_4_ =
         (uint)(longlong)
               ROUND((double)*(longlong *)(*(int *)(param_1 + 0x44e00) + 0x38) -
                     *(double *)(param_1 + 0xc548));
    *(uint *)(param_1 + 0xc540) = (uint)local_24;
    if ((uint)local_24 % *(uint *)(param_1 + 0xc534) != 0) {
      FUN_10001050(param_1,"   Sent %ld bits = %ld slots plus %ld\n");
    }
    local_24 = (ulonglong)*(uint *)(param_1 + 0xc540);
    *(double *)(param_1 + 0xc548) = (double)local_24 + *(double *)(param_1 + 0xc548);
    iVar10 = *(int *)(param_1 + 0x9050) + -1;
    local_24 = (ulonglong)*(uint *)(&DAT_1000c020 + iVar10 * 4);
    local_24._0_4_ =
         (uint)(longlong)
               ROUND((double)local_24 *
                     ((double)*(int *)(&DAT_1000c040 +
                                      *(int *)(param_1 + 0x9058) * 4 + iVar10 * 0x3c) /
                     *(double *)(&DAT_1000c000 + *(int *)(param_1 + 0x905c) * 8)) +
                     (double)*(int *)(param_1 + 0x9060));
    local_1c[0] = (uint)local_24;
    local_24 = (ulonglong)(*(int *)(param_1 + 0xc53c) - 1);
    dVar4 = (double)local_24;
    local_24 = (ulonglong)*(uint *)(param_1 + 0xc538);
    local_14 = (longlong)
               ROUND((((double)local_24 * _DAT_10002600 * dVar4) /
                     *(double *)(&DAT_1000c000 + *(int *)(param_1 + 0x905c) * 8)) * _DAT_10002608);
    (**(code **)(*(int *)(param_1 + 0x44e00) + 0x10))(*(int *)(param_1 + 0x44e00),local_4c);
  }
  FUN_1000109c(param_1,"Audio:Could not write to audio file");
  return 2;
}


