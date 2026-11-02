/* Module: rmme3260.dll
   Function: FUN_66267ee0
   Address: 66267ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66267ee0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(int *)((int)this + 0x2c) < 1) {
    if (*(void **)((int)this + 0x20) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    uVar6 = 0;
    if (*(char **)((int)this + 0xc) != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar2 = *(char **)((int)this + 0xc);
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
    }
    uVar4 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar4 + 1 + (uVar6 & 0xffff));
    *(char **)((int)this + 0x20) = pcVar2;
    if (pcVar2 != (char *)0x0) {
      uVar6 = 0xffffffff;
      do {
        pcVar7 = param_1;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar7 = pcVar7 + -uVar6;
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (*(int *)((int)this + 0xc) != 0) {
        pcVar2 = *(char **)((int)this + 0x20);
        iVar5 = -1;
        pcVar7 = pcVar2;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (iVar5 != -2) {
          uVar6 = 0xffffffff;
          pcVar7 = pcVar2;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if (pcVar2[~uVar6 - 2] != '\\') {
            uVar6 = 0xffffffff;
            pcVar7 = &DAT_6626fdc0;
            do {
              pcVar8 = pcVar7;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar8 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar8;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            do {
              pcVar7 = pcVar2;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar7 = pcVar2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar7;
            } while (cVar1 != '\0');
            pcVar2 = pcVar8 + -uVar6;
            pcVar7 = pcVar7 + -1;
            for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
              pcVar2 = pcVar2 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar7 = *pcVar2;
              pcVar2 = pcVar2 + 1;
              pcVar7 = pcVar7 + 1;
            }
          }
        }
        uVar6 = 0xffffffff;
        pcVar2 = *(char **)((int)this + 0xc);
        do {
          pcVar7 = pcVar2;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar7;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar2 = *(char **)((int)this + 0x20);
        do {
          pcVar8 = pcVar2;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar8 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar8;
        } while (cVar1 != '\0');
        pcVar2 = pcVar7 + -uVar6;
        pcVar7 = pcVar8 + -1;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar7 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      iVar5 = findfirst(*(undefined4 *)((int)this + 0x20),(int)this + 0x34);
      *(int *)((int)this + 0x2c) = iVar5;
      if (0 < iVar5) {
        if (*(int *)((int)this + 0x28) == 0) {
          pvVar3 = operator_new(0x104);
          *(void **)((int)this + 0x28) = pvVar3;
          if (pvVar3 == (void *)0x0) {
            return 0;
          }
        }
        if (*(int *)((int)this + 0x24) == 0) {
          pvVar3 = operator_new(0x104);
          *(void **)((int)this + 0x24) = pvVar3;
          if (pvVar3 == (void *)0x0) {
            return 0;
          }
        }
        uVar6 = 0xffffffff;
        pcVar2 = (char *)((int)this + 0x48);
        do {
          pcVar7 = pcVar2;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar7;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar2 = pcVar7 + -uVar6;
        pcVar7 = *(char **)((int)this + 0x28);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar7 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar7 = pcVar7 + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}


