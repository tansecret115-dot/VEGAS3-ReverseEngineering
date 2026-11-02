/* Module: encn3260.dll
   Function: FUN_664cba80
   Address: 664cba80
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __thiscall
FUN_664cba80(void *this,byte *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  byte local_40 [56];
  void *local_8;
  
  local_8 = this;
  puVar11 = &local_48;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_48._0_1_ = (undefined1)((uint)param_3 >> 0x18);
  local_48._3_1_ = (undefined1)param_3;
  local_48._1_1_ = (undefined1)((uint)param_3 >> 0x10);
  local_48._2_1_ = (undefined1)((uint)param_3 >> 8);
  local_44 = (undefined1)((uint)param_4 >> 0x18);
  local_43 = (undefined1)((uint)param_4 >> 0x10);
  local_42 = (undefined1)((uint)param_4 >> 8);
  local_41 = (undefined1)param_4;
  if (param_1 != (byte *)0x0) {
    iVar6 = -1;
    pbVar5 = param_1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (iVar6 == -0x2a) {
      param_1[0x20] = 0;
    }
    uVar7 = 0xffffffff;
    pbVar5 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (~uVar7 - 1 < 0x39) {
      uVar7 = 0xffffffff;
      pbVar5 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
      uVar7 = ~uVar7 - 1;
    }
    else {
      uVar7 = 0x38;
    }
    pbVar5 = local_40;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar5 = *param_1;
      param_1 = param_1 + 1;
      pbVar5 = pbVar5 + 1;
    }
  }
  if (param_2 != (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar12 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    if (~uVar7 - 1 < 0x39) {
      uVar7 = 0xffffffff;
      pcVar12 = param_2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      iVar6 = ~uVar7 - 1;
    }
    else {
      iVar6 = 0x38;
    }
    iVar10 = 0;
    pbVar5 = local_40;
    if (0 < iVar6) {
      do {
        *pbVar5 = *pbVar5 ^ param_2[iVar10];
        pbVar5 = pbVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
  }
  pcVar12 = (char *)((int)local_8 + 0x21);
  FUN_664d6270(pcVar12,&local_48,0x40);
  pvVar4 = local_8;
  sprintf((char *)((int)local_8 + 0x41),s_4f213d09_664effec);
  pcVar9 = (char *)((int)pvVar4 + 0x4a);
  pcVar9[0] = '\0';
  pcVar9[1] = '\0';
  pcVar9[2] = '\0';
  pcVar9[3] = '\0';
  *(undefined4 *)((int)pvVar4 + 0x4e) = 0;
  *(undefined1 *)((int)pvVar4 + 0x52) = 0;
  iVar6 = 0;
  do {
    pcVar1 = pcVar12 + iVar6;
    iVar6 = iVar6 + 4;
    *pcVar9 = *pcVar1;
    pcVar9 = pcVar9 + 1;
  } while (iVar6 < 0x20);
  return pcVar12;
}


