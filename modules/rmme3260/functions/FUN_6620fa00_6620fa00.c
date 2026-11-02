/* Module: rmme3260.dll
   Function: FUN_6620fa00
   Address: 6620fa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620fa00(void *this,char *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar6 = param_1;
  piVar2 = FUN_662090e0(param_1);
  if (piVar2 == (int *)0x0) {
    param_1 = (char *)0x80040082;
  }
  else {
    param_1 = (char *)(**(code **)(*(int *)this + 0x44))(piVar2);
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(*(int *)((int)this + 0x100) + -8 + *(int *)((int)this + 0xf4) * 0x14) = 1;
    uVar4 = 0xffffffff;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pvVar3 = operator_new(~uVar4);
    *(void **)(*(int *)((int)this + 0x100) + -4 + *(int *)((int)this + 0xf4) * 0x14) = pvVar3;
    pcVar8 = *(char **)(*(int *)((int)this + 0x100) + -4 + *(int *)((int)this + 0xf4) * 0x14);
    if (pcVar8 == (char *)0x0) {
      param_1 = (char *)0x8007000e;
    }
    else {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar7 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    if (param_1 == (char *)0x0) goto LAB_6620fad0;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
LAB_6620fad0:
  *(char **)((int)this + 0x24) = param_1;
  return;
}


