/* Module: rmme3260.dll
   Function: FUN_66263410
   Address: 66263410
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_66263410(void *this,char *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined2 param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x32));
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar3);
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(char **)((int)this + 0x18) = pcVar2;
  *(undefined4 *)((int)this + 0x2a) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0x2e) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined2 *)((int)this + 0x20) = param_5;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (int)this;
}


