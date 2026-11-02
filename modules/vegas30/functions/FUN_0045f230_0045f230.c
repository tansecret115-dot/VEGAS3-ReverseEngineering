/* Module: vegas30.exe
   Function: FUN_0045f230
   Address: 0045f230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045f230(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_68;
  int local_64;
  int local_60;
  int local_5c [3];
  undefined1 local_50 [80];
  
  iVar1 = param_1;
  if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0xc) ||
      *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc) < 0) {
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    *(undefined4 *)(param_1 + 1000) = 0;
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    *(undefined4 *)(param_1 + 0x3fc) = 0;
    *(undefined4 *)(param_1 + 0x400) = 0;
    return;
  }
  piVar2 = (int *)_SfGetUIFontSize_4(100);
  uVar13 = 2;
  uVar10 = __allmul(*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604),2,0);
  _SfNanoTimeToTextEx_20(local_50,param_1 + 0x20,uVar10,uVar13);
  piVar6 = local_5c;
  puVar11 = local_50;
  uVar12 = 0xffffffff;
  uVar13 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar13,puVar11,uVar12,piVar6);
  if (local_5c[0] <= *piVar2 * 10) {
    local_5c[0] = *piVar2 * 10;
  }
  local_5c[0] = local_5c[0] + 6;
  iVar4 = *(int *)(param_2 + 0x14) -
          (((*(int *)(param_2 + 0x14) - piVar2[1]) - *(int *)(param_2 + 0xc)) + -4) / 2;
  iVar5 = *(int *)(param_2 + 0x10);
  param_1 = *(int *)(param_2 + 8);
  if ((*(uint *)(param_2 + 4) & 8) == 0) {
    iVar5 = iVar5 - *piVar2 / 2;
    param_1 = param_1 + *piVar2 / 2;
  }
  if (((*(uint *)(param_2 + 4) & 4) == 0) && (local_5c[0] * 5 <= iVar5 - param_1)) {
    *(int *)(iVar1 + 0x3fc) = iVar5;
    *(int *)(iVar1 + 0x400) = iVar4;
    *(int *)(iVar1 + 0x3f4) = iVar5 - local_5c[0];
    *(int *)(iVar1 + 0x3f8) = (iVar4 - piVar2[1]) + -4;
    iVar5 = (iVar5 - local_5c[0]) - *piVar2 / 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3f4) = 0;
    *(undefined4 *)(iVar1 + 0x3f8) = 0;
    *(undefined4 *)(iVar1 + 0x3fc) = 0;
    *(undefined4 *)(iVar1 + 0x400) = 0;
  }
  if (((*(uint *)(param_2 + 4) & 2) == 0) && (local_5c[0] * 4 <= iVar5 - param_1)) {
    *(int *)(iVar1 + 0x3ec) = iVar5;
    *(int *)(iVar1 + 0x3f0) = iVar4;
    *(int *)(iVar1 + 0x3e4) = iVar5 - local_5c[0];
    *(int *)(iVar1 + 1000) = (iVar4 - piVar2[1]) + -4;
    iVar5 = (iVar5 - local_5c[0]) - *piVar2 / 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3e4) = 0;
    *(undefined4 *)(iVar1 + 1000) = 0;
    *(undefined4 *)(iVar1 + 0x3ec) = 0;
    *(undefined4 *)(iVar1 + 0x3f0) = 0;
  }
  if (((*(uint *)(param_2 + 4) & 1) == 0) && (local_5c[0] * 3 <= iVar5 - param_1)) {
    *(int *)(iVar1 + 0x3dc) = iVar5;
    *(int *)(iVar1 + 0x3d4) = iVar5 - local_5c[0];
    *(int *)(iVar1 + 0x3e0) = iVar4;
    *(int *)(iVar1 + 0x3d8) = (iVar4 - piVar2[1]) + -4;
    iVar5 = (iVar5 - local_5c[0]) - *piVar2 / 2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x3d4) = 0;
    *(undefined4 *)(iVar1 + 0x3d8) = 0;
    *(undefined4 *)(iVar1 + 0x3dc) = 0;
    *(undefined4 *)(iVar1 + 0x3e0) = 0;
  }
  iVar4 = *(int *)(iVar1 + 0x408);
  iVar8 = *(int *)(iVar1 + 0x3cc) + 8;
  iVar3 = 0;
  local_5c[0] = 0;
  if (0 < iVar4) {
    psVar7 = (short *)(iVar1 + 0x41e);
    do {
      if (iVar3 < *psVar7) {
        iVar3 = (int)*psVar7;
      }
      psVar7 = psVar7 + 0xe;
      iVar4 = iVar4 + -1;
      local_5c[0] = iVar3;
    } while (iVar4 != 0);
  }
  local_64 = local_5c[0] + 1;
  if ((0 < local_5c[0]) && (local_68 = 0, -1 < local_5c[0])) {
    do {
      local_60 = 0;
      if (0 < *(int *)(iVar1 + 0x408)) {
        pbVar9 = (byte *)(iVar1 + 0x424);
        iVar4 = iVar5 - param_1;
        do {
          if ((*(short *)(pbVar9 + -6) <= local_68) && ((*pbVar9 & 8) == 0)) {
            if (iVar4 < iVar8) {
              local_64 = local_68;
              if (local_68 == 0) {
                local_64 = 1;
              }
              goto LAB_0045f57e;
            }
            if ((pbVar9[1] & 1) == 0) {
              iVar4 = iVar4 - iVar8;
            }
            else {
              iVar4 = iVar4 + -8;
            }
          }
          local_60 = local_60 + 1;
          pbVar9 = pbVar9 + 0x1c;
        } while (local_60 < *(int *)(iVar1 + 0x408));
      }
      local_68 = local_68 + 1;
    } while (local_68 <= local_5c[0]);
  }
LAB_0045f57e:
  iVar4 = *(int *)(iVar1 + 0x3d0);
  iVar3 = (((*(int *)(param_2 + 0x14) - iVar4) - *(int *)(param_2 + 0xc)) + -6) / 2 +
          *(int *)(param_2 + 0xc);
  param_2 = *(int *)(iVar1 + 0x408);
  if (0 < param_2) {
    iVar5 = iVar5 - param_1;
    piVar6 = (int *)(iVar1 + 0x418);
    do {
      piVar6[-2] = iVar3;
      *piVar6 = iVar4 + 6 + iVar3;
      if (((iVar5 < iVar8) || ((*(byte *)(piVar6 + 3) & 8) != 0)) ||
         (local_64 <= *(short *)((int)piVar6 + 6))) {
        piVar6[-3] = param_1;
        piVar6[-1] = param_1;
      }
      else {
        piVar6[-3] = param_1;
        if ((*(byte *)((int)piVar6 + 0xd) & 1) == 0) {
          param_1 = param_1 + iVar8;
          piVar6[-1] = param_1;
          iVar5 = iVar5 - iVar8;
        }
        else {
          param_1 = param_1 + 8;
          iVar5 = iVar5 + -8;
          piVar6[-1] = param_1;
        }
      }
      piVar6 = piVar6 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


