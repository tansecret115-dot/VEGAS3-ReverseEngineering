/* Module: encn3260.dll
   Function: FUN_664c0f40
   Address: 664c0f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c0f40(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  for (puVar3 = *(undefined4 **)((int)this + 4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    iVar2 = (*(code *)**(undefined4 **)this)(*puVar3,param_1);
    if (iVar2 == 0) {
      puVar3[1] = param_2;
      return 0;
    }
  }
  puVar3 = operator_new(0xc);
  puVar3[2] = 0;
  uVar5 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = pcVar4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *puVar3 = pcVar4;
  puVar3[1] = param_2;
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3;
    return 0;
  }
  *(undefined4 **)(*(int *)((int)this + 8) + 8) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3;
  return 0;
}


