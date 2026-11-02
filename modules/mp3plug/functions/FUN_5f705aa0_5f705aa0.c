/* Module: mp3plug.dll
   Function: FUN_5f705aa0
   Address: 5f705aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __cdecl FUN_5f705aa0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  float10 fVar7;
  double dVar8;
  
  piVar1 = FUN_5f6d9720(1,0x44);
  if (piVar1 == (int *)0x0) {
    ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760580,(char *)0x44,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
  }
  else {
    piVar2 = (int *)FUN_5f6ebf60(param_2,2);
    piVar1[1] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760580,(char *)0x4a,
                             (undefined *)0x0,s_GetCbParam___failed_5f7605c0);
    }
    else {
      iVar3 = FUN_5f6d9760(*piVar2 * 4);
      piVar1[2] = iVar3;
      if (iVar3 == 0) {
        ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760580,(char *)0x51,
                               (undefined *)0x0,s_out_of_memory_5f75c330);
      }
      else {
        iVar3 = FUN_5f6d9760(*(int *)piVar1[1] * 4);
        piVar1[3] = iVar3;
        if (iVar3 == 0) {
          ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760580,(char *)0x57,
                                 (undefined *)0x0,s_out_of_memory_5f75c330);
        }
        else {
          ppuVar4 = FUN_5f7054a0(piVar1,5,*(uint *)piVar1[1]);
          if (ppuVar4 == (undefined **)0x0) {
            iVar3 = -4;
            do {
              FUN_5f7058a0((uint *)*piVar1);
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0);
            piVar1[4] = 0;
            piVar1[5] = 0;
            piVar1[6] = 0;
            piVar1[7] = 0;
            piVar2 = (int *)piVar1[1];
            if (0 < *piVar2) {
              iVar3 = 0;
              do {
                dVar8 = _DAT_5f760528;
                if (_DAT_5f76051c < *(float *)(piVar2[0xec] + iVar3 * 4)) {
                  fVar7 = (float10)log2((float10)*(float *)(piVar2[0xec] + iVar3 * 4));
                  fVar7 = (float10)0.3010299956639812 * fVar7 * (float10)_DAT_5f760520;
                }
                else {
                  fVar7 = (float10)_DAT_5f760518;
                }
                *(float *)(piVar1[2] + iVar3 * 4) = (float)((float10)_DAT_5f760514 + fVar7);
                dVar8 = pow(dVar8,(double)((fVar7 + (float10)_DAT_5f760514) * (float10)_DAT_5f760530
                                          ));
                *(float *)(piVar1[3] + iVar3 * 4) = (float)dVar8;
                piVar2 = (int *)piVar1[1];
                iVar3 = iVar3 + 1;
              } while (iVar3 < *piVar2);
            }
            uVar6 = 0;
            do {
              iVar3 = FUN_5f705910(*piVar1,uVar6);
              iVar5 = 0;
              if (0 < *(int *)piVar1[1]) {
                do {
                  *(undefined4 *)(iVar3 + iVar5 * 4) = *(undefined4 *)(piVar1[2] + iVar5 * 4);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)piVar1[1]);
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < 4);
            piVar1[0xd] = 0;
            piVar1[0xc] = 0;
            piVar1[9] = 0;
            piVar1[8] = 0;
            piVar1[0xb] = 3;
            piVar1[10] = 4;
            if (**(float **)(unaff_EBX + 4) <= _DAT_5f760538) {
              if (**(float **)(unaff_EBX + 4) <= _DAT_5f76053c) {
                piVar1[0xe] = DAT_5f7604fc;
                piVar1[0xf] = DAT_5f760500;
                piVar1[0x10] = DAT_5f760504;
              }
              else {
                piVar1[0xe] = DAT_5f7604f0;
                piVar1[0xf] = DAT_5f7604f4;
                piVar1[0x10] = DAT_5f7604f8;
              }
            }
            else {
              piVar1[0xe] = DAT_5f760508;
              piVar1[0xf] = DAT_5f76050c;
              piVar1[0x10] = DAT_5f760510;
            }
            DAT_5f75a9e0 = 0;
            FUN_5f6de860(&DAT_5f7605e0,1,0,2,0x5f7605f0,s_0_automatic__1__only_long__2__on_5f760610,
                         &DAT_5f75a9e0);
            ppuVar4 = (undefined **)0x0;
          }
          else {
            ppuVar4 = (undefined **)
                      FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760580,0x5f,0,(int)ppuVar4);
          }
        }
      }
    }
  }
  if (ppuVar4 != (undefined **)0x0) {
    FUN_5f705e54();
    piVar1 = (int *)0x0;
  }
  *param_3 = piVar1;
  return ppuVar4;
}


