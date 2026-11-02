/* Module: encn3260.dll
   Function: FUN_664884a0
   Address: 664884a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664884a0(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  
  pbVar8 = &DAT_664e2538;
  pbVar3 = *(byte **)(param_1 + 0x34);
  do {
    bVar2 = *pbVar3;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_664884db:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_664884e0;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_664884db;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_664884e0:
  if (iVar4 != 0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x40))(*(int **)((int)this + 0x68),0x80004005,0);
    return;
  }
  puVar5 = operator_new(0x28);
  if (puVar5 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_664bad50(puVar5);
  }
  (**(code **)(*piVar6 + 4))(piVar6);
  uVar7 = 0xffffffff;
  pcVar9 = *(char **)(param_1 + 0x10);
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*piVar6 + 0x10))(piVar6,*(char **)(param_1 + 0x10),~uVar7 - 1);
  (**(code **)(**(int **)((int)this + 0x68) + 0x40))(*(int **)((int)this + 0x68),0,piVar6);
  return;
}


