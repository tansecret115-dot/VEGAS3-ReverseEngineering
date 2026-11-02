/* Module: vidcap30.exe
   Function: FUN_0054d9c0
   Address: 0054d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d9c0(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar4 = *(int *)(param_1 + 0xdc) + 1;
  *(uint *)(param_1 + 0xdc) = uVar4;
  if (*(uint *)(param_1 + 200) <= uVar4) {
    if (*(char *)(param_1 + 0x11b) != '\0') {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
        bVar2 = *(char *)(param_1 + 0x11c) + 1;
        *(byte *)(param_1 + 0x11c) = bVar2;
        if (bVar2 < 7) {
          do {
            *(uint *)(param_1 + 0xcc) =
                 (uint)((*(int *)(param_1 + 0xc0) - (&DAT_005b8a34)[bVar2]) + -1 +
                       (&DAT_005b8a50)[bVar2]) / (uint)(&DAT_005b8a50)[bVar2];
            uVar4 = (uint)((*(int *)(param_1 + 0xc4) - (&DAT_005b8a6c)[bVar2]) + -1 +
                          (&DAT_005b8a88)[bVar2]) / (uint)(&DAT_005b8a88)[bVar2];
            *(uint *)(param_1 + 200) = uVar4;
            if ((*(int *)(param_1 + 0xcc) != 0) && (uVar4 != 0)) break;
            bVar2 = bVar2 + 1;
            *(byte *)(param_1 + 0x11c) = bVar2;
          } while (bVar2 < 7);
        }
      }
      else {
        *(char *)(param_1 + 0x11c) = *(char *)(param_1 + 0x11c) + '\x01';
      }
      if (*(byte *)(param_1 + 0x11c) < 7) {
        if (*(undefined4 **)(param_1 + 0xe0) == (undefined4 *)0x0) {
          return;
        }
        uVar3 = ((uint)*(byte *)(param_1 + 0x123) * (uint)*(byte *)(param_1 + 0x120) *
                 *(int *)(param_1 + 0xc0) + 7 >> 3) + 1;
        puVar5 = *(undefined4 **)(param_1 + 0xe0);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        return;
      }
    }
    do {
      while( true ) {
        iVar1 = FUN_0054f750(param_1 + 0x6c,4);
        if ((iVar1 != 0) && (iVar1 != 1)) {
          pcVar6 = *(char **)(param_1 + 0x84);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "zlib error";
          }
          FUN_00549540(param_1,pcVar6);
        }
        if ((*(int *)(param_1 + 0x7c) != 0) || (iVar1 != 0)) break;
        FUN_0054c8c0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
      }
    } while (iVar1 != 1);
    if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0xa8)) {
      FUN_0054c8c0(param_1,*(undefined4 *)(param_1 + 0xa4),
                   *(uint *)(param_1 + 0xa8) - *(uint *)(param_1 + 0x7c));
    }
    FUN_0054f600(param_1 + 0x6c);
  }
  return;
}


