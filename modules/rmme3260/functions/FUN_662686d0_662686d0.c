/* Module: rmme3260.dll
   Function: FUN_662686d0
   Address: 662686d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662686d0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (*(int *)((int)this + 0x10) == 0) {
    return 0x80040009;
  }
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar4);
    uVar4 = 0xffffffff;
    *(char **)((int)this + 0x20) = pcVar2;
    do {
      pcVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x358) = 1;
  uVar3 = (**(code **)(**(int **)((int)this + 0x10) + 0xc))(*(int **)((int)this + 0x10),5,this);
  return uVar3;
}


