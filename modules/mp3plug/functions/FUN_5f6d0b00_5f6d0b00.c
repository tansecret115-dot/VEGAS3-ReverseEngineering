/* Module: mp3plug.dll
   Function: FUN_5f6d0b00
   Address: 5f6d0b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_5f6d0b00(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  int iVar12;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00001280;
  int in_stack_00001288;
  int in_stack_0000128c;
  int in_stack_00001290;
  int *in_stack_00001294;
  int *in_stack_00001298;
  int in_stack_0000129c;
  int *in_stack_000012a0;
  
  FUN_5f72a200();
  *in_stack_00001294 = 0;
  *in_stack_00001298 = 0;
  if ((int)in_stack_00001280[0x18] <= in_stack_00001290) {
    do {
      iVar7 = in_stack_00001280[0x32];
      if (iVar7 == 0) {
        if ((in_stack_00001280[0x33] != 0) && (in_stack_00001280[0x15] == 0)) {
          if (in_stack_00001288 == 0) {
            in_stack_00001280[0x32] = 1;
          }
          else {
            if (*in_stack_00001294 == in_stack_00001288) {
              return (undefined **)0x0;
            }
            pfVar4 = (float *)in_stack_00001280[0x13];
            (*(code *)in_stack_00001280[8])();
            iVar7 = in_stack_00001280[4];
            if (iVar7 == in_stack_00001280[9]) {
              FUN_5f6d8d60(_DAT_5f75c130 / (float)in_stack_00001280[7],pfVar4,
                           in_stack_00001280[0x15]);
            }
            else {
              fVar6 = (float)iVar7;
              fVar1 = (float)in_stack_00001280[7];
              fVar5 = (float)_DAT_5f75c138;
              iVar8 = 0;
              iVar11 = 0;
              iVar9 = (int)in_stack_00001280[0x15] / iVar7;
              if (0 < iVar9) {
                do {
                  fVar2 = pfVar4[iVar8];
                  iVar8 = iVar8 + 1;
                  iVar9 = 1;
                  if (1 < iVar7) {
                    iVar12 = (iVar7 - 1U & 0xfffffffe) + 1;
                    if (1 < iVar12) {
                      do {
                        fVar2 = fVar2 + pfVar4[iVar8] + pfVar4[iVar8 + 1];
                        iVar9 = iVar9 + 2;
                        iVar8 = iVar8 + 2;
                      } while (iVar9 < iVar12);
                    }
                    for (; iVar9 < iVar7; iVar9 = iVar9 + 1) {
                      fVar2 = fVar2 + pfVar4[iVar8];
                      iVar8 = iVar8 + 1;
                    }
                  }
                  pfVar4[iVar11] = fVar2 * (fVar5 / (fVar6 * fVar1));
                  iVar7 = in_stack_00001280[4];
                  iVar11 = iVar11 + 1;
                  iVar9 = (int)in_stack_00001280[0x15] / iVar7;
                } while (iVar11 < iVar9);
              }
              in_stack_00001280[0x15] = iVar9;
            }
            *in_stack_00001294 = *in_stack_00001294 + in_stack_00000010;
          }
        }
        iVar7 = FUN_5f6dc4a0((int)(in_stack_00001280 + 0x1a),in_stack_00001280[0x13],
                             in_stack_00001280[0x15],in_stack_00001280[0x16],
                             in_stack_00001280[9] * 0x240);
        if (iVar7 == 2) {
          in_stack_00001280[0x33] = 1;
        }
        else {
          in_stack_00001280[0x33] = 0;
        }
        if (in_stack_00001280[0x33] == 0) goto LAB_5f6d0c3d;
        in_stack_00001280[0x15] = 0;
        iVar7 = *in_stack_00001298;
      }
      else {
        if (iVar7 == 1) {
          iVar7 = FUN_5f6dd580((int)(in_stack_00001280 + 0x1a));
          iVar8 = FUN_5f6dd580((int)(in_stack_00001280 + 0x1a));
          FUN_5f6d8bb0(0,in_stack_00001280[0x16] + iVar7 * 4,in_stack_00001280[9] * 0x240 - iVar8);
          iVar7 = FUN_5f6dd580((int)(in_stack_00001280 + 0x1a));
          in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
          in_stack_00001280[0x34] = in_stack_00001280[0x34] - iVar7 / (int)in_stack_00001280[9];
        }
        else if (iVar7 == 2) {
          FUN_5f6d8bb0(0,in_stack_00001280[0x16],in_stack_00001280[9] * 0x240);
          if ((int)in_stack_00001280[0x34] < 1) {
            in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
            goto LAB_5f6d1130;
          }
          in_stack_00001280[0x34] = in_stack_00001280[0x34] + -0x240;
        }
        else if (iVar7 == 3) {
LAB_5f6d1130:
          if (((int)in_stack_00001280[0x35] / 0x240) % (int)in_stack_00001280[0x39] == 0) {
            in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
            goto LAB_5f6d10e8;
          }
        }
        else {
          if (iVar7 == 4) {
LAB_5f6d10e8:
            if (0 < (int)in_stack_00001280[0x3a]) {
              in_stack_00001280[0x3a] = in_stack_00001280[0x3a] + -1;
              goto LAB_5f6d0c3d;
            }
            in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
          }
          else if (iVar7 != 5) {
            if (iVar7 != 6) {
              *in_stack_00001298 = 0;
              return (undefined **)0x0;
            }
            goto LAB_5f6d0bb9;
          }
          if (((int)in_stack_00001280[0x35] / 0x240) % (int)in_stack_00001280[0x37] == 0) {
            in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
LAB_5f6d0bb9:
            iVar7 = FUN_5f6da920(in_stack_00001280[2]);
            if (iVar7 != 0) {
              *in_stack_00001298 = *in_stack_00001298 + in_stack_00000014;
              in_stack_00001280[0x32] = in_stack_00001280[0x32] + 1;
              return (undefined **)0x0;
            }
            ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x316,
                                    (undefined *)0x0,s_FlushBitstreamEncoder___failed_5f75c3c0);
            return ppuVar10;
          }
          in_stack_00001280[0x34] = in_stack_00001280[0x34] + -0x240;
        }
LAB_5f6d0c3d:
        if (1 < (int)in_stack_00001280[9]) {
          puVar3 = (undefined4 *)in_stack_00001280[0x16];
          FUN_5f6d5160(puVar3,2,(undefined4 *)&stack0x00000018,1,0x240);
          FUN_5f6d5160(puVar3 + 1,2,(undefined4 *)&stack0x00000918,1,0x240);
          FUN_5f6d5090((undefined4 *)&stack0x00000018,puVar3,0x480);
        }
        iVar7 = FUN_5f6dbe10((uint *)*in_stack_00001280,(undefined4 *)in_stack_00001280[0x16]);
        if (iVar7 != 0) {
          ppuVar10 = (undefined **)
                     FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,0x32c,0,iVar7);
          return ppuVar10;
        }
        if (in_stack_000012a0 == (int *)0x0) {
          if (((int)in_stack_00001280[0x10] < 1) ||
             ((int)in_stack_00001280[0x36] %
              (int)(in_stack_00001280[0x10] * in_stack_00001280[0x39]) != 0)) {
            iVar7 = FUN_5f6d9c30(in_stack_00001280[2],(int *)*in_stack_00001280,0,
                                 (undefined4 *)&stack0x00001218);
            if (iVar7 == 0) {
              ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x343,
                                      (undefined *)0x0,s_AdvanceBitstreamEncoder___failed_5f75c3e0);
              return ppuVar10;
            }
          }
          else {
            FUN_5f6dc420((undefined1 *)in_stack_00001280[3],(undefined1 *)(in_stack_00001280 + 0x11)
                        );
            iVar7 = FUN_5f6d9c30(in_stack_00001280[2],(int *)*in_stack_00001280,7,
                                 (undefined4 *)&stack0x00001218);
            if (iVar7 == 0) {
              ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x33d,
                                      (undefined *)0x0,s_AdvanceBitstreamEncoder___failed_5f75c3e0);
              return ppuVar10;
            }
          }
        }
        else {
          iVar7 = *in_stack_000012a0;
          if (7 < iVar7) {
            iVar7 = 7;
          }
          iVar7 = FUN_5f6d9c30(in_stack_00001280[2],(int *)*in_stack_00001280,iVar7,
                               (undefined4 *)&stack0x00001218);
          if (iVar7 == 0) {
            ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x333,
                                    (undefined *)0x0,s_AdvanceBitstreamEncoder___failed_5f75c3e0);
            return ppuVar10;
          }
        }
        iVar7 = FUN_5f6dac70((int *)in_stack_00001280[1],(int)&stack0x00001218);
        if (iVar7 == 0) {
          ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x34a,
                                  (undefined *)0x0,s_AdvanceLoopKernel___failed_5f75c410);
          return ppuVar10;
        }
        if (in_stack_000012a0 == (int *)0x0) {
          iVar7 = FUN_5f6da1d0((int *)in_stack_00001280[2],in_stack_00001280[1],
                               (int)(in_stack_00001280 + 0x11),(int *)&stack0x00001228,
                               &stack0x00000014,
                               (undefined1 *)(*in_stack_00001298 + in_stack_0000128c));
          if (iVar7 == 0) {
            ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x355,
                                    (undefined *)0x0,s_WriteBitstream___failed_5f75c430);
            return ppuVar10;
          }
        }
        else {
          iVar7 = FUN_5f6da1d0((int *)in_stack_00001280[2],in_stack_00001280[1],in_stack_0000129c,
                               in_stack_000012a0,&stack0x00000014,
                               (undefined1 *)(*in_stack_00001298 + in_stack_0000128c));
          if (iVar7 == 0) {
            ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x35f,
                                    (undefined *)0x0,s_WriteBitstream___failed_5f75c430);
            return ppuVar10;
          }
        }
        if (0 < (int)in_stack_00001280[0x10]) {
          FUN_5f6dc2c0(in_stack_00001280[3],0x240,(float)in_stack_00001280[10]);
        }
        in_stack_00001280[0x36] = in_stack_00001280[0x36] + 1;
        in_stack_00001280[0x35] = in_stack_00001280[0x35] + 0x240;
        iVar7 = in_stack_00000014 + *in_stack_00001298;
        *in_stack_00001298 = iVar7;
        if (in_stack_00001290 < iVar7) {
          ppuVar10 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x372,
                                  (undefined *)0x0,s_panic__memory_overwritten_5f75c450);
          return ppuVar10;
        }
      }
    } while (iVar7 + in_stack_00001280[0x18] <= in_stack_00001290);
  }
  return (undefined **)0x0;
}


