/* Module: mpgvout.003
   Function: FUN_100265b4
   Address: 100265b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100265b4(int param_1)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  iVar9 = *(int *)(param_1 + 0x57c);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (0 < iVar9) {
    do {
      pcVar4 = (char *)(*(int *)(param_1 + 0x6a4) + iVar5 * 0x3c);
      if (*pcVar4 == '\0') {
        bVar2 = pcVar4[1];
        if ((bVar2 & 1) == 0) {
          if ((bVar2 & 2) == 0) {
            local_1c = local_1c + 1;
          }
        }
        else {
          local_18 = local_18 + 1;
        }
      }
      else {
        local_14 = local_14 + 1;
        bVar2 = pcVar4[1];
      }
      uVar6 = 0;
      iVar5 = iVar5 + 1;
      if (0 < *(int *)(param_1 + 0x54c)) {
        do {
          if ((*(uint *)(pcVar4 + 8) >> (uVar6 & 0x1f) & 1) != 0) {
            local_20 = local_20 + 1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(param_1 + 0x54c));
      }
      if ((bVar2 & 8) == 0) {
        if ((bVar2 & 4) != 0) {
          local_2c = local_2c + 1;
        }
      }
      else if ((bVar2 & 4) == 0) {
        local_28 = local_28 + 1;
      }
      else {
        local_24 = local_24 + 1;
      }
    } while (iVar5 < iVar9);
  }
  fprintf(DAT_10035734,"\npicture statistics:\n");
  dVar1 = (double)iVar9;
  fprintf(DAT_10035734," # of intra coded macroblocks:  %4d (%.1f%%)\n",local_18,
          ((double)local_18 * _DAT_100265ac) / (double)iVar9);
  fprintf(DAT_10035734," # of coded blocks:             %4d (%.1f%%)\n",local_20,
          ((double)local_20 * _DAT_100265ac) / (double)(iVar9 * *(int *)(param_1 + 0x54c)));
  fprintf(DAT_10035734," # of not coded macroblocks:    %4d (%.1f%%)\n",local_1c,
          ((double)local_1c * _DAT_100265ac) / dVar1);
  fprintf(DAT_10035734," # of skipped macroblocks:      %4d (%.1f%%)\n",local_14,
          ((double)local_14 * _DAT_100265ac) / dVar1);
  fprintf(DAT_10035734," # of forw. pred. macroblocks:  %4d (%.1f%%)\n",local_28,
          ((double)local_28 * _DAT_100265ac) / dVar1);
  fprintf(DAT_10035734," # of backw. pred. macroblocks: %4d (%.1f%%)\n",local_2c,
          ((double)local_2c * _DAT_100265ac) / dVar1);
  fprintf(DAT_10035734," # of interpolated macroblocks: %4d (%.1f%%)\n",local_24,
          ((double)local_24 * _DAT_100265ac) / dVar1);
  fprintf(DAT_10035734,"\nmacroblock_type map:\n");
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x570)) {
    local_38 = 0;
    do {
      iVar5 = iVar5 + 1;
      if (0 < *(int *)(param_1 + 0x560)) {
        iVar7 = 0;
        iVar9 = local_38;
        do {
          pcVar4 = (char *)(iVar9 + *(int *)(param_1 + 0x6a4));
          bVar2 = pcVar4[1];
          if (*pcVar4 == '\0') {
            if ((bVar2 & 1) == 0) {
              bVar3 = bVar2 & 0xc;
              if (bVar3 == 8) {
                if (pcVar4[2] == '\x01') {
                  iVar8 = 0x66;
                }
                else {
                  iVar8 = 0x46;
                  if (pcVar4[2] == '\x03') {
                    iVar8 = 0x70;
                  }
                }
              }
              else if (bVar3 < 9) {
                if (bVar3 == 4) {
                  iVar8 = 0x42;
                  if (pcVar4[2] == '\x01') {
                    iVar8 = 0x62;
                  }
                }
                else {
LAB_10026918:
                  iVar8 = 0x30;
                }
              }
              else {
                if (bVar3 != 0xc) goto LAB_10026918;
                iVar8 = 0x44;
                if (pcVar4[2] == '\x01') {
                  iVar8 = 100;
                }
              }
            }
            else {
              iVar8 = 0x49;
            }
          }
          else {
            iVar8 = 0x53;
          }
          putc(iVar8,DAT_10035734);
          if ((bVar2 & 0x10) == 0) {
            if ((bVar2 & 3) == 0) {
              iVar8 = 0x4e;
            }
            else {
              iVar8 = 0x20;
            }
          }
          else {
            iVar8 = 0x51;
          }
          putc(iVar8,DAT_10035734);
          iVar9 = iVar9 + 0x3c;
          iVar7 = iVar7 + 1;
          putc(0x20,DAT_10035734);
          local_38 = local_38 + 0x3c;
        } while (iVar7 < *(int *)(param_1 + 0x560));
      }
      putc(10,DAT_10035734);
    } while (iVar5 < *(int *)(param_1 + 0x570));
  }
  fprintf(DAT_10035734,"\nmquant map:\n");
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x570)) {
    iVar9 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar8 = 0;
      iVar7 = iVar9;
      if (0 < *(int *)(param_1 + 0x560)) {
        do {
          if ((iVar8 == 0) ||
             (*(int *)(*(int *)(param_1 + 0x6a4) + 4 + iVar9) !=
              *(int *)(*(int *)(param_1 + 0x6a4) + -0x38 + iVar9))) {
            pcVar4 = "%3d";
          }
          else {
            pcVar4 = "   ";
          }
          fprintf(DAT_10035734,pcVar4);
          iVar9 = iVar9 + 0x3c;
          iVar7 = iVar7 + 0x3c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x560));
      }
      putc(10,DAT_10035734);
      iVar9 = iVar7;
    } while (iVar5 < *(int *)(param_1 + 0x570));
  }
  return;
}


