/* Module: encn3260.dll
   Function: FUN_664d9800
   Address: 664d9800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d9800(void *this,undefined1 *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  void *local_8;
  
  iVar7 = -1;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[3] = 0xca;
  param_1[2] = 1;
  pcVar5 = param_2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  bVar6 = ~(byte)iVar7 - 1;
  if (*(uint **)((int)this + 8) == (uint *)0x0) {
    local_8 = (void *)0x0;
    uVar8 = **(uint **)this;
    puVar3 = operator_new(6);
    iVar7 = FUN_664bbdc0(param_1 + 0x3e,uVar8,&local_8);
    if (iVar7 == 0) {
      puVar4 = operator_new(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        local_8 = (void *)0x0;
      }
      else {
        local_8 = (void *)FUN_664ba900(puVar4);
      }
      puVar4 = FUN_664bbe00(param_1 + 0x3e,uVar8);
      *puVar4 = local_8;
    }
    *puVar3 = 1;
    puVar3[1] = bVar6;
    pcVar5 = operator_new((uint)bVar6);
    *(char **)(puVar3 + 2) = pcVar5;
    for (uVar8 = (uint)(bVar6 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar8 = bVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    uVar8 = **(uint **)((int)this + 8);
    local_8 = (void *)0x0;
    puVar3 = operator_new(6);
    iVar7 = FUN_664bbdc0(param_1 + 0x3e,uVar8,&local_8);
    if (iVar7 == 0) {
      puVar4 = operator_new(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        local_8 = (void *)0x0;
      }
      else {
        local_8 = (void *)FUN_664ba900(puVar4);
      }
      puVar4 = FUN_664bbe00(param_1 + 0x3e,uVar8);
      *puVar4 = local_8;
    }
    *puVar3 = 1;
    puVar3[1] = bVar6;
    pcVar5 = operator_new((uint)bVar6);
    *(char **)(puVar3 + 2) = pcVar5;
    for (uVar8 = (uint)(bVar6 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar8 = bVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  FUN_664baab0(local_8,puVar3);
  uVar2 = bVar6 + 3 & 3;
  if (uVar2 == 0) {
    sVar9 = 0;
  }
  else {
    sVar9 = 4 - uVar2;
  }
  *(ushort *)(param_1 + 4) = ((ushort)(bVar6 + 3 + sVar9) >> 2) + 1;
  return 0;
}


