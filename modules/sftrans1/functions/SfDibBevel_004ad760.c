/* Module: sftrans1.dll
   Function: SfDibBevel
   Address: 004ad760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibBevel(void *,struct tagRECT *,long,struct tagRECT
   *,long,float,float,float,struct tSFDIBPIXEL const *) */

long SfDibBevel(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,long param_5,
               float param_6,float param_7,float param_8,tSFDIBPIXEL *param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  float local_170;
  char local_16c [8];
  float local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char local_120 [8];
  int local_118 [5];
  undefined1 local_104 [16];
  undefined1 local_f4 [16];
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  int local_c4 [5];
  int local_b0 [20];
  undefined1 local_60 [16];
  int local_50 [20];
  
                    /* 0xad760  18  ?SfDibBevel@@YGJPAXPAUtagRECT@@J1JMMMPBUtSFDIBPIXEL@@@Z */
  iVar2 = FUN_004cdc70(local_60,&local_158,&local_174,&local_184,&local_184,param_1,param_2,param_3,
                       param_4,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar2) {
    if (param_5 == 4) {
      local_150 = 0;
      local_14c = 0xbf800000;
      fVar9 = (float10)fsin((float10)param_8 * (float10)_DAT_0055d680);
      local_148 = 0x3f800000;
      local_138 = 0;
      local_134 = 0x3f800000;
      local_130 = 0x3f800000;
      local_144 = 0xbf800000;
      local_140 = 0;
      local_13c = 0x3f800000;
      local_12c = 0x3f800000;
      local_128 = 0;
      local_124 = 0x3f800000;
      local_15c = 0x3fc00000;
      local_164 = (float)fVar9;
      fVar9 = (float10)fcos((float10)param_8 * (float10)_DAT_0055d680);
      local_160 = (float)-fVar9;
      local_178 = iVar2;
      FUN_004dade0();
      FUN_004dade0();
      FUN_004dade0();
      FUN_004dade0();
      FUN_004dade0();
      fVar9 = (float10)FUN_004dad70(&local_164,&local_150);
      FUN_004ad6f0(local_f4,param_9,(double)fVar9);
      fVar9 = (float10)FUN_004dad70(&local_164,&local_138);
      FUN_004ad6f0(local_e4,param_9,(double)fVar9);
      fVar9 = (float10)FUN_004dad70(&local_164,&local_144);
      FUN_004ad6f0(local_d4,param_9,(double)fVar9);
      fVar9 = (float10)FUN_004dad70(&local_164,&local_12c);
      FUN_004ad6f0(local_104,param_9,(double)fVar9);
      FUN_004adbf0(local_120,local_118,local_b0,local_174,param_7,local_f4,local_e4);
      local_17c = 0;
      local_180 = 0;
      if (0 < local_174) {
        do {
          iVar2 = local_118[local_17c];
          local_154 = local_184;
          piVar7 = local_118 + local_17c;
          while (iVar2 <= local_180) {
            local_17c = local_17c + 1;
            piVar7 = piVar7 + 1;
            if (local_17c == 4) break;
            iVar2 = *piVar7;
          }
          iVar3 = local_17c;
          iVar2 = local_180;
          if (local_180 < local_118[1]) {
LAB_004ad9cf:
            local_170 = ((float)iVar2 * param_6) / param_7;
          }
          else {
            if (local_118[3] <= local_180) {
              iVar2 = (local_174 - local_180) + -1;
              goto LAB_004ad9cf;
            }
            local_170 = param_6;
          }
          FUN_004adbf0(local_16c,local_c4,local_50,local_158,local_170,local_d4,local_104);
          cVar1 = local_120[iVar3];
          if (cVar1 != '\0') {
            iVar2 = 0;
            piVar7 = local_50 + 2;
            do {
              if (local_16c[iVar2] != -0x80) {
                if (local_16c[iVar2] == '\0') {
                  local_16c[iVar2] = cVar1;
                  piVar7[-2] = local_b0[iVar3 * 4];
                  piVar7[-1] = local_b0[iVar3 * 4 + 1];
                  *piVar7 = local_b0[iVar3 * 4 + 2];
                  piVar7[1] = local_b0[iVar3 * 4 + 3];
                }
                else {
                  iVar3 = ftol();
                  piVar7[-2] = iVar3;
                  iVar3 = ftol();
                  piVar7[-1] = iVar3;
                  iVar3 = ftol();
                  *piVar7 = iVar3;
                  piVar7[1] = 0x100;
                  iVar3 = local_17c;
                }
              }
              iVar2 = iVar2 + 1;
              piVar7 = piVar7 + 4;
            } while (iVar2 < 5);
          }
          iVar2 = 0;
          local_188 = 0;
          piVar7 = local_c4;
          piVar8 = local_50 + 1;
          do {
            if (local_16c[local_188] == '\0') {
              iVar2 = *piVar7;
            }
            else if (iVar2 < *piVar7) {
              pbVar6 = (byte *)(local_154 + 1 + iVar2 * 4);
              do {
                uVar4 = (uint)pbVar6[2];
                uVar5 = (int)((uint)pbVar6[-1] * piVar8[-1] +
                             ((int)((uint)pbVar6[-1] * piVar8[-1]) >> 0x1f & 0xffU)) >> 8;
                if ((int)uVar4 <= (int)uVar5) {
                  uVar5 = uVar4;
                }
                pbVar6[-1] = (byte)uVar5;
                uVar5 = (int)((uint)*pbVar6 * *piVar8 +
                             ((int)((uint)*pbVar6 * *piVar8) >> 0x1f & 0xffU)) >> 8;
                if ((int)uVar4 <= (int)uVar5) {
                  uVar5 = uVar4;
                }
                *pbVar6 = (byte)uVar5;
                uVar5 = (int)((uint)pbVar6[1] * piVar8[1] +
                             ((int)((uint)pbVar6[1] * piVar8[1]) >> 0x1f & 0xffU)) >> 8;
                if ((int)uVar4 <= (int)uVar5) {
                  uVar5 = uVar4;
                }
                pbVar6[1] = (byte)uVar5;
                iVar2 = iVar2 + 1;
                pbVar6 = pbVar6 + 4;
              } while (iVar2 < *piVar7);
            }
            local_188 = local_188 + 1;
            piVar8 = piVar8 + 4;
            piVar7 = piVar7 + 1;
          } while (local_188 < 5);
          local_184 = local_184 + param_3;
          local_180 = local_180 + 1;
          if (local_174 <= local_180) {
            return local_178;
          }
        } while( true );
      }
    }
    else {
      iVar2 = -0x7fffbfff;
    }
  }
  return iVar2;
}


