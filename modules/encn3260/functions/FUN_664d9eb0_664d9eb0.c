/* Module: encn3260.dll
   Function: FUN_664d9eb0
   Address: 664d9eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664d9f4c) */

void FUN_664d9eb0(char *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  char local_2038 [4096];
  char local_1038 [4096];
  int local_38 [5];
  byte *local_24;
  int local_20;
  int iVar9;
  char *pcVar10;
  int iVar11;
  
  FUN_664d9260();
  pcVar6 = param_1;
  local_24 = (byte *)*param_2;
  if (param_1[3] == -0x36) {
    if (*(void **)(param_1 + 0x2a) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x2a));
    }
    pcVar10 = pcVar6 + 0x3e;
    pcVar7 = local_1038;
    FUN_6648f710(&local_20,pcVar10,-(uint)(*(int *)(pcVar6 + 0x46) != 0));
    iVar11 = 0;
    iVar9 = 0x664d9f0b;
    FUN_6648f710(local_38,pcVar10,0);
    if (local_20 != local_38[0]) {
      do {
        iVar11 = *(int *)(iVar11 + 4);
        *pcVar7 = (char)((uint)unaff_EDI >> 0x18);
        pcVar7[1] = (char)((uint)unaff_EDI >> 0x10);
        pcVar7[2] = (char)((uint)unaff_EDI >> 8);
        pcVar7[3] = (char)unaff_EDI;
        pcVar7 = pcVar7 + 4;
        while (iVar11 != 0) {
          puVar2 = (undefined4 *)FUN_664bab80(iVar11);
          pcVar10 = (char *)*puVar2;
          *pcVar7 = *pcVar10;
          pcVar6 = pcVar7 + 1;
          if (*pcVar10 != '\0') {
            *pcVar6 = pcVar10[1];
            bVar1 = pcVar10[1];
            pcVar6 = *(char **)(pcVar10 + 2);
            pcVar3 = pcVar7 + 2;
            for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar3 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar3 = pcVar3 + 1;
            }
            pcVar6 = pcVar7 + 2 + (byte)pcVar10[1];
          }
          if (*(void **)(pcVar10 + 2) != (void *)0x0) {
            operator_delete(*(void **)(pcVar10 + 2));
          }
          pcVar10 = (char *)0x664d9fab;
          FUN_664bab40((int *)&stack0xfffffff4);
          pcVar7 = pcVar6;
        }
        *pcVar7 = '\0';
        pcVar7 = pcVar7 + 1;
        uVar5 = (int)pcVar7 - (int)local_1038 >> 0x1f;
        iVar11 = (((int)pcVar7 - (int)local_1038 ^ uVar5) - uVar5 & 3 ^ uVar5) - uVar5;
        if (iVar11 != 0) {
          pcVar6 = pcVar7;
          for (uVar5 = 4U - iVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            pcVar6[0] = '\0';
            pcVar6[1] = '\0';
            pcVar6[2] = '\0';
            pcVar6[3] = '\0';
            pcVar6 = pcVar6 + 4;
          }
          for (uVar5 = 4U - iVar11 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar6 = '\0';
            pcVar6 = pcVar6 + 1;
          }
          pcVar7 = pcVar7 + (4 - iVar11);
        }
        local_20 = iVar9;
        if (iVar9 != 0) {
          local_20 = 0x664da010;
          FUN_664bbeb0(pcVar10,(int *)&stack0xffffffe4,(int *)&stack0xfffffff0,
                       (int *)&stack0xffffffec);
        }
        iVar11 = 0;
        pcVar10 = param_1 + 0x3e;
        iVar9 = 0x664da021;
        FUN_6648f710(local_38,pcVar10,0);
        pcVar6 = param_1;
      } while (local_20 != local_38[0]);
    }
    pcVar7 = pcVar7 + -(int)local_1038;
    param_1 = pcVar7;
    pcVar3 = operator_new((uint)pcVar7);
    *(char **)(pcVar6 + 0x2a) = pcVar3;
    pcVar10 = local_1038;
    for (uVar5 = (uint)pcVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = (uint)pcVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *(short *)(pcVar6 + 4) = (short)((int)(pcVar7 + ((int)pcVar7 >> 0x1f & 3)) >> 2);
  }
  else if (param_1[3] == -0x34) {
    uVar5 = 0;
    if (*(void **)(param_1 + 0x3a) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x3a));
    }
    pcVar10 = local_2038;
    param_1 = (char *)0x0;
    if (pcVar6[2] != '\0') {
      do {
        pcVar10 = (char *)FUN_664da100((void *)(*(int *)(pcVar6 + 0x56) + uVar5 * 8),pcVar10,
                                       (int *)&param_1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (byte)pcVar6[2]);
    }
    uVar8 = (int)pcVar10 - (int)local_2038;
    pcVar7 = operator_new(uVar8);
    *(char **)(pcVar6 + 0x3a) = pcVar7;
    pcVar10 = local_2038;
    for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar7 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  uVar4 = FUN_664da160(pcVar6,local_24,param_3);
  *param_2 = uVar4;
  return;
}


