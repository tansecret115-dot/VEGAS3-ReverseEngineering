/* Module: sfxpfx1.dll
   Function: FUN_5c97c72e
   Address: 5c97c72e
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c97c72e(void *this,char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_1;
  pcVar4 = "";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
LAB_5c97c757:
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_1 + 0x10;
    pcVar4 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = (char *)((int)this + 0x10);
      pcVar4 = param_1 + 0x10;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_5c97c7aa;
    }
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_1 + 0x2c;
    pcVar4 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = (char *)((int)this + 0x2c);
      pcVar4 = param_1 + 0x2c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if ((!bVar5) || (iVar2 = *(int *)((int)this + 0x40), iVar2 != *(int *)(param_1 + 0x40)))
      goto LAB_5c97c7aa;
      if (iVar2 != 0) {
        bVar5 = true;
        pcVar3 = *(char **)((int)this + 0x44);
        pcVar4 = *(char **)(param_1 + 0x44);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pcVar3 == *pcVar4;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_5c97c7aa;
      }
    }
    uVar1 = 1;
  }
  else {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = this;
    pcVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) goto LAB_5c97c757;
LAB_5c97c7aa:
    uVar1 = 0;
  }
  return uVar1;
}


