/* Module: encn3260.dll
   Function: FUN_664d2c20
   Address: 664d2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d2c20(void *this,char *param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pvVar2 = operator_new(0x1d);
  if (pvVar2 == (void *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    param_2 = (char *)FUN_664d7e80(param_2,'.');
  }
  pcVar3 = operator_new(uVar5);
  uVar6 = 0xffffffff;
  *pcVar3 = '\0';
  pcVar8 = pcVar3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (~uVar6 - 1 < ~uVar7 - 1) {
    do {
      FUN_664d7fb0(param_2,pcVar3,uVar5);
      uVar6 = 0xffffffff;
      pcVar8 = pcVar3;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar7 = 0xffffffff;
      pcVar8 = param_1;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    } while (~uVar6 - 1 < ~uVar7 - 1);
  }
  iVar4 = FUN_664d2aa0(this,pcVar3);
  while ((iVar4 != 0 && (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 0xc)))) {
    FUN_664d7fb0(param_2,pcVar3,uVar5);
    iVar4 = FUN_664d2aa0(this,pcVar3);
  }
  operator_delete(pcVar3);
  if (param_2 != (char *)0x0) {
    operator_delete(*(void **)param_2);
    operator_delete(*(void **)(param_2 + 0x19));
    operator_delete(param_2);
  }
  return iVar4;
}


