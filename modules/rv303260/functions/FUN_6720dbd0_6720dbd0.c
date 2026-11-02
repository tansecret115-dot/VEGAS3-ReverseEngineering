/* Module: rv303260.dll
   Function: FUN_6720dbd0
   Address: 6720dbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_6720dbd0(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  FILE *_File;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  float *pfVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  char local_204 [260];
  undefined1 local_100 [8];
  float local_f8 [30];
  uint local_80 [8];
  uint local_60 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  char *local_38;
  int local_34;
  uint *local_30;
  FILE *local_2c;
  int *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  local_38 = (char *)(param_1 + 0x1d2);
  local_34 = param_1;
  _File = fopen(local_38,&DAT_67215418);
  if (_File != (FILE *)0x0) {
    fprintf(_File,s____Video_Analysis_File_67215400);
    local_18 = 0;
    if (*(short *)(param_1 + 0xf4) != 0) {
      local_28 = (int *)(param_1 + 8);
      do {
        iVar1 = *local_28;
        local_20 = *(int *)(iVar1 + 0x225);
        if (*(int *)(iVar1 + 0xea) == 0) {
          fVar13 = (float10)_DAT_67213448 / (float10)*(double *)(iVar1 + 0x19e);
          local_8 = 2;
          pfVar9 = local_f8;
          iVar11 = 0x1e;
          local_24 = *(int *)(iVar1 + 0xe2) * *(int *)(iVar1 + 0xe6);
          do {
            fVar14 = (float10)_DAT_67213458 /
                     ((float10)(int)local_8 * (float10)*(double *)(iVar1 + 0x1b2) +
                     ((float10)_DAT_67213450 - (float10)(int)local_8) *
                     (float10)*(double *)(iVar1 + 0x1aa));
            if (fVar14 <= fVar13) {
              fVar14 = fVar13;
            }
            *pfVar9 = (float)fVar14;
            local_8 = local_8 + 1;
            pfVar9 = pfVar9 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar3 = *(ushort *)(iVar1 + 0x9e);
          if (*(ushort *)(iVar1 + 0xb8) <= *(ushort *)(iVar1 + 0x9e)) {
            uVar3 = *(ushort *)(iVar1 + 0xb8);
          }
          local_80[0] = (uint)uVar3;
          uVar4 = *(ushort *)(iVar1 + 0xa0);
          if (*(ushort *)(iVar1 + 0xba) <= *(ushort *)(iVar1 + 0xa0)) {
            uVar4 = *(ushort *)(iVar1 + 0xba);
          }
          local_60[0] = (uint)uVar4;
          local_30 = (uint *)0x1;
          local_c = *(uint **)(local_34 + 0x2da);
          uVar6 = (uint)uVar4;
          if (local_c != (uint *)0x0) {
            local_8 = 0;
            puVar5 = (uint *)(local_34 + 0x2fe);
            do {
              uVar6 = local_60[0];
              if (((*(uint *)((int)local_80 + local_8) < puVar5[-8]) ||
                  (*(uint *)((int)local_60 + local_8) < *puVar5)) || (0x17 < local_8)) break;
              *(uint *)((int)local_80 + local_8 + 4) = puVar5[-8];
              *(uint *)((int)local_60 + local_8 + 4) = *puVar5;
              puVar10 = (uint *)((int)local_30 + 1);
              local_8 = local_8 + 4;
              bVar12 = local_30 < local_c;
              puVar5 = puVar5 + 1;
              local_30 = puVar10;
            } while (bVar12);
          }
          uVar6 = uVar6 * uVar3;
          if (*(uint *)(local_34 + 0x36e) <= uVar6 && uVar6 - *(uint *)(local_34 + 0x36e) != 0) {
            local_80[0] = 0;
            local_60[0] = 0;
          }
          if (local_24 < 0x7801) {
            if (_DAT_67213460 < *(double *)(iVar1 + 0x19e)) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
          }
          else if (_DAT_67213468 < *(double *)(iVar1 + 0x19e)) {
            uVar7 = 1;
            if (_DAT_67213460 < *(double *)(iVar1 + 0x19e)) {
              uVar7 = 3;
            }
          }
          else {
            uVar7 = 0;
          }
          *(undefined4 *)(iVar1 + 0x243) = uVar7;
          FUN_6720c400(local_38,local_204);
          local_2c = fopen(local_204,&DAT_672153fc);
          if (local_2c == (FILE *)0x0) {
            return;
          }
          if (*(int *)(iVar1 + 0x235) != 0) {
            local_40 = FUN_6720c650(local_2c);
            uStack_3c = 0;
            *(undefined4 *)(iVar1 + 0xfa) = local_40;
            uVar7 = ftol();
            *(undefined4 *)(iVar1 + 0xfa) = uVar7;
          }
          fprintf(_File,s____Video_Stream_672153e8);
          pcVar8 = s____Variable_Bit_Rate_672153d0;
          if (local_20 == 0) {
            pcVar8 = s____Constant_Bit_Rate_672153b8;
          }
          fprintf(_File,pcVar8);
          fprintf(_File,s_Stream__d________________________6721538c,local_18);
          fprintf(_File,s_FileVersionNumber____d__67215370,0);
          fprintf(_File,s_Codec___RV30__67215360);
          fprintf(_File,s_MaxBFrames____d__6721534c,*(undefined4 *)(iVar1 + 0x243));
          fprintf(_File,s_CodingMode____d___s_6721532c,*(undefined4 *)(iVar1 + 0xea),
                  s__Video__67215344);
          fprintf(_File,s_AvgBitrate____d__67215318,*(undefined4 *)(iVar1 + 0xfa));
          iVar11 = *(int *)(iVar1 + 0xfe);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar1 + 0xfa);
          }
          fprintf(_File,s_MaxBitrate____d__67215304,iVar11);
          fprintf(_File,s_MinQP___2__672152f8);
          fprintf(_File,s_MaxQP___31__672152e8);
          fprintf(_File,s_KeyFrameRate____d__672151c8,*(undefined4 *)(iVar1 + 0x17a));
          local_1c = FUN_6720c780(local_24,local_2c);
          local_14 = FUN_6720c5d0(local_1c + 2);
          if (local_14 == (void *)0x0) {
            return;
          }
          FUN_6720ca30(local_24,local_2c,(int)local_14);
          if (*(int *)(iVar1 + 0x229) == 0) {
            uVar6 = *(int *)(iVar1 + 0x102) << 1;
          }
          else {
            uVar6 = 0x40000000;
          }
          FUN_6720ce10(*(uint *)(iVar1 + 0xfa),uVar6,local_100,*(int *)(iVar1 + 0x243),local_1c,
                       (int)local_14);
          local_8 = 0;
          if (local_1c != 0) {
            local_c = (uint *)((int)local_14 + 8);
            do {
              uVar6 = *local_c;
              uVar2 = local_c[-1];
              if (uVar6 < uVar2) {
                iVar11 = (uVar6 - uVar2) + -1;
              }
              else {
                iVar11 = uVar6 - uVar2;
              }
              if ((iVar11 != 0) && (local_c[1] != 0)) {
                if (local_8 == 0) {
                  local_10 = (uint *)0x0;
                }
                else {
                  local_10 = (uint *)((int)local_c - 0x45);
                }
                if (*(int *)((int)local_c + 0x41) == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = (int)local_c + 0x35;
                }
                FUN_6720d130((int)(local_c + -2),iVar11,local_10,*(float *)(iVar1 + 0xfa),
                             *(int *)(iVar1 + 0x235),local_24,*(undefined4 *)(iVar1 + 0x243),
                             local_20);
              }
              local_8 = local_8 + 1;
              local_c = (uint *)((int)local_c + 0x3d);
            } while (local_8 < local_1c);
          }
          local_8 = 0;
          if (local_1c != 0) {
            local_10 = (uint *)((int)local_14 + 8);
            do {
              uVar6 = *local_10;
              uVar2 = local_10[-1];
              if (uVar6 < uVar2) {
                iVar11 = (uVar6 - uVar2) + -1;
              }
              else {
                iVar11 = uVar6 - uVar2;
              }
              if ((iVar11 != 0) && (local_10[1] != 0)) {
                if (local_8 == 0) {
                  local_c = (uint *)0x0;
                }
                else {
                  local_c = (uint *)((int)local_10 - 0x45);
                }
                if (*(int *)((int)local_10 + 0x41) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (int)local_10 + 0x35;
                }
                FUN_6720d450((int)(local_10 + -2),uVar6,local_c,*(uint *)(iVar1 + 0xfa),
                             *(int *)(iVar1 + 0x235),*(uint *)(iVar1 + 0xe2),*(uint *)(iVar1 + 0xe6)
                             ,*(int *)(iVar1 + 0x10a),_File,*(uint *)(iVar1 + 0x19a),
                             *(uint *)(iVar1 + 0x17a),*(int *)(iVar1 + 0x253),local_20,
                             (int)local_100,*(int *)(iVar1 + 0x243),(int)local_30,local_80,local_60)
                ;
              }
              local_8 = local_8 + 1;
              local_10 = (uint *)((int)local_10 + 0x3d);
            } while (local_8 < local_1c);
          }
          free(local_14);
          fclose(local_2c);
        }
        else {
          fprintf(_File,s____Non_Video_Stream_672152d0);
          pcVar8 = s____Variable_Bit_Rate_672153d0;
          if (local_20 == 0) {
            pcVar8 = s____Constant_Bit_Rate_672153b8;
          }
          fprintf(_File,pcVar8);
          fprintf(_File,s_Stream__d________________________6721538c,local_18);
          fprintf(_File,s_FileVersionNumber____d__67215370,0);
          fprintf(_File,s_Codec___RV30__67215360);
          fprintf(_File,s_CodingMode____d___s_6721532c,*(undefined4 *)(iVar1 + 0xea),
                  s__Slide_show__672152c0);
          fprintf(_File,s_AvgBitrate____d__67215318,*(undefined4 *)(iVar1 + 0xfa));
          iVar11 = *(int *)(iVar1 + 0xfe);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar1 + 0xfa);
          }
          fprintf(_File,s_MaxBitrate____d__67215304,iVar11);
          fprintf(_File,s_MinQP___2__672152f8);
          fprintf(_File,s_MaxQP___31__672152e8);
        }
        local_28 = local_28 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < *(ushort *)(local_34 + 0xf4));
    }
    fprintf(_File,&DAT_672152bc);
    fclose(_File);
    remove(local_204);
  }
  return;
}


