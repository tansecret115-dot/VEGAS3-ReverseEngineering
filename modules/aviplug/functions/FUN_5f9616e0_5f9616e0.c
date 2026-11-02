/* Module: aviplug.dll
   Function: FUN_5f9616e0
   Address: 5f9616e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9616e0(int param_1,SIZE_T param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int *param_6,uint param_7,int *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  int iVar5;
  size_t _Size;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  uVar6 = param_5;
  iVar2 = 1;
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar9 = param_2 * 0x90;
  iVar11 = *(int *)(*(int *)(param_1 + 0x25c) + 0xc4);
  iVar5 = iVar9 + iVar11;
  iVar11 = *(int *)(iVar9 + iVar11);
  if (iVar11 != 0x73647561) {
    if (iVar11 == 0x73646976) {
      puVar4 = (undefined4 *)(iVar9 + *(int *)(*(int *)(param_1 + 0x25c) + 0xc4));
      iVar2 = FUN_5f94d1c0(puVar4[3],1,(int *)&param_5);
      piVar10 = param_6;
      if (-1 < iVar2) {
        piVar8 = puVar4 + 4;
        iVar2 = 0;
        puVar1 = puVar4;
        if (0 < (int)puVar4[4]) {
          do {
            iVar5 = puVar1[10] * 0x90 + *(int *)(*(int *)(param_1 + 0x25c) + 0xc4);
            if ((*(int *)(iVar5 + 0x80) != puVar4[0x20]) || (*(int *)(iVar5 + 0x84) != puVar4[0x21])
               ) {
              return -0x7ffbbf98;
            }
            iVar2 = iVar2 + 1;
            puVar1[6] = *(undefined4 *)(iVar5 + 0x74);
            puVar1[7] = param_5;
            puVar1 = puVar1 + 6;
          } while (iVar2 < *piVar8);
        }
        param_8 = piVar8;
        iVar2 = FUN_5f94da20((int *)puVar4[3],0,(uint)param_6,piVar8);
        if (-1 < iVar2) {
          uVar6 = puVar4[0x20];
          puVar4[0x20] = uVar6 + param_5;
          puVar4[0x21] = puVar4[0x21] + ((int)param_5 >> 0x1f) + (uint)CARRY4(uVar6,param_5);
          if (*(int *)(*(int *)(param_1 + 0x25c) + 0xc0) != 0) {
            uVar6 = FUN_5f961f10(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) +
                                         param_2 * 4));
            iVar2 = FUN_5f940a90(**(int **)(param_1 + 0x25c),
                                 (int *)(*(int **)(param_1 + 0x25c))[0x32],uVar6,1,1,piVar10,param_7
                                );
            if (iVar2 < 0) {
              return iVar2;
            }
            piVar10 = (int *)(*(int *)(param_1 + 0x25c) + 0xcc);
            *piVar10 = *piVar10 + 1;
          }
          param_2 = 0;
          if (0 < *piVar8) {
            param_6 = puVar4 + 10;
            do {
              iVar2 = *(int *)(param_1 + 0x25c);
              iVar5 = *param_6 * 0x90 + *(int *)(iVar2 + 0xc4);
              uVar6 = *(int *)(iVar5 + 0x8c) * param_5;
              iVar11 = *(int *)(iVar5 + 0x8c) * *(int *)(iVar5 + 0x88);
              if (*(int *)(iVar2 + 0xc0) != 0) {
                uVar7 = FUN_5f961f10(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 8) + *param_6 * 4));
                iVar2 = FUN_5f940a90(**(int **)(param_1 + 0x25c),
                                     (int *)(*(int **)(param_1 + 0x25c))[0x32],uVar7,param_5,0,
                                     *(undefined4 **)(iVar5 + 0x74),uVar6);
                if (iVar2 < 0) {
                  return 0;
                }
                piVar10 = (int *)(*(int *)(param_1 + 0x25c) + 0xcc);
                *piVar10 = *piVar10 + 1;
              }
              uVar7 = *(uint *)(iVar5 + 0x80);
              *(uint *)(iVar5 + 0x80) = uVar7 + param_5;
              *(uint *)(iVar5 + 0x84) =
                   *(int *)(iVar5 + 0x84) + ((int)param_5 >> 0x1f) + (uint)CARRY4(uVar7,param_5);
              iVar2 = *(int *)(iVar5 + 0x88) - param_5;
              *(int *)(iVar5 + 0x88) = iVar2;
              if (iVar2 < 0) {
                *(undefined4 *)(iVar5 + 0x88) = 0;
              }
              puVar4 = *(undefined4 **)(iVar5 + 0x74);
              _Size = iVar11 - uVar6;
              if ((int)_Size < 1) {
                iVar2 = 0;
              }
              else {
                memmove(puVar4,(undefined4 *)((int)puVar4 + uVar6),_Size);
                iVar2 = *(int *)(iVar5 + 0x8c) * *(int *)(iVar5 + 0x88);
                puVar4 = (undefined4 *)(*(int *)(iVar5 + 0x74) + iVar2);
              }
              uVar7 = iVar11 - iVar2;
              for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
              param_6 = param_6 + 6;
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar4 = 0;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              }
              param_2 = param_2 + 1;
            } while ((int)param_2 < *param_8);
          }
          return 0;
        }
      }
    }
    else if (param_8 != (int *)0x0) {
      *param_8 = 1;
      return iVar2;
    }
    return iVar2;
  }
  SVar3 = (*(int *)(iVar5 + 0x88) + param_5) * *(int *)(iVar5 + 0x8c);
  if (SVar3 - *(int *)(iVar5 + 0x78) != 0 && *(int *)(iVar5 + 0x78) <= (int)SVar3) {
    puVar4 = FUN_5f943000(*(undefined4 **)(iVar5 + 0x74),SVar3,0,1,&param_2,(SIZE_T *)0x0);
    if (puVar4 == (undefined4 *)0x0) {
      return -0x7ffbbf99;
    }
    *(undefined4 **)(iVar5 + 0x74) = puVar4;
    *(SIZE_T *)(iVar5 + 0x78) = param_2;
  }
  iVar2 = *(int *)(iVar5 + 0x8c) * uVar6;
  piVar8 = (int *)(*(int *)(iVar5 + 0x8c) * *(int *)(iVar5 + 0x88) + *(int *)(iVar5 + 0x74));
  piVar10 = piVar8;
  for (uVar6 = param_7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar10 = *param_6;
    param_6 = param_6 + 1;
    piVar10 = piVar10 + 1;
  }
  for (uVar6 = param_7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)piVar10 = (char)*param_6;
    param_6 = (int *)((int)param_6 + 1);
    piVar10 = (int *)((int)piVar10 + 1);
  }
  if ((int)param_7 < iVar2) {
    uVar7 = iVar2 - param_7;
    puVar4 = (undefined4 *)((int)piVar8 + param_7);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(uint *)(iVar5 + 0x88) = *(int *)(iVar5 + 0x88) + param_5;
  return 0;
}


