/* Module: vegas30.exe
   Function: FUN_005ddcb0
   Address: 005ddcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ddcb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  if (((*param_4 == '\0') || (*(int *)(param_4 + 4) < 1)) ||
     (iVar2 = riff64_PrepareList(param_1,DAT_0062a520,DAT_0062a524,DAT_0062a528,DAT_0062a52c,
                                 &local_8), iVar2 < 0)) {
    return iVar2;
  }
  iVar4 = 0;
  if ((*param_4 != '\0') && (iVar4 = *(int *)(param_4 + 8), (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
    iVar3 = *(int *)(iVar4 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_4 == '\0') {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_4 + 0xc);
        }
        if (iVar4 == iVar3) {
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = riff64_CompleteChunk(param_1,local_8,local_4);
          return iVar2;
        }
        iVar2 = riff64_PrepareChunk(param_1,DAT_0062a530,DAT_0062a534,DAT_0062a538,DAT_0062a53c,
                                    &local_10);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = FUN_005c3d90(param_2,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = riff64_CompleteChunk(param_1,local_10,local_c);
        if (iVar2 < 0) {
          return iVar2;
        }
      } while ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x18) & 2) == 2));
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar5 = iVar4;
      if ((*(byte *)(iVar3 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 0x10);
      }
    }
    do {
      iVar4 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar4 + 0x10) == iVar5) break;
      iVar5 = iVar4;
    } while ((*(byte *)(iVar4 + 0x18) & 2) != 2);
  } while( true );
}


