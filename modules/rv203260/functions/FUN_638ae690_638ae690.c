/* Module: rv203260.dll
   Function: FUN_638ae690
   Address: 638ae690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_638ae690(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  FILE *_File;
  uint *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  char local_1fc [260];
  undefined1 local_f8 [8];
  float local_f0 [30];
  uint local_78 [8];
  uint local_58 [8];
  char *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  void *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  FILE *local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_38 = (char *)(param_1 + 0x1ca);
  local_30 = param_1;
  _File = fopen(local_38,&DAT_638b532c);
  if (_File != (FILE *)0x0) {
    fprintf(_File,s____Video_Analysis_File_638b5314);
    local_18 = 0;
    if (*(short *)(param_1 + 0xf4) != 0) {
      local_34 = (int *)(param_1 + 8);
      do {
        iVar1 = *local_34;
        local_24 = *(int *)(iVar1 + 0x235);
        if (*(int *)(iVar1 + 0xea) == 0) {
          fVar13 = (float10)_DAT_638b3440 / (float10)*(double *)(iVar1 + 0x1a6);
          local_8 = 2;
          pfVar9 = local_f0;
          iVar11 = 0x1e;
          local_1c = *(int *)(iVar1 + 0xe2) * *(int *)(iVar1 + 0xe6);
          do {
            fVar14 = (float10)_DAT_638b3450 /
                     ((float10)(int)local_8 * (float10)*(double *)(iVar1 + 0x1ba) +
                     ((float10)_DAT_638b3448 - (float10)(int)local_8) *
                     (float10)*(double *)(iVar1 + 0x1b2));
            if (fVar14 <= fVar13) {
              fVar14 = fVar13;
            }
            *pfVar9 = (float)fVar14;
            local_8 = local_8 + 1;
            pfVar9 = pfVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar2 = *(ushort *)(iVar1 + 0x9e);
          if (*(ushort *)(iVar1 + 0xb8) <= *(ushort *)(iVar1 + 0x9e)) {
            uVar2 = *(ushort *)(iVar1 + 0xb8);
          }
          local_78[0] = (uint)uVar2;
          uVar3 = *(ushort *)(iVar1 + 0xa0);
          if (*(ushort *)(iVar1 + 0xba) <= *(ushort *)(iVar1 + 0xa0)) {
            uVar3 = *(ushort *)(iVar1 + 0xba);
          }
          local_58[0] = (uint)uVar3;
          local_2c = 1;
          local_10 = *(uint *)(local_30 + 0x2d2);
          uVar8 = (uint)uVar3;
          if (local_10 != 0) {
            local_8 = 0;
            puVar4 = (uint *)(local_30 + 0x2f6);
            do {
              uVar8 = local_58[0];
              if (((*(uint *)((int)local_78 + local_8) < puVar4[-8]) ||
                  (*(uint *)((int)local_58 + local_8) < *puVar4)) || (0x17 < local_8)) break;
              *(uint *)((int)local_78 + local_8 + 4) = puVar4[-8];
              *(uint *)((int)local_58 + local_8 + 4) = *puVar4;
              uVar10 = local_2c + 1;
              local_8 = local_8 + 4;
              bVar12 = local_2c < local_10;
              puVar4 = puVar4 + 1;
              local_2c = uVar10;
            } while (bVar12);
          }
          if (0x32000 < uVar8 * uVar2) {
            local_78[0] = 0;
            local_58[0] = 0;
          }
          if (*(int *)(iVar1 + 0x10a) == 1) {
            *(undefined4 *)(iVar1 + 0x24b) = 0;
          }
          else {
            if (local_1c < 0x7801) {
              if (_DAT_638b3458 < *(double *)(iVar1 + 0x1a6)) {
                uVar5 = 1;
              }
              else {
                uVar5 = 0;
              }
            }
            else if (_DAT_638b3460 < *(double *)(iVar1 + 0x1a6)) {
              uVar5 = 1;
              if (_DAT_638b3458 < *(double *)(iVar1 + 0x1a6)) {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 0;
            }
            *(undefined4 *)(iVar1 + 0x24b) = uVar5;
          }
          FUN_638ad160(local_38,local_1fc);
          local_14 = fopen(local_1fc,&DAT_638b5310);
          if (local_14 == (FILE *)0x0) {
            return;
          }
          local_10 = FUN_638ad330(*(uint *)(iVar1 + 0xfa),(int)local_f8,*(int *)(iVar1 + 0x24b),
                                  local_14);
          fprintf(_File,s____Video_Stream_638b52fc);
          pcVar6 = s____Variable_Bit_Rate_638b52e4;
          if (local_24 == 0) {
            pcVar6 = s____Constant_Bit_Rate_638b52cc;
          }
          fprintf(_File,pcVar6);
          fprintf(_File,s_Stream__d________________________638b52a0,local_18);
          fprintf(_File,s_FileVersionNumber____d__638b5284,0);
          pcVar6 = s_Codec___RV200__638b5274;
          if (*(int *)(iVar1 + 0x10a) != 1) {
            pcVar6 = s_Codec___RV201__638b5264;
          }
          fprintf(_File,pcVar6);
          fprintf(_File,s_MaxBFrames____d__638b5250,*(undefined4 *)(iVar1 + 0x24b));
          fprintf(_File,s_CodingMode____d___s_638b5230,*(undefined4 *)(iVar1 + 0xea),
                  s__Video__638b5248);
          fprintf(_File,s_AvgBitrate____d__638b521c,*(undefined4 *)(iVar1 + 0xfa));
          iVar11 = *(int *)(iVar1 + 0xfe);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar1 + 0xfa);
          }
          fprintf(_File,s_MaxBitrate____d__638b5208,iVar11);
          fprintf(_File,s_MinQP___2__638b51fc);
          fprintf(_File,s_MaxQP___31__638b51ec);
          fprintf(_File,s_QP_hat____d_638b51dc,local_10);
          fprintf(_File,s_KeyFrameRate____d__638b50dc,*(undefined4 *)(iVar1 + 0x182));
          iVar11 = FUN_638ad5b0(local_1c,local_14);
          local_20 = iVar11 + 2;
          local_28 = FUN_638ad540(local_20);
          if (local_28 == (void *)0x0) {
            return;
          }
          FUN_638ad860(local_1c,local_14,(int)local_28);
          local_8 = 0;
          if (local_20 != 0) {
            local_c = (uint *)((int)local_28 + 4);
            do {
              uVar8 = local_c[1];
              uVar10 = *local_c;
              if (uVar8 < uVar10) {
                iVar11 = (uVar8 - uVar10) + -1;
              }
              else {
                iVar11 = uVar8 - uVar10;
              }
              if ((iVar11 != 0) && (local_c[2] != 0)) {
                if (local_8 == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = (int)local_c + -0x3d;
                }
                if (*(int *)((int)local_c + 0x41) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = (int)local_c + 0x35;
                }
                FUN_638adc40((int)(local_c + -1),iVar7,iVar11,*(float *)(iVar1 + 0xfa),local_1c,
                             *(undefined4 *)(iVar1 + 0x24b),local_10,local_24);
              }
              local_8 = local_8 + 1;
              local_c = (uint *)((int)local_c + 0x39);
            } while (local_8 < local_20);
          }
          local_8 = 0;
          if (local_20 != 0) {
            local_c = (uint *)((int)local_28 + 4);
            do {
              uVar8 = local_c[1];
              uVar10 = *local_c;
              if (uVar8 < uVar10) {
                iVar11 = (uVar8 - uVar10) + -1;
              }
              else {
                iVar11 = uVar8 - uVar10;
              }
              if ((iVar11 != 0) && (local_c[2] != 0)) {
                if (local_8 == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = (int)local_c + -0x3d;
                }
                if (*(int *)((int)local_c + 0x41) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (int)local_c + 0x35;
                }
                FUN_638adfa0((int)(local_c + -1),uVar8,iVar11,*(int *)(iVar1 + 0xfa),
                             *(uint *)(iVar1 + 0xe2),*(uint *)(iVar1 + 0xe6),*(int *)(iVar1 + 0x10a)
                             ,_File,*(uint *)(iVar1 + 0x1a2),*(uint *)(iVar1 + 0x182),
                             *(int *)(iVar1 + 0x25b),local_10,local_24,(int)local_f8,
                             *(int *)(iVar1 + 0x24b),local_2c,local_78,local_58);
              }
              local_8 = local_8 + 1;
              local_c = (uint *)((int)local_c + 0x39);
            } while (local_8 < local_20);
          }
          free(local_28);
          fclose(local_14);
        }
        else {
          fprintf(_File,s____Non_Video_Stream_638b51c4);
          pcVar6 = s____Variable_Bit_Rate_638b52e4;
          if (local_24 == 0) {
            pcVar6 = s____Constant_Bit_Rate_638b52cc;
          }
          fprintf(_File,pcVar6);
          fprintf(_File,s_Stream__d________________________638b52a0,local_18);
          fprintf(_File,s_FileVersionNumber____d__638b5284,0);
          pcVar6 = s_Codec___RV200__638b5274;
          if (*(int *)(iVar1 + 0x10a) != 1) {
            pcVar6 = s_Codec___RV201__638b5264;
          }
          fprintf(_File,pcVar6);
          fprintf(_File,s_CodingMode____d___s_638b5230,*(undefined4 *)(iVar1 + 0xea),
                  s__Slide_show__638b51b4);
          fprintf(_File,s_AvgBitrate____d__638b521c,*(undefined4 *)(iVar1 + 0xfa));
          iVar11 = *(int *)(iVar1 + 0xfe);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar1 + 0xfa);
          }
          fprintf(_File,s_MaxBitrate____d__638b5208,iVar11);
          fprintf(_File,s_MinQP___2__638b51fc);
          fprintf(_File,s_MaxQP___31__638b51ec);
        }
        local_34 = local_34 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < *(ushort *)(local_30 + 0xf4));
    }
    fprintf(_File,&DAT_638b51b0);
    fclose(_File);
    remove(local_1fc);
  }
  return;
}


