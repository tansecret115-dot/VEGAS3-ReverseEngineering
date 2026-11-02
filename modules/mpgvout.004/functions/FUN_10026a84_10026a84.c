/* Module: mpgvout.004
   Function: FUN_10026a84
   Address: 10026a84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10026a84(int param_1)

{
  double dVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x57c);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0 < iVar2) {
    do {
      pcVar4 = (char *)(*(int *)(param_1 + 0x6a4) + iVar7 * 0x3c);
      iVar8 = local_20;
      if (*pcVar4 == '\0') {
        bVar6 = pcVar4[1];
        if ((bVar6 & 1) == 0) {
          iVar8 = local_20 + 1;
          if ((bVar6 & 2) != 0) {
            iVar8 = local_20;
          }
        }
        else {
          local_1c = local_1c + 1;
        }
      }
      else {
        local_18 = local_18 + 1;
        bVar6 = pcVar4[1];
      }
      local_20 = iVar8;
      iVar8 = 0;
      iVar7 = iVar7 + 1;
      if (0 < *(int *)(param_1 + 0x54c)) {
        do {
          bVar3 = (byte)iVar8;
          iVar8 = iVar8 + 1;
          iVar9 = local_24 + 1;
          if ((*(int *)(pcVar4 + 8) >> (bVar3 & 0x1f) & 1U) == 0) {
            iVar9 = local_24;
          }
          local_24 = iVar9;
        } while (iVar8 < *(int *)(param_1 + 0x54c));
      }
      iVar8 = local_30;
      if ((bVar6 & 8) == 0) {
        iVar8 = local_30 + 1;
        if ((bVar6 & 4) == 0) {
          iVar8 = local_30;
        }
      }
      else if ((bVar6 & 4) == 0) {
        local_2c = local_2c + 1;
      }
      else {
        local_28 = local_28 + 1;
      }
      local_30 = iVar8;
    } while (iVar7 < iVar2);
  }
  fprintf(DAT_10035734,"\npicture statistics:\n");
  dVar1 = (double)iVar2;
  fprintf(DAT_10035734," # of intra coded macroblocks:  %4d (%.1f%%)\n",local_1c,
          ((double)local_1c * _DAT_10026a7c) / (double)iVar2);
  fprintf(DAT_10035734," # of coded blocks:             %4d (%.1f%%)\n",local_24,
          ((double)local_24 * _DAT_10026a7c) / (double)(*(int *)(param_1 + 0x54c) * iVar2));
  fprintf(DAT_10035734," # of not coded macroblocks:    %4d (%.1f%%)\n",local_20,
          ((double)local_20 * _DAT_10026a7c) / dVar1);
  fprintf(DAT_10035734," # of skipped macroblocks:      %4d (%.1f%%)\n",local_18,
          ((double)local_18 * _DAT_10026a7c) / dVar1);
  fprintf(DAT_10035734," # of forw. pred. macroblocks:  %4d (%.1f%%)\n",local_2c,
          ((double)local_2c * _DAT_10026a7c) / dVar1);
  fprintf(DAT_10035734," # of backw. pred. macroblocks: %4d (%.1f%%)\n",local_30,
          ((double)local_30 * _DAT_10026a7c) / dVar1);
  fprintf(DAT_10035734," # of interpolated macroblocks: %4d (%.1f%%)\n",local_28,
          ((double)local_28 * _DAT_10026a7c) / dVar1);
  fprintf(DAT_10035734,"\nmacroblock_type map:\n");
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x570)) {
    local_40 = 0;
    do {
      iVar8 = 0;
      iVar2 = iVar2 + 1;
      iVar7 = local_40;
      if (0 < *(int *)(param_1 + 0x560)) {
        do {
          pcVar4 = (char *)(iVar7 + *(int *)(param_1 + 0x6a4));
          bVar6 = pcVar4[1];
          if (*pcVar4 == '\0') {
            if ((bVar6 & 1) == 0) {
              bVar3 = bVar6 & 0xc;
              if (bVar3 == 8) {
                if (pcVar4[2] == '\x01') {
                  iVar9 = 0x66;
                }
                else {
                  iVar9 = 0x46;
                  if (pcVar4[2] == '\x03') {
                    iVar9 = 0x70;
                  }
                }
              }
              else {
                if (bVar3 < 9) {
                  if (bVar3 == 4) {
                    iVar5 = 0x62;
                    iVar9 = 0x42;
LAB_10026e0f:
                    if (pcVar4[2] == '\x01') {
                      iVar9 = iVar5;
                    }
                    goto LAB_10026e27;
                  }
                }
                else if (bVar3 == 0xc) {
                  iVar5 = 100;
                  iVar9 = 0x44;
                  goto LAB_10026e0f;
                }
                iVar9 = 0x30;
              }
            }
            else {
              iVar9 = 0x49;
            }
          }
          else {
            iVar9 = 0x53;
          }
LAB_10026e27:
          putc(iVar9,DAT_10035734);
          if ((bVar6 & 0x10) == 0) {
            if ((bVar6 & 3) == 0) {
              iVar9 = 0x4e;
            }
            else {
              iVar9 = 0x20;
            }
          }
          else {
            iVar9 = 0x51;
          }
          putc(iVar9,DAT_10035734);
          iVar8 = iVar8 + 1;
          putc(0x20,DAT_10035734);
          local_40 = local_40 + 0x3c;
          iVar7 = iVar7 + 0x3c;
        } while (iVar8 < *(int *)(param_1 + 0x560));
      }
      putc(10,DAT_10035734);
    } while (iVar2 < *(int *)(param_1 + 0x570));
  }
  fprintf(DAT_10035734,"\nmquant map:\n");
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x570)) {
    iVar7 = 0;
    do {
      iVar9 = 0;
      iVar2 = iVar2 + 1;
      iVar8 = iVar7;
      if (0 < *(int *)(param_1 + 0x560)) {
        do {
          if ((iVar9 == 0) ||
             (*(int *)(*(int *)(param_1 + 0x6a4) + 4 + iVar7) !=
              *(int *)(*(int *)(param_1 + 0x6a4) + -0x38 + iVar7))) {
            pcVar4 = "%3d";
          }
          else {
            pcVar4 = "   ";
          }
          fprintf(DAT_10035734,pcVar4);
          iVar7 = iVar7 + 0x3c;
          iVar8 = iVar8 + 0x3c;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x560));
      }
      putc(10,DAT_10035734);
      iVar7 = iVar8;
    } while (iVar2 < *(int *)(param_1 + 0x570));
  }
  return;
}


