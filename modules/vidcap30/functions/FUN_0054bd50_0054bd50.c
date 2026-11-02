/* Module: vidcap30.exe
   Function: FUN_0054bd50
   Address: 0054bd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054bd50(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined4 local_4;
  
  uVar1 = param_2;
  uVar6 = *(int *)(param_2 + 0xdc) + 1;
  *(uint *)(param_2 + 0xdc) = uVar6;
  if (*(uint *)(param_2 + 200) <= uVar6) {
    local_4 = param_1;
    if (*(char *)(param_2 + 0x11b) != '\0') {
      *(undefined4 *)(param_2 + 0xdc) = 0;
      FUN_00549500(param_2,*(undefined4 *)(param_2 + 0xe0),0,*(int *)(param_2 + 0xd0) + 1);
      bVar5 = *(char *)(uVar1 + 0x11c) + 1;
      *(byte *)(uVar1 + 0x11c) = bVar5;
      if (bVar5 < 7) {
        param_2 = (uint)*(byte *)(uVar1 + 0x121);
        do {
          uVar6 = (uint)((*(int *)(uVar1 + 0xc0) - (&DAT_005b8a34)[bVar5]) + -1 +
                        (&DAT_005b8a50)[bVar5]) / (uint)(&DAT_005b8a50)[bVar5];
          *(uint *)(uVar1 + 0xd8) = uVar6;
          *(uint *)(uVar1 + 0xd4) = (param_2 * uVar6 + 7 >> 3) + 1;
          if (((*(uint *)(uVar1 + 0x68) & 2) != 0) ||
             (*(uint *)(uVar1 + 200) =
                   (uint)((*(int *)(uVar1 + 0xc4) - (&DAT_005b8a6c)[bVar5]) + -1 +
                         (&DAT_005b8a88)[bVar5]) / (uint)(&DAT_005b8a88)[bVar5],
             *(int *)(uVar1 + 0xd8) != 0)) break;
          bVar5 = bVar5 + 1;
          *(byte *)(uVar1 + 0x11c) = bVar5;
        } while (bVar5 < 7);
      }
      if (*(byte *)(uVar1 + 0x11c) < 7) {
        return;
      }
    }
    if ((*(byte *)(uVar1 + 100) & 0x20) == 0) {
      *(undefined4 *)(uVar1 + 0x7c) = 1;
      *(uint **)(uVar1 + 0x78) = &param_2;
      while( true ) {
        if (*(int *)(uVar1 + 0x70) == 0) {
          if (*(int *)(uVar1 + 0x104) == 0) {
            do {
              FUN_005497b0(uVar1,0);
              FUN_0052ad30(uVar1,&local_4,4);
              uVar2 = FUN_00549730(&local_4);
              *(undefined4 *)(uVar1 + 0x104) = uVar2;
              FUN_0052ab30(uVar1);
              FUN_00549780(uVar1,(int *)(uVar1 + 0x114),4);
              if (*(int *)(uVar1 + 0x114) != DAT_005b89b4) {
                FUN_00549540(uVar1,"Not enough image data");
              }
            } while (*(int *)(uVar1 + 0x104) == 0);
          }
          *(uint *)(uVar1 + 0x70) = *(uint *)(uVar1 + 0xa8);
          *(undefined4 *)(uVar1 + 0x6c) = *(undefined4 *)(uVar1 + 0xa4);
          if (*(uint *)(uVar1 + 0x104) < *(uint *)(uVar1 + 0xa8)) {
            *(uint *)(uVar1 + 0x70) = *(uint *)(uVar1 + 0x104);
          }
          FUN_00549780(uVar1,*(undefined4 *)(uVar1 + 0xa4),*(undefined4 *)(uVar1 + 0x70));
          *(int *)(uVar1 + 0x104) = *(int *)(uVar1 + 0x104) - *(int *)(uVar1 + 0x70);
        }
        iVar3 = FUN_00548e40(uVar1 + 0x6c,1);
        if (iVar3 == 1) break;
        if (iVar3 != 0) {
          pcVar4 = *(char **)(uVar1 + 0x84);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "Decompression Error";
          }
          FUN_00549540(uVar1,pcVar4);
        }
        if (*(int *)(uVar1 + 0x7c) == 0) {
          FUN_00549540(uVar1,"Extra compressed data");
        }
      }
      if (((*(int *)(uVar1 + 0x7c) == 0) || (*(int *)(uVar1 + 0x70) != 0)) ||
         (*(int *)(uVar1 + 0x104) != 0)) {
        FUN_00549540(uVar1,"Extra compressed data");
      }
      *(uint *)(uVar1 + 0x60) = *(uint *)(uVar1 + 0x60) | 8;
      *(uint *)(uVar1 + 100) = *(uint *)(uVar1 + 100) | 0x20;
      *(undefined4 *)(uVar1 + 0x7c) = 0;
    }
    if ((*(int *)(uVar1 + 0x104) != 0) || (*(int *)(uVar1 + 0x70) != 0)) {
      FUN_00549540(uVar1,"Extra compression data");
    }
    FUN_00548c70(uVar1 + 0x6c);
    *(uint *)(uVar1 + 0x60) = *(uint *)(uVar1 + 0x60) | 8;
  }
  return;
}


