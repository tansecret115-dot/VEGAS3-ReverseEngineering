/* Module: mpegin.dll
   Function: FUN_10002f70
   Address: 10002f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10002f70(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var_02;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  
  iVar3 = *(int *)(param_1 + 0x12e54);
  *(undefined4 *)(param_1 + 0xce8) = 6;
  *(undefined4 *)(iVar3 + 0xf8) = 0;
  *(undefined4 *)(iVar3 + 0xfc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x154) = 0;
  FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
    return 1;
  }
  uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
  if (((uVar2 & 0xfff00000) == 0xfff00000) &&
     (bVar1 = FUN_100037b0(param_1,uVar2), CONCAT31(extraout_var,bVar1) == 0)) {
    uVar7 = uVar2 >> 0x11 & 3;
    if (uVar7 == 3) {
      uVar7 = 1;
    }
    else if (uVar7 == 1) {
      uVar7 = 3;
    }
    if (uVar7 == 1) {
      iVar3 = *(int *)(s_Could_not_find_the_next_audio_he_100182b4 +
                      ((uVar2 >> 0xc & 0xf) + uVar7 * 0xf) * 4 + 0x24) * 3000;
    }
    else {
      iVar3 = *(int *)(s_Could_not_find_the_next_audio_he_100182b4 +
                      ((uVar2 >> 0xc & 0xf) + uVar7 * 0xf) * 4 + 0x24) * 9000;
    }
    iVar3 = (iVar3 << 4) / *(int *)(&DAT_10018304 + (uVar2 >> 10 & 3) * 4);
    if ((*(int *)(&DAT_10018304 + (uVar2 >> 10 & 3) * 4) == 0xac44) && ((uVar2 & 0x200) != 0)) {
      iVar3 = iVar3 + 1;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar8 = *(int *)(param_1 + 0x12e54);
      if ((*(int *)(iVar8 + 0x168) != 0) || (*(int *)(iVar8 + 0x16c) != 0)) {
        if (iVar3 != 0) goto LAB_10003100;
        break;
      }
      FUN_10005910((int *)(iVar8 + 0x128),8);
    }
    uVar4 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
    if (((uVar4 ^ uVar2) & 0xfffe0c00) == 0) {
      if (uVar7 != 3) {
        *(undefined4 *)(param_1 + 0x80) = 1;
        *(undefined4 *)(param_1 + 0xcf8) = 1;
        *(undefined4 *)(param_1 + 0xcf0) = 1;
        return 0;
      }
      pcVar9 = s_Layer_3_audio_not_supported_100183dc;
      goto LAB_1000379a;
    }
LAB_10003100:
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
    if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
      return 1;
    }
    uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
  }
  if (uVar2 == 0x1b3) {
    bVar1 = FUN_10003800(param_1);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0xcfc) = 1;
      *(undefined4 *)(param_1 + 0xcf4) = 1;
      return 0;
    }
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
    if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
      return 1;
    }
    uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
  }
  if (uVar2 == 0x1ba) {
    iVar3 = FUN_10003870(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
    if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
      return 1;
    }
    uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
  }
  if ((uVar2 < 0x1c0) || (0x1df < uVar2)) {
    if ((uVar2 < 0x1e0) || (0x1ef < uVar2)) {
      iVar3 = *(int *)(param_1 + 0x12e54);
      uVar2 = 0xffffffff;
      iVar8 = *(int *)(iVar3 + 0x168);
      while ((((iVar8 == 0 && (*(int *)(iVar3 + 0x16c) == 0)) && (*(int *)(iVar3 + 0x14c) < 1)) &&
             ((*(int *)(iVar3 + 0x14c) < 0 || (*(uint *)(iVar3 + 0x148) < param_2))))) {
        uVar7 = FUN_10005cb0((int *)(iVar3 + 0x128),8);
        uVar2 = uVar2 << 8 | uVar7;
        iVar3 = *(int *)(param_1 + 0x12e54);
        uVar7 = *(uint *)(iVar3 + 0x148);
        uVar4 = uVar7 - 8;
        iVar8 = *(int *)(iVar3 + 0x14c) - (uint)(uVar7 < 8);
        if (uVar2 == 0x1ba) {
          FUN_10005520((int *)(iVar3 + 0x128),uVar4,iVar8,0);
          if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
            return 1;
          }
          iVar3 = FUN_10003870(param_1,param_2);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x12e54);
            *(uint *)(iVar3 + 0xf8) = uVar4;
            *(int *)(iVar3 + 0xfc) = iVar8;
            return 0;
          }
          FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),uVar7 - 4,
                       iVar8 + (uint)(0xfffffffb < uVar4),0);
          iVar3 = *(int *)(param_1 + 0x12e54);
          if (*(int *)(iVar3 + 0x168) != 0) {
            return 1;
          }
        }
        iVar8 = *(int *)(iVar3 + 0x168);
      }
      FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
      if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,'\b');
      if (uVar2 == 0x47) {
        *(undefined4 *)(param_1 + 0xce8) = 5;
        return 1;
      }
      iVar3 = *(int *)(param_1 + 0x12e54);
      uVar2 = 0x22222222;
      iVar8 = *(int *)(iVar3 + 0x168);
      while (((iVar8 == 0 && (*(int *)(iVar3 + 0x16c) == 0)) &&
             ((*(int *)(iVar3 + 0x14c) < 1 &&
              ((*(int *)(iVar3 + 0x14c) < 0 || (*(uint *)(iVar3 + 0x148) < param_2))))))) {
        uVar7 = FUN_10005cb0((int *)(iVar3 + 0x128),8);
        uVar2 = uVar2 << 8 | uVar7;
        uVar7 = *(uint *)(*(int *)(param_1 + 0x12e54) + 0x148);
        iVar3 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x14c) - (uint)(uVar7 < 8);
        if (((uVar2 & 0xfff00000) == 0xfff00000) &&
           (bVar1 = FUN_100037b0(param_1,uVar2), CONCAT31(extraout_var_01,bVar1) == 0)) {
          uVar4 = uVar2 >> 0x11 & 3;
          if (uVar4 == 3) {
            uVar4 = 1;
          }
          else if (uVar4 == 1) {
            uVar4 = 3;
          }
          if (uVar4 == 1) {
            iVar8 = *(int *)(s_Could_not_find_the_next_audio_he_100182b4 +
                            ((uVar2 >> 0xc & 0xf) + uVar4 * 0xf) * 4 + 0x24) * 3000;
          }
          else {
            iVar8 = *(int *)(s_Could_not_find_the_next_audio_he_100182b4 +
                            ((uVar2 >> 0xc & 0xf) + uVar4 * 0xf) * 4 + 0x24) * 9000;
          }
          iVar5 = (iVar8 << 4) / *(int *)(&DAT_10018304 + (uVar2 >> 10 & 3) * 4);
          iVar8 = iVar5 + -4;
          if ((*(int *)(&DAT_10018304 + (uVar2 >> 10 & 3) * 4) == 0xac44) && ((uVar2 & 0x200) != 0))
          {
            iVar8 = iVar5 + -3;
          }
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            iVar5 = *(int *)(param_1 + 0x12e54);
            if ((*(int *)(iVar5 + 0x168) != 0) || (*(int *)(iVar5 + 0x16c) != 0)) {
              if (iVar8 != 0) goto LAB_1000361d;
              break;
            }
            FUN_10005910((int *)(iVar5 + 0x128),8);
          }
          uVar6 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
          if (((uVar6 ^ uVar2) & 0xfffe0c00) == 0) {
            if (uVar4 != 3) {
              iVar8 = *(int *)(param_1 + 0x12e54);
              *(undefined4 *)(param_1 + 0x80) = 1;
              *(undefined4 *)(param_1 + 0xcf8) = 1;
              *(undefined4 *)(param_1 + 0xcf0) = 1;
              *(uint *)(iVar8 + 0xf8) = uVar7 - 8;
              *(int *)(iVar8 + 0xfc) = iVar3;
              return 0;
            }
            pcVar9 = s_Layer_3_audio_not_supported_100183dc;
            goto LAB_1000379a;
          }
          FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),uVar7 - 7,
                       iVar3 + (uint)(0xfffffffe < uVar7 - 8),0);
          if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
            return 1;
          }
          uVar2 = 0x22222222;
        }
LAB_1000361d:
        iVar3 = *(int *)(param_1 + 0x12e54);
        iVar8 = *(int *)(iVar3 + 0x168);
      }
      FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0,0,0);
      iVar3 = *(int *)(param_1 + 0x12e54);
      if (*(int *)(iVar3 + 0x168) != 0) {
        return 1;
      }
      uVar2 = 0xffffffff;
      do {
        if (((*(int *)(iVar3 + 0x16c) != 0) || (0 < *(int *)(iVar3 + 0x14c))) ||
           ((-1 < *(int *)(iVar3 + 0x14c) && (param_2 <= *(uint *)(iVar3 + 0x148))))) break;
        uVar7 = FUN_10005cb0((int *)(iVar3 + 0x128),8);
        uVar2 = uVar2 << 8 | uVar7;
        iVar3 = *(int *)(param_1 + 0x12e54);
        uVar7 = *(uint *)(iVar3 + 0x148);
        iVar8 = *(int *)(iVar3 + 0x14c) - (uint)(uVar7 < 8);
        if (uVar2 == 0x1b3) {
          bVar1 = FUN_10003800(param_1);
          if (CONCAT31(extraout_var_02,bVar1) == 0) {
            *(undefined4 *)(param_1 + 0x24) = 1;
            *(undefined4 *)(param_1 + 0xcfc) = 1;
            *(undefined4 *)(param_1 + 0xcf4) = 1;
            iVar3 = *(int *)(param_1 + 0x12e54);
            *(uint *)(iVar3 + 0xf8) = uVar7 - 8;
            *(int *)(iVar3 + 0xfc) = iVar8;
            return 0;
          }
          FUN_10005520((int *)(*(int *)(param_1 + 0x12e54) + 0x128),uVar7 - 4,
                       iVar8 + (uint)(0xfffffffb < uVar7 - 8),0);
          iVar3 = *(int *)(param_1 + 0x12e54);
          if (*(int *)(iVar3 + 0x168) != 0) {
            return 1;
          }
        }
      } while (*(int *)(iVar3 + 0x168) == 0);
      pcVar9 = s_Unknown_file_type_100183c8;
LAB_1000379a:
      FUN_10007e90(param_1,(byte *)pcVar9);
      return 1;
    }
    *(undefined4 *)(param_1 + 0xcfc) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(uint *)(param_1 + 0xcf4) = *(uint *)(param_1 + 0xcf4) | 1 << ((char)uVar2 + 0x20U & 0x1f);
  }
  else {
    *(undefined4 *)(param_1 + 0xcf8) = 1;
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) | 1 << ((char)uVar2 + 0x40U & 0x1f);
  }
  FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
  FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
  if ((uVar2 & 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x154) = *(undefined4 *)(param_1 + 0x20);
  return 0;
}


