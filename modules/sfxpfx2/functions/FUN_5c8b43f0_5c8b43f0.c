/* Module: sfxpfx2.dll
   Function: FUN_5c8b43f0
   Address: 5c8b43f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5c8b43f0(uint *param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  switch(param_2) {
  case 0x60a:
    return (uint *)param_1[7];
  case 0x60b:
    return (uint *)param_1[4];
  case 0x60c:
    return (uint *)param_1[5];
  case 0x60d:
    param_1[4] = (int)(short)param_4;
    param_1[5] = (int)(short)((uint)param_4 >> 0x10);
    break;
  case 0x60e:
    param_1[4] = (uint)param_4;
    break;
  case 0x60f:
    param_1[5] = (uint)param_4;
    break;
  case 0x610:
    iVar3 = FUN_5c8b1440((byte *)param_1,(int)param_4);
    iVar4 = FUN_5c8b1440((byte *)param_1,param_1[7]);
    param_1[7] = (uint)param_4;
    if (iVar3 != iVar4) {
      FUN_5c8b1e40((byte *)param_1,param_3);
    }
    return (uint *)param_1[7];
  case 0x611:
    puVar5 = (uint *)param_1[4];
    if (((int)param_1[4] <= (int)param_4) &&
       (puVar5 = (uint *)param_1[5], (int)param_4 <= (int)param_1[5])) {
      puVar5 = param_4;
    }
    param_1[6] = (uint)puVar5;
    return puVar5;
  default:
    return (uint *)0x0;
  case 0x627:
    param_1[0x42] = (uint)param_4;
    return (uint *)0x0;
  case 0x628:
    return (uint *)param_1[0x42];
  case 0x629:
    param_1[0x47] = (uint)param_4;
    return (uint *)0x0;
  case 0x62a:
    return (uint *)param_1[0x47];
  case 0x62d:
    param_1[4] = *param_4;
    uVar2 = param_4[1];
    uVar8 = param_1[4];
    param_1[5] = uVar2;
    uVar7 = param_4[2];
    uVar6 = uVar8;
    if (((int)uVar8 <= (int)uVar7) && (uVar6 = uVar2, (int)uVar7 <= (int)uVar2)) {
      uVar6 = uVar7;
    }
    param_1[6] = uVar6;
    param_1[0x28] = param_4[3];
    uVar2 = param_4[4];
    param_1[0x29] = uVar2;
    if ((uVar2 == 0) &&
       (uVar2 = (int)((param_1[5] - uVar8) + 5) / 10, param_1[0x29] = uVar2, uVar2 == 0)) {
      param_1[0x29] = 1;
    }
    uVar2 = ~param_4[6] & *param_1 | param_4[5] & param_4[6];
    *param_1 = uVar2;
    uVar2 = uVar2 >> 6 & 1;
    param_1[3] = uVar2 << 4 | param_1[3] & 0xffffffef;
    if (uVar2 == 0) {
      param_1[9] = 1;
      param_1[0x40] = 1;
      param_1[0x41] = 0;
    }
    else {
      param_1[9] = 2;
      *param_1 = *param_1 | 2;
    }
    if ((*param_1 & 0x80) != 0) {
      iVar3 = FUN_5c8b1510(param_1[5]);
      uVar2 = param_1[5];
      uVar8 = param_1[4];
      iVar4 = FUN_5c8b1510(uVar8);
      if (iVar3 - iVar4 < 1) {
        uVar7 = 1;
      }
      else {
        iVar4 = FUN_5c8b1510(param_1[4]);
        uVar7 = iVar3 - iVar4;
      }
      param_1[0xb] = uVar7;
      param_1[10] = param_1[5] -
                    (int)(((longlong)iVar3 * (longlong)(int)(uVar2 - uVar8)) / (longlong)(int)uVar7)
      ;
    }
    param_1[3] = *param_1 >> 0x1b & 1 | (*param_1 & 1) << 3 | param_1[3] & 0xfffffff6;
    FUN_5c8b3930(param_1);
    puVar5 = param_1 + 7;
    FUN_5c8aed50((int)param_1,puVar5,param_4[8]);
    FUN_5c8aedc0((int)param_1,(int *)puVar5,(int)puVar5,0,(1 << ((byte)param_1[9] & 0x1f)) - 1);
    FUN_5c8b1e40((byte *)param_1,1);
    return (uint *)0x0;
  case 0x62e:
    uVar2 = param_1[9];
    uVar8 = (1 << ((byte)uVar2 & 0x1f)) - 1U & (uint)param_4;
    param_1[0x40] = uVar8;
    if (uVar8 == 0) {
      param_1[0x40] = 1;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        if ((param_1[0x40] & 1 << ((byte)uVar8 & 0x1f)) != 0) {
          param_1[0x41] = uVar8;
          return (uint *)0x0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
      return (uint *)0x0;
    }
    return (uint *)0x0;
  case 0x62f:
    uVar2 = param_3 & 0xffff;
    uVar8 = param_3 >> 0x10;
    if (uVar8 != 0) {
      iVar3 = FUN_5c8b1440((byte *)param_1,(int)param_4);
      iVar4 = FUN_5c8b1440((byte *)param_1,param_1[uVar8 + 6]);
      param_1[uVar8 + 6] = (uint)param_4;
      if (iVar3 != iVar4) {
        FUN_5c8b1e40((byte *)param_1,uVar2);
      }
      return (uint *)param_1[uVar8 + 6];
    }
    bVar1 = false;
    param_3 = 0;
    if (param_1[9] != 0) {
      puVar5 = param_1 + 7;
      puVar9 = param_4;
      do {
        iVar3 = FUN_5c8b1440((byte *)param_1,*puVar9);
        iVar4 = FUN_5c8b1440((byte *)param_1,*puVar5);
        if (iVar3 != iVar4) {
          bVar1 = true;
          break;
        }
        param_3 = param_3 + 1;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
      } while (param_3 < param_1[9]);
    }
    FUN_5c8aed50((int)param_1,param_1 + 7,(int)param_4);
    if (!bVar1) {
      return (uint *)0x0;
    }
    FUN_5c8b1e40((byte *)param_1,uVar2);
    return (uint *)0x0;
  case 0x630:
    if (param_3 >> 0x10 == 0) {
      FUN_5c8aed50((int)param_1,param_4,(int)(param_1 + 7));
      return (uint *)0x0;
    }
    return (uint *)param_1[(param_3 >> 0x10) + 6];
  case 0x631:
    param_1[3] = ((uint)param_4 & 1) << 0x13 | param_1[3] & 0xfff7ffff;
    return (uint *)0x0;
  case 0x632:
    return (uint *)((int)(param_1[3] << 0xc) >> 0x1f);
  }
  uVar2 = param_1[4];
  if (((int)uVar2 < 0) && (-1 < (int)param_1[5])) {
    param_1[6] = ~-(uint)(param_1[5] != 0) & uVar2;
  }
  else {
    param_1[6] = (int)(uVar2 + param_1[5]) / 2;
  }
  if ((*param_1 & 0x80) != 0) {
    iVar3 = FUN_5c8b1510(param_1[5]);
    uVar2 = param_1[5];
    uVar8 = param_1[4];
    iVar4 = FUN_5c8b1510(uVar8);
    if (iVar3 - iVar4 < 1) {
      uVar7 = 1;
    }
    else {
      iVar4 = FUN_5c8b1510(param_1[4]);
      uVar7 = iVar3 - iVar4;
    }
    param_1[0xb] = uVar7;
    param_1[10] = param_1[5] -
                  (int)(((longlong)iVar3 * (longlong)(int)(uVar2 - uVar8)) / (longlong)(int)uVar7);
  }
  uVar2 = param_1[4];
  param_1[3] = (uint)((int)(param_1[5] - uVar2) <= (int)param_1[0x1d]) << 0xc |
               param_1[3] & 0xffffefff;
  uVar8 = param_1[6];
  if (((int)uVar2 <= (int)uVar8) && (uVar2 = param_1[5], (int)uVar8 <= (int)param_1[5])) {
    uVar2 = uVar8;
  }
  param_1[6] = uVar2;
  FUN_5c8aedc0((int)param_1,(int *)(param_1 + 7),(int)(param_1 + 7),0,
               (1 << ((byte)param_1[9] & 0x1f)) - 1);
  FUN_5c8b1e40((byte *)param_1,param_3);
  return (uint *)0x0;
}


