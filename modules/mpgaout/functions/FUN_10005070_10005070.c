/* Module: mpgaout.dll
   Function: FUN_10005070
   Address: 10005070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10005070(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int *local_54;
  double *local_4c;
  int local_48;
  int local_1c;
  int local_18;
  
  iVar14 = *(int *)(param_7 + 0x10);
  iVar2 = *(int *)(param_7 + 0x18);
  iVar3 = *(int *)(param_7 + 0x14);
  iVar9 = *(int *)(param_7 + 8);
  local_1c = 2;
  do {
    local_18 = 0xb;
    iVar5 = local_1c + -1;
    do {
      iVar8 = local_18 + -1;
      if (iVar2 + -1 != -1) {
        iVar15 = iVar2 + -1;
        do {
          iVar12 = 1;
          if (iVar15 < iVar3) {
            iVar12 = iVar14;
          }
          iVar1 = iVar15 + -1;
          iVar13 = iVar12 + -1;
          if (iVar12 != 0) {
            iVar12 = iVar15 * 4;
            local_48 = param_6 + iVar13 * 0x1200;
            local_4c = (double *)
                       (iVar13 * 0x2400 + iVar15 * 8 + param_2 + local_1c * 0xc00 + local_18 * 0x100
                       );
            local_54 = (int *)(iVar13 * 0x180 + param_1 + iVar12 + local_1c * 0x80);
            piVar11 = (int *)(param_5 + iVar12 + iVar13 * 0x80);
            do {
              if (*piVar11 != 0) {
                iVar4 = *(int *)(iVar9 + 0xc + iVar15 * 0x100 + *piVar11 * 0x10);
                if ((iVar14 == 2) && (iVar3 <= iVar15)) {
                  iVar6 = *(int *)(param_3 + local_1c * 0x80 + iVar12);
                  pdVar10 = (double *)(local_18 * 0x100 + iVar15 * 8 + local_1c * 0xc00 + param_4);
                }
                else {
                  iVar6 = *local_54;
                  pdVar10 = local_4c;
                }
                *(int *)(local_1c * 0x600 + local_48 + iVar12 + local_18 * 0x80) =
                     (int)ROUND(*pdVar10 * (double)(&DAT_1001f900)[iVar6] *
                                *(double *)(&DAT_1001e3a0 + iVar4 * 8) +
                                *(double *)(&DAT_1001e3a0 + iVar4 * 8));
              }
              local_48 = local_48 + -0x1200;
              piVar11 = piVar11 + -0x20;
              local_4c = local_4c + -0x480;
              local_54 = local_54 + -0x60;
              bVar16 = iVar13 != 0;
              iVar13 = iVar13 + -1;
            } while (bVar16);
          }
          iVar15 = iVar1;
        } while (iVar1 != -1);
      }
      local_18 = iVar8;
    } while (iVar8 != -1);
    local_1c = iVar5;
  } while (iVar5 != -1);
  if (iVar14 + -1 != -1) {
    iVar14 = iVar14 + -1;
    do {
      local_1c = 2;
      iVar3 = iVar14 + -1;
      do {
        local_18 = 0xb;
        iVar9 = local_1c + -1;
        do {
          iVar5 = local_18 + -1;
          if (iVar2 < 0x20) {
            puVar7 = (undefined4 *)
                     (local_18 * 0x80 + local_1c * 0x600 + iVar14 * 0x1200 + param_6 + iVar2 * 4);
            iVar8 = iVar2;
            do {
              *puVar7 = 0;
              iVar8 = iVar8 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar8 < 0x20);
          }
          local_18 = iVar5;
        } while (iVar5 != -1);
        local_1c = iVar9;
      } while (iVar9 != -1);
      iVar14 = iVar3;
    } while (iVar3 != -1);
  }
  return;
}


