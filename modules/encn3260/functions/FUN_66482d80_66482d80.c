/* Module: encn3260.dll
   Function: FUN_66482d80
   Address: 66482d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66482d80(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_14;
  undefined2 local_10;
  char *local_8;
  
  pbVar3 = *(byte **)(param_1 + 0x54);
  if (*(uint *)(param_1 + 0x92) < 2) {
    if (pbVar3 != (byte *)0x0) {
      operator_delete(pbVar3);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_664e2234;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_8 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_664e2234;
    do {
      pcVar9 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar9 + -uVar5;
    pcVar9 = local_8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    *(char **)(param_1 + 0x54) = local_8;
  }
  else {
    if (pbVar3 == (byte *)0x0) {
      uVar5 = 0xffffffff;
      pcVar7 = s_x_real_rdt_udp_664e2224;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_8 = operator_new(~uVar5);
      uVar5 = 0xffffffff;
      pcVar7 = s_x_real_rdt_udp_664e2224;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = local_8;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(char **)(param_1 + 0x54) = local_8;
    }
    else {
      pbVar8 = &DAT_664e2234;
      do {
        bVar2 = *pbVar3;
        bVar10 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_66482e67:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_66482e6c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar10 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_66482e67;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_66482e6c:
      if (iVar4 == 0) goto LAB_66482e7a;
    }
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
LAB_66482e7a:
  local_14 = FUN_6648c430(*(char **)(param_1 + 0x54));
  local_10 = 0;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(*(int **)(param_1 + 0x24),&local_14,1,0);
  return;
}


