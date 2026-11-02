/* Module: sfpublish.dll
   Function: FUN_004135f0
   Address: 004135f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004135f0(void *this,undefined4 *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar3 = 0x8004e0f4;
  pcVar2 = *(char **)((int)this + 4);
  if ((*pcVar2 == '-') && (pcVar2[1] == '-')) {
    pcVar4 = pcVar2 + 2;
    cVar1 = pcVar2[2];
    while ((cVar1 != '\0' && (cVar1 != '\r'))) {
      pcVar5 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar5;
    }
    if ((*pcVar4 == '\r') && (pcVar4[1] == '\n')) {
      uVar3 = 0;
      pcVar5 = pcVar4 + -(int)pcVar2;
      if (param_1 != (undefined4 *)0x0) {
        if ((int)(pcVar4 + -(int)pcVar2 + 2) < (int)param_2) {
          puVar7 = param_1;
          for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(undefined1 *)param_1 = 0xd;
          *(undefined1 *)((int)param_1 + 1) = 10;
          strncpy((char *)((int)param_1 + 2),*(char **)((int)this + 4),(size_t)pcVar5);
          *(char **)((int)this + 0x10) = pcVar5;
          *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
          return 0;
        }
        uVar3 = 0x8004e03c;
      }
      *(char **)((int)this + 0x10) = pcVar5;
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
    }
  }
  return uVar3;
}


