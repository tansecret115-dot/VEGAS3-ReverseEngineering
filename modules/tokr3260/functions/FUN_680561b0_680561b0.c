/* Module: tokr3260.dll
   Function: FUN_680561b0
   Address: 680561b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_680561b0(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int local_20;
  int local_1c;
  uint *local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  puVar3 = param_2;
  puVar2 = param_1;
  local_8 = 0;
  if (param_1[0x1860] == 1) {
    FUN_68058a40(param_1[0x186d],4,(int)param_2,&local_8);
    puVar6 = param_1 + 0x1861;
    param_2 = (uint *)0x4;
    do {
      FUN_68058a40(*puVar6,2,(int)puVar3,&local_8);
      puVar6 = puVar6 + 1;
      param_2 = (uint *)((int)param_2 + -1);
    } while (param_2 != (uint *)0x0);
    iVar8 = 2;
    uVar7 = 3;
  }
  else {
    iVar8 = 6;
    uVar7 = 0x28;
  }
  FUN_68058a40(uVar7,iVar8,(int)puVar3,&local_8);
  FUN_68058a40(param_1[1] - 1,2,(int)puVar3,&local_8);
  local_18 = (uint *)0x0;
  if (0 < (int)param_1[1]) {
    puVar6 = param_1 + 4;
    do {
      FUN_68058a40(*puVar6,3,(int)puVar3,&local_8);
      param_1 = (uint *)0x0;
      puVar5 = puVar6;
      if (0 < (int)*puVar6) {
        do {
          FUN_68058a40(puVar5[8],4,(int)puVar3,&local_8);
          FUN_68058a40(puVar5[1],5,(int)puVar3,&local_8);
          param_1 = (uint *)((int)param_1 + 1);
          puVar5 = puVar5 + 1;
        } while ((int)param_1 < (int)*puVar6);
      }
      local_18 = (uint *)((int)local_18 + 1);
      puVar6 = puVar6 + 0x10;
    } while ((int)local_18 < (int)puVar2[1]);
  }
  FUN_68058a40(puVar2[0x44],5,(int)puVar3,&local_8);
  if (puVar2[0x44] != 0) {
    FUN_68058a40(puVar2[2],2,(int)puVar3,&local_8);
  }
  puVar2[0x109e] = 0;
  local_20 = 0;
  if (0 < (int)puVar2[0x44]) {
    param_2 = puVar2 + 0x45;
    do {
      iVar8 = 0;
      if (0 < (int)puVar2[1]) {
        param_1 = param_2 + 3;
        do {
          FUN_68058a40(*param_1,1,(int)puVar3,&local_8);
          iVar8 = iVar8 + 1;
          param_1 = param_1 + 1;
        } while (iVar8 < (int)puVar2[1]);
      }
      FUN_68058a40(param_2[1],3,(int)puVar3,&local_8);
      FUN_68058a40(*param_2,3,(int)puVar3,&local_8);
      if (puVar2[2] == 3) {
        FUN_68058a40(param_2[2],1,(int)puVar3,&local_8);
      }
      uVar7 = *param_2;
      if (((*(int *)(*(int *)(puVar2[0x3c89] + 0x2c) + uVar7 * 4) == -999999) ||
          (local_10 = FUN_68053a30(param_2[1]), local_10 == -999999)) ||
         (iVar8 = *(int *)(*(int *)(puVar2[0x3c89] + 0x44) + param_2[2] * 4) + uVar7 * 0x2c,
         iVar8 == 0)) goto LAB_680566ae;
      local_1c = 0;
      if (0 < (int)(puVar2[1] << 2)) {
        local_c = param_2 + 7;
        local_18 = param_2 + 0x17;
        do {
          iVar4 = FUN_68053a10(local_1c);
          if (iVar4 == -999999) goto LAB_680566ae;
          if (param_2[iVar4 + 3] != 0) {
            FUN_68058a40(*local_c,3,(int)puVar3,&local_8);
            param_1 = (uint *)0x0;
            if (0 < (int)*local_c) {
              local_14 = local_18;
              do {
                puVar2[0x109e] = puVar2[0x109e] + 1;
                puVar6 = (uint *)*local_14;
                FUN_68058a40(puVar6[1],6,(int)puVar3,&local_8);
                uVar7 = (int)*puVar6 >> 0x1f;
                FUN_68058a40(((*puVar6 ^ uVar7) - uVar7 & 0x3f ^ uVar7) - uVar7,6,(int)puVar3,
                             &local_8);
                if (0x400 < (int)(*puVar6 + local_10)) {
                  local_10 = 0x400 - *puVar6;
                }
                iVar4 = FUN_680566c0(iVar8,(int)(puVar6 + 2),local_10,(int)puVar3,&local_8);
                if (iVar4 == -999999) goto LAB_680566ae;
                param_1 = (uint *)((int)param_1 + 1);
                local_14 = local_14 + 1;
              } while ((int)param_1 < (int)*local_c);
            }
          }
          local_c = local_c + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 7;
        } while (local_1c < (int)(puVar2[1] * 4));
      }
      local_20 = local_20 + 1;
      param_2 = param_2 + 0x87;
    } while (local_20 < (int)puVar2[0x44]);
  }
  FUN_68058a40(*puVar2 - 1,5,(int)puVar3,&local_8);
  FUN_68058a40(puVar2[3],1,(int)puVar3,&local_8);
  iVar8 = 0;
  if (0 < (int)*puVar2) {
    param_2 = puVar2 + 0x141f;
    do {
      FUN_68058a40(*param_2,3,(int)puVar3,&local_8);
      iVar8 = iVar8 + 1;
      param_2 = param_2 + 1;
    } while (iVar8 < (int)*puVar2);
  }
  param_2 = (uint *)0x0;
  if (0 < (int)*puVar2) {
    puVar6 = puVar2 + 0x143f;
    iVar8 = 0x507c - (int)puVar6;
    do {
      if (*(int *)((int)puVar2 + iVar8 + (int)puVar6) != 0) {
        FUN_68058a40(*puVar6,6,(int)puVar3,&local_8);
      }
      param_2 = (uint *)((int)param_2 + 1);
      puVar6 = puVar6 + 1;
    } while ((int)param_2 < (int)*puVar2);
  }
  uVar7 = puVar2[3];
  param_2 = (uint *)0x0;
  if (0 < (int)*puVar2) {
    do {
      iVar8 = *(int *)(*(int *)(puVar2[0x3c89] + 0x2c) + puVar2[(int)param_2 + 0x141f] * 4);
      if ((iVar8 == -999999) ||
         ((0 < iVar8 &&
          (((iVar8 = *(int *)(*(int *)(puVar2[0x3c89] + 0x40) + uVar7 * 4) +
                     puVar2[(int)param_2 + 0x141f] * 0x2c, iVar8 == 0 ||
            (iVar4 = FUN_68053a50((int)param_2,0), iVar4 == -999999)) ||
           ((iVar1 = *(int *)(*(int *)(puVar2[0x3c89] + 0x30) + (int)param_2 * 4), iVar1 == -999999
            || (iVar8 = FUN_680566c0(iVar8,(int)(puVar2 + iVar4 + 0x145f),iVar1,(int)puVar3,&local_8
                                    ), iVar8 == -999999)))))))) goto LAB_680566ae;
      param_2 = (uint *)((int)param_2 + 1);
    } while ((int)param_2 < (int)*puVar2);
  }
  if (param_3 < (int)local_8) {
LAB_680566ae:
    local_8 = 0xfff0bdc1;
  }
  return local_8;
}


