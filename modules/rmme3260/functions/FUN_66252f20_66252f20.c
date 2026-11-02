/* Module: rmme3260.dll
   Function: FUN_66252f20
   Address: 66252f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66252f20(void *this,char *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (param_2 == (int *)0x0) {
    return 0x80004005;
  }
  for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    iVar3 = (*(code *)**(undefined4 **)this)(*puVar4,param_1);
    if (iVar3 == 0) {
      piVar2 = (int *)puVar4[1];
      puVar4[1] = param_2;
      (**(code **)(*param_2 + 4))(param_2);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      return 0;
    }
  }
  puVar4 = operator_new(0xc);
  uVar6 = 0xffffffff;
  puVar4[2] = 0;
  pcVar5 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = pcVar5;
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
  *puVar4 = pcVar5;
  puVar4[1] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4;
    return 0;
  }
  *(undefined4 **)(*(int *)((int)this + 8) + 8) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4;
  return 0;
}


