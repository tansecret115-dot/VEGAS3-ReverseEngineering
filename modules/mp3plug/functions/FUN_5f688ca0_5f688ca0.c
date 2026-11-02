/* Module: mp3plug.dll
   Function: FUN_5f688ca0
   Address: 5f688ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f688ca0(uint *param_1,uint param_2,ushort *param_3,int param_4,int *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int local_c;
  uint local_8 [2];
  
  puVar2 = param_3;
  local_c = 0;
  if ((param_2 & 0xfffffffc) < 0x2001) {
    param_2 = param_2 >> 2;
  }
  else {
    param_2 = 0x800;
  }
  if (param_4 == 0) {
    local_8[0] = *param_1;
    FUN_5f6889f0(param_3,(byte *)local_8);
    bVar3 = FUN_5f688c00(puVar2);
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      return 0x8004e008;
    }
LAB_5f688f96:
    uVar8 = *puVar2 & 0x6000;
    if (uVar8 == 0x6000) {
      iVar5 = FUN_5f6883f0(puVar2);
      iVar6 = FUN_5f688910(puVar2);
      iVar7 = FUN_5f688c70(puVar2);
      puVar2[2] = 0x180;
      puVar2[3] = 0;
      iVar7 = ((iVar5 * 0xc) / iVar6 + iVar7) * 4;
    }
    else {
      if ((uVar8 != 0x2000) && (uVar8 != 0x4000)) {
        return 0x8004e008;
      }
      iVar5 = FUN_5f6883f0(puVar2);
      iVar6 = FUN_5f688910(puVar2);
      iVar7 = FUN_5f688c70(puVar2);
      uVar4 = (iVar5 * 0x90) / iVar6;
      uVar8 = *puVar2;
      puVar2[2] = 0x480;
      puVar2[3] = 0;
      *(uint *)(puVar2 + 4) = uVar4;
      if ((uVar8 & 0x1800) != 0x1800) {
        puVar2[2] = 0x240;
        puVar2[3] = 0;
        *(uint *)(puVar2 + 4) = uVar4 >> 1;
      }
      iVar7 = *(int *)(puVar2 + 4) + iVar7;
    }
    *(int *)(puVar2 + 4) = iVar7;
    if (param_5 != (int *)0x0) {
      *param_5 = local_c;
    }
    return 0;
  }
  param_4 = 0;
  if (param_2 != 0) {
    do {
      param_3 = (ushort *)0xf;
      local_8[0] = *param_1;
      uVar4 = (local_8[0] >> 8 & 0xff) << 8;
      uVar8 = (*puVar2 ^
              ((ushort)((local_8[0] >> 8 & 0xe0) >> 5) | (ushort)((local_8[0] & 0xff) << 3))) &
              0x7ff ^ *puVar2;
      *puVar2 = uVar8;
      *puVar2 = (ushort)((((uVar4 & 0x600) >> 9) << 2 | (uVar4 & 0x1800) >> 0xb) << 0xb) |
                uVar8 & 0x87ff;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_3);
      *puVar2 = *puVar2 & 0x7fff | (ushort)(uVar4 << 0xf);
      uVar4 = FUN_5f688990((int)local_8,4,(int *)&param_3);
      puVar2[1] = (byte)((byte)puVar2[1] ^ (byte)uVar4) & 0xf ^ puVar2[1];
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_3);
      puVar2[1] = (ushort)((uVar4 & 3) << 4) | puVar2[1] & 0xffcf;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_3);
      puVar2[1] = (ushort)((uVar4 & 1) << 6) | puVar2[1] & 0xffbf;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_3);
      puVar2[1] = (ushort)((uVar4 & 1) << 7) | puVar2[1] & 0xff7f;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_3);
      puVar2[1] = ((byte)uVar4 & 3) << 8 | puVar2[1] & 0xfcff;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_3);
      uVar8 = puVar2[1];
      uVar1 = (ushort)((uVar4 & 3) << 10);
      puVar2[1] = uVar1 | uVar8 & 0xf3ff;
      if ((uVar8 & 0x300) == 0) {
        puVar2[1] = uVar1 | uVar8 & 0xf0ff;
      }
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_3);
      puVar2[1] = (ushort)((uVar4 & 1) << 0xc) | puVar2[1] & 0xefff;
      uVar4 = FUN_5f688990((int)local_8,1,(int *)&param_3);
      puVar2[1] = (ushort)((uVar4 & 1) << 0xd) | puVar2[1] & 0xdfff;
      uVar4 = FUN_5f688990((int)local_8,2,(int *)&param_3);
      puVar2[1] = (ushort)(uVar4 << 0xe) | puVar2[1] & 0x3fff;
      bVar3 = FUN_5f688c00(puVar2);
      if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_5f688f96;
      param_1 = (uint *)((int)param_1 + 1);
      local_c = local_c + 1;
      param_4 = param_4 + 1;
    } while (param_4 < (int)param_2);
  }
  return 0x8004e008;
}


