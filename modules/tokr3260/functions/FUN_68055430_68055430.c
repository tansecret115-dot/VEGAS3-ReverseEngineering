/* Module: tokr3260.dll
   Function: FUN_68055430
   Address: 68055430
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68055430(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  uint local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  uint *local_10;
  int local_c;
  uint local_8;
  
  puVar5 = param_2;
  puVar4 = param_1;
  local_8 = 0;
  if (param_1[0x1860] == 1) {
    FUN_68058ad0(4,(int)param_2,(int *)&local_8,param_1 + 0x186d);
    puVar7 = param_1 + 0x1861;
    param_2 = (uint *)0x4;
    do {
      FUN_68058ad0(2,(int)puVar5,(int *)&local_8,puVar7);
      puVar7 = puVar7 + 1;
      param_2 = (uint *)((int)param_2 + -1);
    } while (param_2 != (uint *)0x0);
    iVar10 = 2;
  }
  else {
    iVar10 = 6;
  }
  FUN_68058ad0(iVar10,(int)puVar5,(int *)&local_8,&local_28);
  puVar7 = param_1 + 1;
  FUN_68058ad0(2,(int)puVar5,(int *)&local_8,puVar7);
  uVar1 = *puVar7;
  *puVar7 = uVar1 + 1;
  iVar10 = 0;
  if (0 < (int)(uVar1 + 1)) {
    puVar8 = param_1 + 4;
    do {
      *puVar8 = 0;
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 0x10;
    } while (iVar10 < (int)*puVar7);
  }
  param_1 = (uint *)0x0;
  if (0 < (int)*puVar7) {
    param_2 = puVar4 + 4;
    do {
      FUN_68058ad0(3,(int)puVar5,(int *)&local_8,param_2);
      local_c = 0;
      puVar7 = param_2;
      if (0 < (int)*param_2) {
        do {
          FUN_68058ad0(4,(int)puVar5,(int *)&local_8,puVar7 + 8);
          FUN_68058ad0(5,(int)puVar5,(int *)&local_8,puVar7 + 1);
          local_c = local_c + 1;
          puVar7 = puVar7 + 1;
        } while (local_c < (int)*param_2);
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 + 0x10;
    } while ((int)param_1 < (int)puVar4[1]);
  }
  FUN_68058ad0(5,(int)puVar5,(int *)&local_8,puVar4 + 0x44);
  if (puVar4[0x44] != 0) {
    FUN_68058ad0(2,(int)puVar5,(int *)&local_8,puVar4 + 2);
    uVar1 = puVar4[2];
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 3)) {
      return -999999;
    }
  }
  puVar4[0x109e] = 0;
  local_24 = 0;
  if (0 < (int)puVar4[0x44]) {
    param_2 = puVar4 + 0x45;
    do {
      param_1 = (uint *)0x0;
      if (0 < (int)puVar4[1]) {
        local_10 = param_2 + 3;
        do {
          FUN_68058ad0(1,(int)puVar5,(int *)&local_8,local_10);
          param_1 = (uint *)((int)param_1 + 1);
          local_10 = local_10 + 1;
        } while ((int)param_1 < (int)puVar4[1]);
      }
      local_20 = param_2 + 1;
      FUN_68058ad0(3,(int)puVar5,(int *)&local_8,local_20);
      FUN_68058ad0(3,(int)puVar5,(int *)&local_8,param_2);
      if ((int)*param_2 < 2) {
        return -999999;
      }
      if (7 < (int)*param_2) {
        return -999999;
      }
      if (puVar4[2] == 3) {
        FUN_68058ad0(1,(int)puVar5,(int *)&local_8,param_2 + 2);
      }
      else {
        param_2[2] = puVar4[2];
      }
      param_1 = param_2 + 2;
      uVar1 = *param_2;
      if (*(int *)(*(int *)(puVar4[0x3c89] + 0x2c) + uVar1 * 4) == -999999) {
        return -999999;
      }
      local_14 = FUN_68053a30(*local_20);
      if (local_14 == -999999) {
        return -999999;
      }
      local_20 = (uint *)(*(int *)(*(int *)(puVar4[0x3c89] + 0x44) + *param_1 * 4) + uVar1 * 0x2c);
      if (local_20 == (undefined4 *)0x0) {
        return -999999;
      }
      param_1 = (uint *)0x0;
      if (0 < (int)(puVar4[1] << 2)) {
        local_10 = param_2 + 7;
        local_1c = param_2 + 0x17;
        do {
          iVar10 = FUN_68053a10((int)param_1);
          puVar7 = local_10;
          if (iVar10 == -999999) {
            return -999999;
          }
          if (param_2[iVar10 + 3] != 0) {
            FUN_68058ad0(3,(int)puVar5,(int *)&local_8,local_10);
            local_c = 0;
            if (0 < (int)*puVar7) {
              local_18 = local_1c;
              do {
                uVar1 = puVar4[0x109e];
                puVar4[0x109e] = uVar1 + 1;
                puVar7 = puVar4 + uVar1 * 0xe + 0x109f;
                *local_18 = (uint)puVar7;
                FUN_68058ad0(6,(int)puVar5,(int *)&local_8,puVar7 + 1);
                FUN_68058ad0(6,(int)puVar5,(int *)&local_8,&local_2c);
                uVar1 = (int)param_1 * 0x40 + local_2c;
                *puVar7 = uVar1;
                if (0x400 < (int)(uVar1 + local_14)) {
                  local_14 = 0x400 - uVar1;
                }
                iVar10 = FUN_68055ad0(local_20,(int *)(puVar7 + 2),local_14,puVar5,&local_8);
                if (iVar10 < 0) {
                  return iVar10;
                }
                local_c = local_c + 1;
                local_18 = local_18 + 1;
              } while (local_c < (int)*local_10);
            }
          }
          local_1c = local_1c + 7;
          local_10 = local_10 + 1;
          param_1 = (uint *)((int)param_1 + 1);
        } while ((int)param_1 < (int)(puVar4[1] * 4));
      }
      local_24 = local_24 + 1;
      param_2 = param_2 + 0x87;
    } while (local_24 < (int)puVar4[0x44]);
  }
  param_1 = puVar4 + 0x141f;
  FUN_68058ad0(5,(int)puVar5,(int *)&local_8,puVar4);
  *puVar4 = *puVar4 + 1;
  FUN_68058ad0(1,(int)puVar5,(int *)&local_8,puVar4 + 3);
  param_2 = (uint *)0x0;
  if (0 < (int)*puVar4) {
    do {
      *param_1 = 0;
      bVar6 = (byte)((int)local_8 >> 0x1f);
      bVar6 = 0x80 >> ((((byte)local_8 ^ bVar6) - bVar6 & 7 ^ bVar6) - bVar6 & 0x1f);
      pbVar9 = (byte *)(((int)local_8 >> 3) + (int)puVar5);
      local_8 = local_8 + 3;
      local_24 = 3;
      do {
        uVar1 = *param_1;
        *param_1 = uVar1 << 1;
        if ((*pbVar9 & bVar6) != 0) {
          *param_1 = uVar1 << 1 | 1;
        }
        bVar6 = bVar6 >> 1;
        if (bVar6 == 0) {
          bVar6 = 0x80;
          pbVar9 = pbVar9 + 1;
        }
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      param_1 = param_1 + 1;
      param_2 = (uint *)((int)param_2 + 1);
      local_24 = 0;
    } while ((int)param_2 < (int)*puVar4);
  }
  param_2 = (uint *)0x0;
  if (0 < (int)*puVar4) {
    puVar7 = puVar4 + 0x143f;
    iVar10 = 0x507c - (int)puVar7;
    do {
      if (*(int *)((int)puVar4 + iVar10 + (int)puVar7) == 0) {
        *puVar7 = 0;
      }
      else {
        *puVar7 = 0;
        bVar6 = (byte)((int)local_8 >> 0x1f);
        bVar6 = 0x80 >> ((((byte)local_8 ^ bVar6) - bVar6 & 7 ^ bVar6) - bVar6 & 0x1f);
        pbVar9 = (byte *)(((int)local_8 >> 3) + (int)puVar5);
        local_8 = local_8 + 6;
        local_24 = 6;
        do {
          uVar1 = *puVar7;
          *puVar7 = uVar1 << 1;
          if ((*pbVar9 & bVar6) != 0) {
            *puVar7 = uVar1 << 1 | 1;
          }
          bVar6 = bVar6 >> 1;
          if (bVar6 == 0) {
            bVar6 = 0x80;
            pbVar9 = pbVar9 + 1;
          }
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_24 = 0;
      }
      puVar7 = puVar7 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)*puVar4);
  }
  uVar1 = puVar4[3];
  param_2 = (uint *)0x0;
  if ((int)*puVar4 < 1) {
    return local_8;
  }
  param_1 = (uint *)0x4;
  do {
    uVar2 = puVar4[0x3c89];
    iVar10 = *(int *)(*(int *)(uVar2 + 0x2c) + *(int *)((int)(puVar4 + 0x141e) + (int)param_1) * 4);
    if (iVar10 == -999999) {
      return -999999;
    }
    if (iVar10 < 1) {
      iVar10 = *(int *)((int)param_1 + *(int *)(uVar2 + 0x38) + -4);
      if (iVar10 == -999999) {
        return -999999;
      }
      iVar3 = *(int *)((int)param_1 + *(int *)(uVar2 + 0x38));
      if (iVar3 == -999999) {
        return -999999;
      }
      if (iVar10 < iVar3) {
        puVar7 = puVar4 + iVar10 + 0x145f;
        do {
          *puVar7 = 0;
          iVar10 = iVar10 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar10 < *(int *)(*(int *)(puVar4[0x3c89] + 0x38) + (int)param_1));
      }
    }
    else {
      local_20 = (uint *)(*(int *)(*(int *)(uVar2 + 0x40) + uVar1 * 4) +
                         *(int *)((int)(puVar4 + 0x141e) + (int)param_1) * 0x2c);
      if (local_20 == (undefined4 *)0x0) {
        return -999999;
      }
      iVar10 = *(int *)(*(int *)(uVar2 + 0x38) + -4 + (int)param_1);
      if (iVar10 == -999999) {
        return -999999;
      }
      iVar3 = *(int *)(*(int *)(uVar2 + 0x30) + -4 + (int)param_1);
      if (iVar3 == -999999) {
        return -999999;
      }
      iVar10 = FUN_68055ad0(local_20,(int *)(puVar4 + iVar10 + 0x145f),iVar3,puVar5,&local_8);
      if (iVar10 < 0) {
        return iVar10;
      }
    }
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = param_1 + 1;
    if ((int)*puVar4 <= (int)param_2) {
      return local_8;
    }
  } while( true );
}


