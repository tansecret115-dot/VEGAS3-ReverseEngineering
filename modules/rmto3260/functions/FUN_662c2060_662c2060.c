/* Module: rmto3260.dll
   Function: FUN_662c2060
   Address: 662c2060
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662c2060(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int local_30 [2];
  undefined1 local_28 [36];
  
  FUN_662e0cc0(local_30);
  uVar3 = 0xffffffff;
  pcVar4 = *(char **)((int)this + 0x2c);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_662e1090(local_30,*(char **)((int)this + 0x2c),~uVar3 - 1);
  if (-1 < iVar2) {
    uVar3 = 0xffffffff;
    pcVar4 = *(char **)((int)this + 0x30);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_662e1130(local_30,*(char **)((int)this + 0x30),~uVar3 - 1);
    if (-1 < iVar2) {
      uVar3 = 0xffffffff;
      pcVar4 = *(char **)((int)this + 0x34);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = FUN_662e11d0(local_30,*(char **)((int)this + 0x34),~uVar3 - 1);
      if (-1 < iVar2) {
        uVar3 = 0xffffffff;
        pcVar4 = *(char **)((int)this + 0x38);
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar2 = FUN_662e1270(local_30,*(char **)((int)this + 0x38),~uVar3 - 1);
        if (-1 < iVar2) {
          (**(code **)(*param_1 + 0x1c))
                    (param_1,-(uint)(&stack0x00000000 != (undefined1 *)0x30) & (uint)local_28);
        }
      }
    }
  }
  FUN_662e0d40(local_30);
  return iVar2;
}


