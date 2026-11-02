/* Module: mp3rw.dll
   Function: FUN_0047c080
   Address: 0047c080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c080(int *param_1,int *param_2)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  ushort *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int local_1c;
  int local_14;
  
  piVar7 = param_1;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  piVar14 = (int *)param_2[2];
  iVar9 = *piVar14;
  iVar5 = piVar14[1];
  uVar18 = piVar14[4];
  iVar6 = piVar14[2];
  local_1c = 0;
  puVar16 = (undefined4 *)((int)param_1 + 0xb32);
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  *(undefined2 *)
   (iVar3 + 2 + *(int *)((int)param_1 + *(int *)((int)param_1 + 0x144a) * 4 + 0xb52) * 4) = 0;
  iVar11 = *(int *)((int)param_1 + 0x144a) + 1;
  if (iVar11 < 0x23d) {
    param_1 = (int *)((int)param_1 + iVar11 * 4 + 0xb52);
    local_14 = 0x23d - iVar11;
    piVar14 = (int *)(iVar11 + local_14);
    do {
      iVar11 = *param_1;
      uVar8 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar11 * 4) * 4) + 1;
      if ((int)uVar18 < (int)uVar8) {
        local_1c = local_1c + 1;
        uVar8 = uVar18;
      }
      *(short *)(iVar3 + 2 + iVar11 * 4) = (short)uVar8;
      if (iVar11 <= iVar4) {
        psVar12 = (short *)((int)piVar7 + uVar8 * 2 + 0xb32);
        *psVar12 = *psVar12 + 1;
        iVar17 = 0;
        if (iVar6 <= iVar11) {
          iVar17 = *(int *)(iVar5 + (iVar11 - iVar6) * 4);
        }
        uVar15 = (uint)*(ushort *)(iVar3 + iVar11 * 4);
        *(int *)((int)piVar7 + 0x169b) = *(int *)((int)piVar7 + 0x169b) + (uVar8 + iVar17) * uVar15;
        if (iVar9 != 0) {
          *(uint *)((int)piVar7 + 0x169f) =
               *(int *)((int)piVar7 + 0x169f) +
               ((uint)*(ushort *)(iVar9 + 2 + iVar11 * 4) + iVar17) * uVar15;
        }
      }
      param_1 = param_1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_1c != 0) {
      do {
        iVar9 = uVar18 - 1;
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb32);
        sVar2 = *(short *)((int)piVar7 + iVar9 * 2 + 0xb32);
        while (sVar2 == 0) {
          psVar12 = psVar12 + -1;
          iVar9 = iVar9 + -1;
          sVar2 = *psVar12;
        }
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb32);
        *psVar12 = *psVar12 + -1;
        psVar12 = (short *)((int)piVar7 + iVar9 * 2 + 0xb34);
        *psVar12 = *psVar12 + 2;
        psVar12 = (short *)((int)piVar7 + uVar18 * 2 + 0xb32);
        *psVar12 = *psVar12 + -1;
        local_1c = local_1c + -2;
      } while (0 < local_1c);
      if (uVar18 != 0) {
        puVar13 = (ushort *)((int)piVar7 + uVar18 * 2 + 0xb32);
        param_2 = piVar14;
        do {
          piVar10 = (int *)(uint)*puVar13;
          if (piVar10 != (int *)0x0) {
            iVar9 = (int)piVar7 + (int)piVar14 * 4 + 0xb52;
            param_1 = piVar10;
            do {
              iVar5 = *(int *)(iVar9 + -4);
              piVar14 = (int *)((int)param_2 + -1);
              iVar9 = iVar9 + -4;
              if (iVar5 <= iVar4) {
                puVar1 = (ushort *)(iVar3 + 2 + iVar5 * 4);
                uVar8 = (uint)*puVar1;
                if (uVar8 != uVar18) {
                  *(uint *)((int)piVar7 + 0x169b) =
                       *(int *)((int)piVar7 + 0x169b) +
                       (uVar18 - uVar8) * (uint)*(ushort *)(iVar3 + iVar5 * 4);
                  *puVar1 = (ushort)uVar18;
                }
                piVar10 = (int *)((int)param_1 - 1);
                param_1 = piVar10;
              }
              param_2 = piVar14;
            } while (piVar10 != (int *)0x0);
          }
          uVar18 = uVar18 - 1;
          puVar13 = puVar13 + -1;
        } while (uVar18 != 0);
      }
    }
  }
  return;
}


