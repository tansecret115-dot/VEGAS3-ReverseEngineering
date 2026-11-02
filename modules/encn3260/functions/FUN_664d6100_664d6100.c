/* Module: encn3260.dll
   Function: FUN_664d6100
   Address: 664d6100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d6100(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar4 = -1;
    pcVar2 = param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      uVar5 = 0xffffffff;
      pcVar2 = param_1;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = operator_new(~uVar5);
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
      pcVar8 = pcVar2;
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
      pcVar2 = strtok(pcVar2,&DAT_664ef768);
      if (pcVar2 != (char *)0x0) {
        lVar3 = strtol(pcVar2,(char **)0x0,10);
        *(long *)this = lVar3;
        pcVar2 = strtok((char *)0x0,&DAT_664ef768);
        if (pcVar2 != (char *)0x0) {
          lVar3 = strtol(pcVar2,(char **)0x0,10);
          *(long *)((int)this + 4) = lVar3;
          pcVar2 = strtok((char *)0x0,&DAT_664f0234);
          if (pcVar2 != (char *)0x0) {
            lVar3 = strtol(pcVar2,(char **)0x0,10);
            *(long *)((int)this + 8) = lVar3;
            pcVar2 = strtok((char *)0x0,&DAT_664ef93c);
            if (pcVar2 != (char *)0x0) {
              lVar3 = strtol(pcVar2,(char **)0x0,10);
              *(long *)((int)this + 0xc) = lVar3;
            }
          }
        }
      }
    }
  }
  FUN_664d5f50(this);
  FUN_664d6000(this);
  return;
}


