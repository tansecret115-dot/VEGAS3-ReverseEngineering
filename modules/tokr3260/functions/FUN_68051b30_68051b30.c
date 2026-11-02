/* Module: tokr3260.dll
   Function: FUN_68051b30
   Address: 68051b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68051b30(int param_1,undefined4 *param_2,uint *param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint local_14 [4];
  
  puVar2 = param_3;
  puVar4 = local_14 + 2;
  iVar6 = 2;
  *param_3 = param_5;
  uVar3 = param_3[0x16];
  param_3[8] = 0;
  do {
    *puVar4 = uVar3;
    uVar3 = uVar3 + 0x1000;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_3 = (uint *)0x0;
  if (0 < param_4) {
    do {
      puVar4 = *(uint **)(*(int *)(puVar2[0x12] + (int)param_3 * 4) + 0xf21c);
      FUN_68053cc0((int)puVar4);
      puVar4[0x3c86] = *(uint *)(puVar2[0x12] + (int)param_3 * 4);
      puVar4[0x3c87] = *(uint *)(puVar2[0x12] + (int)param_3 * 4);
      puVar4[0x3c84] = *puVar2;
      iVar6 = 0x6184;
      puVar5 = puVar4 + 0x1865;
      do {
        iVar6 = iVar6 + 4;
        *puVar5 = *(uint *)((puVar4[0x3c86] - 4) + iVar6);
        puVar5 = puVar5 + 1;
      } while (iVar6 < 0x6194);
      puVar4[0x186e] = *(uint *)(puVar4[0x3c86] + 0x61b4);
      puVar4[0x1870] = *(uint *)(puVar4[0x3c86] + 4);
      *(uint **)(puVar2[0x12] + (int)param_3 * 4) = puVar4;
      if (((puVar2[2] == 2) && (puVar2[3] == 0x12)) && (puVar4[0x3c85] == 1)) {
        puVar4[0x1860] = 1;
      }
      else {
        puVar4[0x1860] = 0;
      }
      iVar6 = FUN_680560f0(param_1,puVar4);
      if (iVar6 == -999999) {
        return -999999;
      }
      if (iVar6 < 0) {
        return iVar6;
      }
      puVar1 = (undefined4 *)local_14[(int)param_3 + 2];
      iVar6 = FUN_680560a0((int *)puVar4,puVar1);
      if (iVar6 == -999999) {
        return -999999;
      }
      local_14[(int)param_3] = (uint)puVar1;
      param_3 = (uint *)((int)param_3 + 1);
    } while ((int)param_3 < param_4);
  }
  iVar6 = FUN_68057190((int)local_14,param_2,(int *)puVar2[0x12],puVar2[0x15],param_4,puVar2[3]);
  return (-(uint)(iVar6 != -999999) & 999999) - 999999;
}


