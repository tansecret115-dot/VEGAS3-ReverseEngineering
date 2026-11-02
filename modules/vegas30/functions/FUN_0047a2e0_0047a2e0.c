/* Module: vegas30.exe
   Function: FUN_0047a2e0
   Address: 0047a2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0047a2e0(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uchar *_Source;
  int iVar7;
  float10 fVar8;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uchar local_50 [80];
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0;
  }
  puVar1 = *(uint **)(param_3 + 0x30);
  uVar2 = *puVar1;
  iVar7 = 0;
  if (param_4 < uVar2) {
    iVar7 = puVar1[1] * param_4 + puVar1[2];
  }
  switch(param_2) {
  case 0xa0f0:
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0xc) != 1)) {
      *(undefined4 *)(iVar7 + 0xc) = 1;
      return 1;
    }
    break;
  case 0xa0f1:
    if (iVar7 == 0) {
      return 0;
    }
    iVar4 = 2;
    goto LAB_0047a39c;
  case 0xa0f2:
    if (iVar7 == 0) {
      return 0;
    }
    iVar4 = -2;
    goto LAB_0047a39c;
  case 0xa0f3:
  case 0xa0f6:
  case 0xa0f7:
  case 0xa0fb:
  case 0xa0fd:
  case 0xa105:
    if ((iVar7 != 0) && (*(float *)(iVar7 + 8) != *(float *)(param_3 + 0x24))) {
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_3 + 0x24);
      return 1;
    }
    break;
  case 0xa0f4:
  case 0xa0f8:
  case 0xa0fe:
  case 0xa106:
    if ((iVar7 != 0) && (*(float *)(iVar7 + 8) != *(float *)(param_3 + 0x28))) {
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_3 + 0x28);
      return 1;
    }
    break;
  case 0xa0f5:
  case 0xa0f9:
  case 0xa0fa:
  case 0xa0fc:
  case 0xa0ff:
  case 0xa107:
    if ((iVar7 != 0) && (*(float *)(iVar7 + 8) != *(float *)(param_3 + 0x20))) {
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_3 + 0x20);
      return 1;
    }
    break;
  case 0xa100:
    iVar7 = FUN_00478b00(param_4,param_3,param_1);
    if (iVar7 == 0) {
      uVar6 = FUN_004797c0(param_1,param_3,param_4);
      return uVar6;
    }
    FUN_0047a7b0(param_1,param_3);
    FUN_00479520(param_1);
    return 1;
  case 0xa101:
    iVar7 = FUN_004796c0(param_1,param_3,param_5,param_6);
    if (iVar7 != -1) {
      return 1;
    }
    break;
  case 0xa102:
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 0x4c) = uVar2;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return 0;
  case 0xa103:
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_00478140(param_3);
    return 1;
  case 0xa104:
    if (iVar7 != 0) {
      iVar4 = *(int *)(param_3 + 0x10);
      if ((((iVar4 == 0) || (iVar4 == 199)) || ((2 < iVar4 && (iVar4 < 0x1d)))) ||
         ((0x3f < iVar4 && (iVar4 < 0x60)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      piVar5 = (int *)_SfGetUIFontSize_4(100);
      local_60 = param_5 + 2;
      local_58 = local_60 + *piVar5 * 10;
      local_54 = param_6 + 2;
      local_5c = (local_54 - piVar5[1]) + -3;
      if (bVar3) {
        fVar8 = (float10)*(float *)(iVar7 + 8);
        if ((float10)_DAT_006106d0 == fVar8) {
          uVar6 = 0;
        }
        else if ((float10)_DAT_00610fd8 == fVar8) {
          uVar6 = 0xfffffda8;
        }
        else {
          log2(fVar8);
          uVar6 = ftol();
        }
        _Source = (uchar *)_SfGetLabeledStringFixed_16(uVar6,1,0xfffffda8,&DAT_00612b14);
      }
      else {
        _Source = (uchar *)_SfGetLabeledStringFloat_16
                                     (*(float *)(iVar7 + 8) * _DAT_00612ab8,0,0,&DAT_00612b10);
      }
      _mbscpy(local_50,_Source);
      iVar4 = FUN_00404d90(**(undefined4 **)(param_1 + 0x54),0xffffffff,&local_60,100,local_50,0x50)
      ;
      if ((iVar4 == 0) && (local_50[0] != '\0')) {
        fVar8 = (float10)_SfTextToDoubleToken_8(local_50,0);
        if (bVar3) {
          iVar4 = ftol();
          if (iVar4 == 0) {
            fVar8 = (float10)_DAT_006106d0;
          }
          else if (iVar4 < -599) {
            fVar8 = (float10)_DAT_00610fd8;
          }
          else {
            fVar8 = (float10)_CIpow();
          }
        }
        else {
          fVar8 = fVar8 * (float10)_DAT_00612af0;
        }
        if ((float10)*(float *)(param_3 + 0x20) <= fVar8) {
          if ((float10)*(float *)(param_3 + 0x24) < fVar8) {
            fVar8 = (float10)*(float *)(param_3 + 0x24);
          }
        }
        else {
          fVar8 = (float10)*(float *)(param_3 + 0x20);
        }
        if (fVar8 != (float10)*(float *)(iVar7 + 8)) {
          *(float *)(iVar7 + 8) = (float)fVar8;
          return 1;
        }
      }
    }
    break;
  case 0xa108:
    if (iVar7 == 0) {
      return 0;
    }
    iVar4 = 4;
    goto LAB_0047a39c;
  case 0xa109:
    if (iVar7 == 0) {
      return 0;
    }
    iVar4 = -4;
LAB_0047a39c:
    if (*(int *)(iVar7 + 0xc) != iVar4) {
      *(int *)(iVar7 + 0xc) = iVar4;
      return 1;
    }
  }
  return 0;
}


