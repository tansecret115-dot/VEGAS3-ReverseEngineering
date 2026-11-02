/* Module: rmbe3260.dll
   Function: FUN_66036c50
   Address: 66036c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66036c50(void *this,char *param_1,uint param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (*(void **)((int)this + 0x1a) != (void *)0x0) {
    operator_delete(*(void **)((int)this + 0x1a));
    *(undefined4 *)((int)this + 0x1a) = 0;
  }
  uVar4 = 0;
  if ((param_1 != (char *)0x0) && (uVar4 = param_2, param_2 == 0xffffffff)) {
    uVar4 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
  }
  if ((short)uVar4 != 0) {
    pvVar2 = operator_new(uVar4 & 0xffff);
    *(void **)((int)this + 0x1a) = pvVar2;
  }
  if (*(char **)((int)this + 0x1a) != (char *)0x0) {
    pcVar6 = *(char **)((int)this + 0x1a);
    for (uVar5 = (uVar4 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *param_1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  *(short *)((int)this + 0x18) = (short)uVar4;
  uVar3 = (**(code **)(*(int *)this + 0xc))();
  *(undefined4 *)((int)this + 0xc) = uVar3;
  return 0;
}


