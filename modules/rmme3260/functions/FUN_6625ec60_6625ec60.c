/* Module: rmme3260.dll
   Function: FUN_6625ec60
   Address: 6625ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625ec60(void *this,int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((((this == (void *)0x0) || (param_1 == 0)) || (param_2 == (char *)0x0)) || (*param_2 == '\0'))
  {
    return 0;
  }
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_6620e470(puVar2);
  }
  *piVar3 = param_1;
  uVar5 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puVar2 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  piVar3[1] = (int)puVar2;
  pcVar7 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  for (uVar6 = ~uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar5 = ~uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = (char *)piVar3[1];
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
  piVar3[3] = param_4;
  piVar3[2] = param_3;
  FUN_66250b60(&DAT_6627f244,piVar3);
  uVar4 = FUN_6625ed40((int)this);
  return uVar4;
}


