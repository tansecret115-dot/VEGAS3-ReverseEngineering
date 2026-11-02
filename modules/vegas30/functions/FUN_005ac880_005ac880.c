/* Module: vegas30.exe
   Function: FUN_005ac880
   Address: 005ac880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005ac880(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,int param_5,
            int param_6,int param_7,int param_8,undefined4 *param_9,undefined4 param_10,
            undefined4 param_11)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *local_8ac;
  undefined4 local_8a4;
  int local_89c;
  int local_898;
  uint local_894;
  undefined4 local_890 [4];
  double local_880;
  undefined1 local_850 [1064];
  undefined1 local_428 [1064];
  
  puVar7 = local_890;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((param_5 == 2) || (param_5 == 3)) {
    local_880 = local_880 + local_880;
  }
  if (param_9 == (undefined4 *)0x0) {
    local_8a4 = *(undefined4 *)(*param_3 + 4);
    iVar5 = *(int *)(*param_3 + 8);
  }
  else {
    local_8a4 = *param_9;
    iVar5 = param_9[1];
  }
  local_898 = 0;
  if (0 < param_8) {
    puVar7 = (undefined4 *)(param_7 + 0x28);
    do {
      iVar2 = _SfGetPixelType_4(*param_3);
      local_8ac = param_3;
      if (iVar2 != *(int *)(param_6 + 8)) {
        local_8ac = (int *)FUN_005a5de0(param_6,param_3,0,param_11);
      }
      if ((*(byte *)(local_8ac + 0x10d) & 1) == 0) {
LAB_005ac970:
        param_3 = local_8ac;
        if (puVar7[4] == 0) goto LAB_005ac97b;
      }
      else {
        if (puVar7[4] != 0) {
          local_8ac = (int *)FUN_005a5de0(param_6,local_8ac,0,param_11);
          goto LAB_005ac970;
        }
LAB_005ac97b:
        param_3 = (int *)FUN_005a5bd0(param_6,1,param_11);
      }
      if (puVar7[4] == 0) {
        piVar1 = (int *)*local_8ac;
        if (piVar1[8] == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)piVar1 + *piVar1;
        }
        iVar6 = 1 << (*(byte *)((int)piVar1 + 0xe) & 0x1f);
        uVar10 = 0;
        uVar8 = local_8a4;
        iVar9 = iVar5;
        uVar3 = _SfGetPixelType_4(piVar1);
        _SfVideo_InitBitmapInfo_28(local_850,uVar3,uVar8,iVar9,iVar2,iVar6,uVar10);
        local_89c = local_8ac[0x10c];
        iVar2 = *local_8ac;
        if (local_89c == 0) {
          uVar4 = (uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f;
          local_89c = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
        }
        local_894 = (*(int *)(iVar2 + 8) - iVar5) * local_89c + local_8ac[0x10b];
      }
      piVar1 = (int *)*param_3;
      if (piVar1[8] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)piVar1 + *piVar1;
      }
      iVar6 = 1 << (*(byte *)((int)piVar1 + 0xe) & 0x1f);
      uVar10 = 0;
      uVar8 = local_8a4;
      iVar9 = iVar5;
      uVar3 = _SfGetPixelType_4(piVar1);
      _SfVideo_InitBitmapInfo_28(local_428,uVar3,uVar8,iVar9,iVar2,iVar6,uVar10);
      iVar2 = param_3[0x10c];
      iVar9 = *param_3;
      if (iVar2 == 0) {
        uVar4 = (uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f;
        iVar2 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
      }
      iVar2 = _SfVideoPlugin_ApplyFilterAutoCooked_108
                        (local_428,(*(int *)(iVar9 + 8) - iVar5) * iVar2 + param_3[0x10b],0,iVar2,
                         local_890,puVar7[6],puVar7[7],~-(uint)(puVar7[4] != 0) & (uint)local_850,
                         ~-(uint)(puVar7[4] != 0) & local_894,0,local_89c,local_890,puVar7[6],
                         puVar7[7],param_1,puVar7[-10],puVar7[-9],puVar7[-4],puVar7[-3],puVar7[-2],
                         puVar7[-1],*puVar7,puVar7[1],puVar7[2],puVar7[3],0,param_10);
      if (iVar2 < 0) {
        *param_2 = local_8ac;
        return 0;
      }
      if (puVar7[4] == 0) {
        param_3[0x10d] = (local_8ac[0x10d] ^ param_3[0x10d]) & 2U ^ param_3[0x10d];
        (*(code *)local_8ac[0x114])(local_8ac,local_8ac[0x115],local_8ac[0x116]);
      }
      if ((*(byte *)(puVar7 + 8) & 1) != 0) {
        param_3[0x10d] = param_3[0x10d] | 2;
      }
      local_898 = local_898 + 1;
      puVar7 = puVar7 + 0x14;
    } while (local_898 < param_8);
  }
  *param_2 = param_3;
  return 0;
}


