/* Module: wmfdist2.exe
   Function: FUN_010060ef
   Address: 010060ef
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_010060ef(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,undefined *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_8;
  
  local_8 = 0;
  param_1[0xe] = param_7;
  *(undefined2 *)((int)param_1 + 0xae) = 0;
  param_1[9] = param_5;
  param_1[10] = param_6;
  uVar6 = 0xffffffff;
  pcVar8 = param_3;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = (char *)((int)param_1 + 0x5b9);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  bVar4 = FUN_0100632c(param_1,param_2,0,-1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    param_1[0x27] = 0;
    uVar6 = 0xffffffff;
    param_1[0x24] = 0xffff;
    do {
      pcVar8 = param_3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = param_3 + 1;
      cVar2 = *param_3;
      param_3 = pcVar8;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = (char *)((int)param_1 + 0x5b9);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar5 = FUN_01006d0f(param_1);
    if (iVar5 != 0) {
      sVar3 = *(short *)(param_1 + 0x2b);
      *(short *)(param_1 + 0x2b) = sVar3 + -1;
      while (sVar3 != 0) {
        iVar5 = FUN_01006b11(param_1);
        if (iVar5 == 0) goto LAB_010062e9;
        puVar1 = param_1 + 0x1ef;
        param_1[0x1f0] = param_1 + 0x2d;
        *puVar1 = param_1[0x1d];
        param_1[0x1f1] = (int)param_1 + 0x1b5;
        param_1[0x1f2] = (int)param_1 + 0x2b6;
        *(undefined2 *)(param_1 + 0x1f5) = *(undefined2 *)((int)param_1 + 0x7e);
        *(undefined2 *)((int)param_1 + 0x7d6) = *(undefined2 *)(param_1 + 0x20);
        *(undefined2 *)(param_1 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x82);
        param_1[499] = param_1[0xe];
        *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x1f);
        if ((*(ushort *)(param_1 + 0x1f) & 0xfffd) == 0xfffd) {
          if (param_1[0x27] == 0) {
            iVar5 = (*(code *)param_5)(1,puVar1);
            if (iVar5 == -1) goto LAB_01006320;
          }
          else {
            iVar5 = (*(code *)param_5)(2);
            param_1[0x23] = iVar5;
joined_r0x01006283:
            if (iVar5 == -1) {
LAB_01006320:
              FUN_0100718c((undefined4 *)*param_1,0xb,0);
              goto LAB_010062e9;
            }
            if (iVar5 == 0) {
              if ((*(ushort *)(param_1 + 0x1f) & 0xfffe) == 0xfffe) {
                *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + 1;
              }
            }
            else {
              iVar5 = FUN_01006606(param_1);
              if (iVar5 == 0) goto LAB_010062e9;
            }
          }
        }
        else if (param_1[0x27] == 0) {
          if ((*(ushort *)((int)param_1 + 0x7de) < *(ushort *)((int)param_1 + 0x6a)) ||
             (0xfffb < *(ushort *)((int)param_1 + 0x7de))) {
            iVar5 = (*(code *)param_5)(2,puVar1);
            param_1[0x23] = iVar5;
            goto joined_r0x01006283;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x2b) = 0;
        }
        if ((*(short *)(param_1 + 0x2b) == 0) && (iVar5 = FUN_01006d0f(param_1), iVar5 == 0))
        goto LAB_010062e9;
        sVar3 = *(short *)(param_1 + 0x2b);
        *(short *)(param_1 + 0x2b) = sVar3 + -1;
      }
      local_8 = 1;
    }
  }
LAB_010062e9:
  if (param_1[0x22] != -1) {
    (*(code *)param_1[6])(param_1[0x22]);
  }
  if (param_1[0x21] != -1) {
    (*(code *)param_1[6])(param_1[0x21]);
  }
  param_1[0x22] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return local_8;
}


