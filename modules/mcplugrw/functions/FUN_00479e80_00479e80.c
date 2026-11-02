/* Module: mcplugrw.dll
   Function: FUN_00479e80
   Address: 00479e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479e80(int *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  iVar1 = param_1[0x37];
  param_1[0x37] = iVar1 + 1U;
  if ((uint)param_1[0x32] <= iVar1 + 1U) {
    if (*(char *)((int)param_1 + 0x11b) != '\0') {
      param_1[0x37] = 0;
      if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
        bVar2 = (char)param_1[0x47] + 1;
        *(byte *)(param_1 + 0x47) = bVar2;
        if (bVar2 < 7) {
          do {
            param_1[0x33] =
                 (uint)((param_1[0x30] - (&DAT_004a6e94)[bVar2]) + -1 + (&DAT_004a6eb0)[bVar2]) /
                 (uint)(&DAT_004a6eb0)[bVar2];
            uVar4 = (uint)((param_1[0x31] - (&DAT_004a6ecc)[bVar2]) + -1 + (&DAT_004a6ee8)[bVar2]) /
                    (uint)(&DAT_004a6ee8)[bVar2];
            param_1[0x32] = uVar4;
            if ((param_1[0x33] != 0) && (uVar4 != 0)) break;
            bVar2 = bVar2 + 1;
            *(byte *)(param_1 + 0x47) = bVar2;
          } while (bVar2 < 7);
        }
      }
      else {
        *(char *)(param_1 + 0x47) = (char)param_1[0x47] + '\x01';
      }
      if (*(byte *)(param_1 + 0x47) < 7) {
        if ((undefined4 *)param_1[0x38] == (undefined4 *)0x0) {
          return;
        }
        uVar3 = ((uint)*(byte *)((int)param_1 + 0x123) * (uint)*(byte *)(param_1 + 0x48) *
                 param_1[0x30] + 7 >> 3) + 1;
        puVar5 = (undefined4 *)param_1[0x38];
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
        uVar4 = FUN_0044e570(param_1 + 0x1b,4);
        if ((uVar4 != 0) && (uVar4 != 1)) {
          pcVar6 = (char *)param_1[0x21];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "zlib error";
          }
          FUN_00475b50(param_1,pcVar6);
        }
        if ((param_1[0x1f] != 0) || (uVar4 != 0)) break;
        FUN_00478d80(param_1,(byte *)param_1[0x29],param_1[0x2a]);
        param_1[0x1e] = param_1[0x29];
        param_1[0x1f] = param_1[0x2a];
      }
    } while (uVar4 != 1);
    if ((uint)param_1[0x1f] < (uint)param_1[0x2a]) {
      FUN_00478d80(param_1,(byte *)param_1[0x29],param_1[0x2a] - param_1[0x1f]);
    }
    FUN_0044e420((int)(param_1 + 0x1b));
  }
  return;
}


