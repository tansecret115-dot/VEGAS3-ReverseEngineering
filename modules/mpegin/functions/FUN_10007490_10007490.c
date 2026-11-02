/* Module: mpegin.dll
   Function: FUN_10007490
   Address: 10007490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007490(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = *param_2;
    *(undefined4 *)(param_1 + 0x5c) = param_2[1];
    *(undefined4 *)(param_1 + 0x60) = param_2[2];
    *(undefined4 *)(param_1 + 0x50) = *param_2;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x12e54);
  uVar3 = *(uint *)(iVar1 + 0x31c);
  if (uVar3 < 0x35353553) {
    if (uVar3 != 0x35353552) {
      if (uVar3 < 0x3259555a) {
        if (uVar3 != 0x32595559) {
          if ((uVar3 != 0x30323449) && (uVar3 != 0x32315659)) {
            return;
          }
          uVar2 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x30);
          puVar4 = *(undefined4 **)(iVar1 + 0x10 + (uint)(*(int *)(iVar1 + 0x2c) == 0) * 0xc);
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          uVar2 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x6c);
          puVar4 = *(undefined4 **)
                    (*(int *)(param_1 + 0x12e54) + 0x14 +
                    (uint)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x2c) == 0) * 0xc);
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          uVar2 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x6c);
          puVar4 = *(undefined4 **)
                    (*(int *)(param_1 + 0x12e54) +
                    ((*(int *)(*(int *)(param_1 + 0x12e54) + 0x2c) == 0) + 2) * 0xc);
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          iVar1 = *(int *)(param_1 + 0x12e54);
          *(undefined4 *)(param_1 + 0x58) =
               *(undefined4 *)(iVar1 + 0x10 + (uint)(*(int *)(iVar1 + 0x2c) == 0) * 0xc);
          *(undefined4 *)(param_1 + 0x5c) =
               *(undefined4 *)(iVar1 + 0x14 + (uint)(*(int *)(iVar1 + 0x2c) == 0) * 0xc);
          *(undefined4 *)(param_1 + 0x60) =
               *(undefined4 *)(iVar1 + ((*(int *)(iVar1 + 0x2c) == 0) + 2) * 0xc);
          return;
        }
        goto LAB_1000762b;
      }
      if ((uVar3 != 0x33524742) && (uVar3 != 0x34524742)) {
        return;
      }
    }
LAB_100075de:
    uVar2 = *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x30);
    puVar4 = *(undefined4 **)(iVar1 + 0x10 + (uint)(*(int *)(iVar1 + 0x2c) == 0) * 0xc);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined4 *)(param_1 + 0x50) =
         *(undefined4 *)
          (*(int *)(param_1 + 0x12e54) + 0x10 +
          (uint)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x2c) == 0) * 0xc);
    return;
  }
  if (uVar3 < 0x5659555a) {
    if (uVar3 == 0x56595559) {
LAB_1000762b:
      uVar2 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x30);
      puVar4 = *(undefined4 **)(iVar1 + 0x10 + (uint)(*(int *)(iVar1 + 0x2c) == 0) * 0xc);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined4 *)(param_1 + 0x58) =
           *(undefined4 *)
            (*(int *)(param_1 + 0x12e54) + 0x10 +
            (uint)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x2c) == 0) * 0xc);
      return;
    }
    if ((uVar3 == 0x35363552) || (uVar3 == 0x41524742)) goto LAB_100075de;
  }
  else if (uVar3 == 0x59565955) goto LAB_1000762b;
  return;
}


