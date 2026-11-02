/* Module: vegas30k.dll
   Function: FUN_011b2fd0
   Address: 011b2fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_011b2fd0(int param_1,double *param_2,int param_3,uint param_4,uint param_5,int param_6,
            uint param_7)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint local_30;
  double local_20;
  double local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = param_5;
  iVar6 = (int)param_2;
  local_10 = 0;
  local_c = 0x3ff00000;
  local_8 = 0;
  local_4 = 0x3ff00000;
  local_30 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_3 == 0x10) {
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar6 = 0;
        param_2 = (double *)&local_10;
        goto LAB_011b3737;
      }
    }
    else if (param_3 == 1) {
      if ((*(int *)(param_1 + 0x10) == 0) &&
         (iVar7 = *(int *)(param_1 + 0x19c), (int)param_2 < *(int *)(iVar7 + 4))) {
        iVar8 = *(int *)(*(int *)(iVar7 + 0x28) + (int)param_2 * 4);
        if ((double *)*(int *)(iVar7 + 8) == param_2) {
          if (iVar8 == 0) {
            if (*(int *)(iVar7 + 0x20) == 0) {
              fVar9 = (float10)*(double *)(iVar7 + 0x10);
              if ((float10)_DAT_011dad58 == fVar9) {
                fVar9 = (float10)_DAT_011db3f0;
              }
              else if ((float10)_DAT_011db3f0 == fVar9) {
                fVar9 = (float10)_DAT_011eb520;
              }
              else {
                fVar9 = (float10)log2(fVar9);
                fVar9 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_011e23a8;
              }
              fVar10 = (float10)*(double *)(iVar7 + 0x18);
              if ((float10)_DAT_011dad58 == fVar10) {
                fVar10 = (float10)_DAT_011db3f0;
              }
              else if ((float10)_DAT_011db3f0 == fVar10) {
                fVar10 = (float10)_DAT_011eb520;
              }
              else {
                fVar10 = (float10)log2(fVar10);
                fVar10 = (float10)0.3010299956639812 * fVar10 * (float10)_DAT_011e23a8;
              }
              fVar11 = (float10)*(double *)((int)param_2 * 0x10 + *(int *)(iVar7 + 0x24));
              if ((float10)_DAT_011dad58 == fVar11) {
                fVar11 = (float10)_DAT_011db3f0;
              }
              else if ((float10)_DAT_011db3f0 == fVar11) {
                fVar11 = (float10)_DAT_011eb520;
              }
              else {
                fVar11 = (float10)log2(fVar11);
                fVar11 = (float10)0.3010299956639812 * fVar11 * (float10)_DAT_011e23a8;
              }
              local_20 = (double)(fVar11 + (float10)(double)fVar9);
              fVar9 = (float10)*(double *)((int)param_2 * 0x10 + 8 + *(int *)(iVar7 + 0x24));
              if ((float10)_DAT_011dad58 == fVar9) {
                fVar9 = (float10)_DAT_011db3f0;
              }
              else if ((float10)_DAT_011db3f0 == fVar9) {
                fVar9 = (float10)_DAT_011eb520;
              }
              else {
                fVar9 = (float10)log2(fVar9);
                fVar9 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_011e23a8;
              }
              local_18 = (double)(fVar9 + fVar10);
              if (_DAT_011db3f0 == local_20) {
                fVar9 = (float10)_DAT_011dad58;
              }
              else if (_DAT_011eb520 < local_20) {
                fVar9 = (float10)_CIpow();
              }
              else {
                fVar9 = (float10)_DAT_011db3f0;
              }
              local_20 = (double)fVar9;
              if (_DAT_011db3f0 == local_18) {
                fVar9 = (float10)_DAT_011dad58;
              }
              else if (_DAT_011eb520 < local_18) {
                fVar9 = (float10)_CIpow();
              }
              else {
                fVar9 = (float10)_DAT_011db3f0;
              }
            }
            else {
              fVar9 = (float10)_DAT_011db3f0;
              local_20 = 0.0;
            }
          }
          else {
            local_20 = *(double *)((int)param_2 * 0x10 + *(int *)(iVar7 + 0x24));
            fVar9 = (float10)*(double *)((int)param_2 * 0x10 + 8 + *(int *)(iVar7 + 0x24));
          }
          dVar1 = _DAT_011db3f0;
          if (*(int *)(iVar7 + 0x20) == 0) {
            dVar1 = *(double *)(iVar7 + 0x10);
          }
          local_20 = dVar1 + local_20;
          if (*(int *)(iVar7 + 0x20) == 0) {
            local_18 = (double)((float10)*(double *)(iVar7 + 0x18) + fVar9);
            param_2 = &local_20;
          }
          else {
            local_18 = (double)((float10)_DAT_011db3f0 + fVar9);
            param_2 = &local_20;
          }
        }
        else if (iVar8 == 0) {
          if (*(int *)(iVar7 + 0x20) == 0) {
            fVar9 = (float10)*(double *)(iVar7 + 0x10);
            if ((float10)_DAT_011dad58 == fVar9) {
              fVar9 = (float10)_DAT_011db3f0;
            }
            else if ((float10)_DAT_011db3f0 == fVar9) {
              fVar9 = (float10)_DAT_011eb520;
            }
            else {
              fVar9 = (float10)log2(fVar9);
              fVar9 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_011e23a8;
            }
            fVar10 = (float10)*(double *)(iVar7 + 0x18);
            if ((float10)_DAT_011dad58 == fVar10) {
              fVar10 = (float10)_DAT_011db3f0;
            }
            else if ((float10)_DAT_011db3f0 == fVar10) {
              fVar10 = (float10)_DAT_011eb520;
            }
            else {
              fVar10 = (float10)log2(fVar10);
              fVar10 = (float10)0.3010299956639812 * fVar10 * (float10)_DAT_011e23a8;
            }
            fVar11 = (float10)*(double *)((int)param_2 * 0x10 + *(int *)(iVar7 + 0x24));
            if ((float10)_DAT_011dad58 == fVar11) {
              fVar11 = (float10)_DAT_011db3f0;
            }
            else if ((float10)_DAT_011db3f0 == fVar11) {
              fVar11 = (float10)_DAT_011eb520;
            }
            else {
              fVar11 = (float10)log2(fVar11);
              fVar11 = (float10)0.3010299956639812 * fVar11 * (float10)_DAT_011e23a8;
            }
            local_20 = (double)(fVar11 + (float10)(double)fVar9);
            fVar9 = (float10)*(double *)((int)param_2 * 0x10 + 8 + *(int *)(iVar7 + 0x24));
            if ((float10)_DAT_011dad58 == fVar9) {
              fVar9 = (float10)_DAT_011db3f0;
            }
            else if ((float10)_DAT_011db3f0 == fVar9) {
              fVar9 = (float10)_DAT_011eb520;
            }
            else {
              fVar9 = (float10)log2(fVar9);
              fVar9 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_011e23a8;
            }
            local_18 = (double)(fVar9 + fVar10);
            if (_DAT_011db3f0 == local_20) {
              fVar9 = (float10)_DAT_011dad58;
            }
            else if (_DAT_011eb520 < local_20) {
              fVar9 = (float10)_CIpow();
            }
            else {
              fVar9 = (float10)_DAT_011db3f0;
            }
            local_20 = (double)fVar9;
            if (_DAT_011db3f0 == local_18) {
              local_18 = _DAT_011dad58;
              param_2 = &local_20;
            }
            else if (_DAT_011eb520 < local_18) {
              fVar9 = (float10)_CIpow();
              local_18 = (double)fVar9;
              param_2 = &local_20;
            }
            else {
              local_18 = _DAT_011db3f0;
              param_2 = &local_20;
            }
          }
          else {
            local_18 = 0.0;
            local_20 = 0.0;
            param_2 = &local_20;
          }
        }
        else {
          param_2 = (double *)(*(int *)(iVar7 + 0x24) + (int)param_2 * 0x10);
        }
LAB_011b3737:
        if ((param_4 & 0x20000000) != 0) {
          iVar7 = *(int *)(param_1 + 0x5c0 + iVar6 * 4) +
                  (param_6 - *(int *)(param_1 + 0x1c0 + iVar6 * 4));
          *(int *)(param_1 + 0x5c0 + iVar6 * 4) = iVar7;
          FUN_011b2c60(iVar7,iVar6);
        }
        *(int *)(param_1 + 0x1c0 + iVar6 * 4) = param_6;
        uVar2 = FUN_011b2d10(iVar6);
        iVar7 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1bc);
        if (iVar7 + uVar2 < param_7) {
          return 1;
        }
        if (uVar2 < param_7) {
          while ((iVar7 != 0 && (iVar7 = FUN_011b2c00(1), iVar7 != 0))) {
            iVar8 = *(int *)(iVar7 + 0xc);
            do {
              if (*(uint *)(iVar7 + 0x14) ==
                  *(uint *)(param_1 + 0x1a4) / (uint)*(ushort *)(param_1 + 0x182)) {
                iVar7 = FUN_011b2c00(1);
                iVar8 = *(int *)(iVar7 + 0xc);
              }
              param_5 = *(uint *)(param_1 + 0x1a4) / (uint)*(ushort *)(param_1 + 0x182);
              uVar2 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1bc);
              if (uVar2 <= param_5) {
                param_5 = uVar2;
              }
              uVar2 = *(uint *)(iVar7 + 0x10);
              if (*(uint *)(param_1 + 400) <= *(uint *)(iVar7 + 0x10)) {
                uVar2 = *(uint *)(param_1 + 400);
              }
              *(uint *)(iVar7 + 0x10) = uVar2;
              _SfAudio_FillSilence_12(param_1 + 0x176,iVar8,param_5);
              iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))
                                (*(int **)(param_1 + 0x20),iVar8,param_5,
                                 *(undefined4 *)(param_1 + 400),0);
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar4 = FUN_011b2de0(iVar8,param_5);
              *(uint *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + uVar4;
              uVar2 = *(uint *)(param_1 + 400);
              *(uint *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + uVar4;
              *(uint *)(param_1 + 400) = uVar2 + uVar4;
              *(uint *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + (uint)CARRY4(uVar2,uVar4);
              *(uint *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + uVar4;
              iVar8 = iVar8 + *(ushort *)(param_1 + 0x182) * uVar4;
            } while (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x1bc));
            iVar7 = 0;
          }
        }
        uVar2 = FUN_011b2d10(iVar6);
        if (uVar2 < param_7) {
          return 1;
        }
        iVar7 = FUN_011b2d70(iVar6);
        while( true ) {
          if (iVar7 == 0) {
            return 0;
          }
          iVar8 = *(int *)(*(int *)(iVar7 + 8) + iVar6 * 4);
          uVar4 = *(int *)(iVar7 + 0x14) - iVar8;
          uVar2 = param_7 - local_30;
          if (uVar4 < param_7 - local_30) {
            uVar2 = uVar4;
          }
          _SfAudio_MixChannels_28
                    (param_1 + 0x164,iVar5,param_1 + 0x176,
                     (uint)*(ushort *)(param_1 + 0x182) * iVar8 + *(int *)(iVar7 + 0xc),uVar2,0,
                     param_2);
          local_30 = local_30 + uVar2;
          *(uint *)(param_1 + 0x1c0 + iVar6 * 4) = *(int *)(param_1 + 0x1c0 + iVar6 * 4) + uVar2;
          *(uint *)(param_1 + 0x5c0 + iVar6 * 4) = *(int *)(param_1 + 0x5c0 + iVar6 * 4) + uVar2;
          *(uint *)(*(int *)(iVar7 + 8) + iVar6 * 4) =
               *(int *)(*(int *)(iVar7 + 8) + iVar6 * 4) + uVar2;
          if (*(int *)(iVar7 + 0x14) == *(int *)(*(int *)(iVar7 + 8) + iVar6 * 4)) {
            *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
            *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + *(int *)(iVar7 + 0x14);
          }
          iVar5 = iVar5 + *(ushort *)(param_1 + 0x170) * uVar2;
          if (param_7 <= local_30) break;
          iVar7 = FUN_011b2d70(iVar6);
        }
        return 0;
      }
    }
    else if (((param_3 == 4) && (*(int *)(param_1 + 0x10) == 0)) &&
            (iVar7 = *(int *)(param_1 + 0x19c), (int)param_2 < *(int *)(iVar7 + 0x2c))) {
      if (*(int *)(*(int *)(iVar7 + 0x34) + (int)param_2 * 4) == 0) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          dVar1 = *(double *)((int)param_2 * 0x10 + *(int *)(iVar7 + 0x30));
          fVar9 = (float10)*(double *)((int)param_2 * 0x10 + 8 + *(int *)(iVar7 + 0x30));
          fVar10 = (float10)_DAT_011db3f0;
          if (_DAT_011dad58 != dVar1) {
            if (fVar10 == (float10)dVar1) {
              fVar10 = (float10)_DAT_011eb518;
            }
            else {
              fVar10 = (float10)log2((float10)dVar1);
              fVar10 = (float10)0.3010299956639812 * fVar10 * (float10)_DAT_011e23a8;
            }
          }
          if ((float10)_DAT_011dad58 == fVar9) {
            fVar9 = (float10)_DAT_011db3f0;
          }
          else if ((float10)_DAT_011db3f0 == fVar9) {
            fVar9 = (float10)_DAT_011eb518;
          }
          else {
            fVar9 = (float10)log2(fVar9);
            fVar9 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_011e23a8;
          }
          fVar11 = (float10)*(double *)(iVar7 + 0x10);
          if ((float10)_DAT_011dad58 == fVar11) {
            fVar11 = (float10)_DAT_011db3f0;
          }
          else if ((float10)_DAT_011db3f0 == fVar11) {
            fVar11 = (float10)_DAT_011eb518;
          }
          else {
            fVar11 = (float10)log2(fVar11);
            fVar11 = (float10)0.3010299956639812 * fVar11 * (float10)_DAT_011e23a8;
          }
          local_20 = (double)(fVar11 + (float10)(double)fVar10);
          fVar10 = (float10)*(double *)(iVar7 + 0x18);
          if ((float10)_DAT_011dad58 == fVar10) {
            fVar10 = (float10)_DAT_011db3f0;
          }
          else if ((float10)_DAT_011db3f0 == fVar10) {
            fVar10 = (float10)_DAT_011eb518;
          }
          else {
            fVar10 = (float10)log2(fVar10);
            fVar10 = (float10)0.3010299956639812 * fVar10 * (float10)_DAT_011e23a8;
          }
          local_18 = (double)(fVar10 + fVar9);
          if (_DAT_011db3f0 == local_20) {
            fVar9 = (float10)_DAT_011dad58;
          }
          else if (_DAT_011eb518 < local_20) {
            fVar9 = (float10)_CIpow();
          }
          else {
            fVar9 = (float10)_DAT_011db3f0;
          }
          local_20 = (double)fVar9;
          if (_DAT_011db3f0 == local_18) {
            local_18 = _DAT_011dad58;
            param_2 = &local_20;
          }
          else if (_DAT_011eb518 < local_18) {
            fVar9 = (float10)_CIpow();
            local_18 = (double)fVar9;
            param_2 = &local_20;
          }
          else {
            local_18 = _DAT_011db3f0;
            param_2 = &local_20;
          }
        }
        else {
          local_18 = 0.0;
          local_20 = 0.0;
          param_2 = &local_20;
        }
      }
      else {
        param_2 = (double *)(*(int *)(iVar7 + 0x30) + (int)param_2 * 0x10);
      }
      iVar6 = iVar6 + *(int *)(iVar7 + 4);
      goto LAB_011b3737;
    }
  }
  return 0x4e001;
}


