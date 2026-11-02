/* Module: rmme3260.dll
   Function: FUN_6621e3c0
   Address: 6621e3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6621e3c0(void *this,char *param_1)

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
    uVar4 = 0xffffffff;
    *(undefined4 *)(*(int *)((int)this + 0xec) + -8 + *(int *)((int)this + 0xe4) * 0x3a) = 1;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pvVar3 = operator_new(~uVar4);
    *(void **)(*(int *)((int)this + 0xec) + -4 + *(int *)((int)this + 0xe4) * 0x3a) = pvVar3;
    pcVar8 = *(char **)(*(int *)((int)this + 0xec) + -4 + *(int *)((int)this + 0xe4) * 0x3a);
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
    if (param_1 == (char *)0x0) goto LAB_6621e4a5;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
LAB_6621e4a5:
  *(char **)((int)this + 0x24) = param_1;
  return;
}


