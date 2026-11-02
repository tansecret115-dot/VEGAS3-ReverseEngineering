/* Module: rmbe3260.dll
   Function: FUN_6603de00
   Address: 6603de00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6603de00(void *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_8 = ~uVar4 - 1;
  }
  if (param_2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_c = ~uVar4 - 1;
  }
  if (param_3 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar4 - 1;
  }
  if (param_4 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = param_4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_14 = ~uVar4 - 1;
  }
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x2c));
  }
  uVar4 = local_14 + local_10 + local_c + 0x12 + local_8;
  puVar2 = operator_new(uVar4);
  *puVar2 = 0x43;
  puVar2[1] = 0x4f;
  puVar2[2] = 0x4e;
  puVar2[3] = 0x54;
  puVar2[4] = (char)(uVar4 >> 0x18);
  puVar2[5] = (char)(uVar4 >> 0x10);
  puVar2[6] = (char)(uVar4 >> 8);
  puVar2[7] = (char)uVar4;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = (char)(local_8 >> 8);
  puVar2[0xb] = (char)local_8;
  pcVar7 = puVar2 + 0xc;
  for (uVar5 = (local_8 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *param_1;
    param_1 = param_1 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = puVar2 + 0xc + (local_8 & 0xffff);
  *pcVar6 = (char)(local_c >> 8);
  pcVar6[1] = (char)local_c;
  pcVar7 = pcVar6 + 2;
  for (uVar5 = (local_c & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = pcVar6 + 2 + (local_c & 0xffff);
  *pcVar6 = (char)(local_10 >> 8);
  pcVar6[1] = (char)local_10;
  pcVar7 = pcVar6 + 2;
  for (uVar5 = (local_10 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *param_3;
    param_3 = param_3 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = pcVar6 + 2 + (local_10 & 0xffff);
  *pcVar6 = (char)(local_14 >> 8);
  pcVar6[1] = (char)local_14;
  pcVar7 = pcVar6 + 2;
  for (uVar5 = (local_14 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_4;
    param_4 = param_4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = local_14 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *param_4;
    param_4 = param_4 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar3 = 0;
  *(undefined1 **)((int)this + 0x2c) = puVar2;
  *(char **)((int)this + 0x30) = pcVar6 + 2 + ((local_14 & 0xffff) - (int)puVar2);
  if (*(int **)((int)this + 0x20) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x20) + 0x1c))(uVar4,puVar2);
  }
  if ((iVar3 == 0) && (*(int **)((int)this + 0x18) != (int *)0x0)) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x18) + 0x1c))
                      (uVar4,*(undefined4 *)((int)this + 0x2c));
  }
  return -(uint)(iVar3 != 0) & 0xfff2;
}


