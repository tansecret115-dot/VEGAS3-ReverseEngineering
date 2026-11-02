/* Module: mp3plug.dll
   Function: FUN_5f712d64
   Address: 5f712d64
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f712d64(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  if (*(LPCVOID *)((int)this + 0x6c) != (LPCVOID)0x0) {
    FUN_5f681ba0(*(LPCVOID *)((int)this + 0x6c));
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((((0x3d < param_2) && (*(char *)(param_1 + 0x24) == 'V')) &&
      (*(char *)(param_1 + 0x25) == 'B')) && (*(char *)(param_1 + 0x26) == 'R')) {
    if (*(char *)(param_1 + 0x27) != 'I') {
      return 0;
    }
    uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
    *(uint *)((int)this + 0x48) = uVar3;
    if (uVar3 == 1) {
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x4c) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x2a),*(undefined1 *)(param_1 + 0x2b));
      *(uint *)((int)this + 0x50) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d));
      *(uint *)((int)this + 0x54) =
           (uint)*(byte *)(param_1 + 0x2e) << 0x18 | (uint)*(byte *)(param_1 + 0x2f) << 0x10 |
           (uint)*(byte *)(param_1 + 0x30) << 8 | (uint)*(byte *)(param_1 + 0x31);
      *(uint *)((int)this + 0x58) =
           (uint)*(byte *)(param_1 + 0x32) << 0x18 | (uint)*(byte *)(param_1 + 0x33) << 0x10 |
           (uint)*(byte *)(param_1 + 0x34) << 8 | (uint)*(byte *)(param_1 + 0x35);
      uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x36),*(undefined1 *)(param_1 + 0x37));
      *(uint *)((int)this + 0x5c) = uVar3;
      *(uint *)((int)this + 0x60) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x39));
      pbVar5 = (byte *)(param_1 + 0x3e);
      uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x3a),*(undefined1 *)(param_1 + 0x3b));
      *(uint *)((int)this + 100) = uVar4;
      *(uint *)((int)this + 0x68) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x3d));
      if (param_2 < uVar4 * uVar3 + 0x3e) {
        *(undefined1 *)((int)this + 4) = 0;
        return 0;
      }
      puVar1 = (undefined4 *)FUN_5f681b80(uVar3 * 4 + 4);
      *(undefined4 **)((int)this + 0x6c) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined1 *)((int)this + 4) = 0;
        return 0;
      }
      *puVar1 = 0;
      uVar3 = 1;
      if (1 < *(int *)((int)this + 0x5c) + 1U) {
        do {
          uVar4 = 0;
          if (0 < *(int *)((int)this + 100)) {
            for (pbVar2 = pbVar5;
                (int)pbVar2 <
                (int)(pbVar5 + ((int)(pbVar5 + *(int *)((int)this + 100)) - (int)pbVar5 & 0xfffffffe
                               )); pbVar2 = pbVar2 + 2) {
              uVar4 = (uVar4 << 8 | (uint)*pbVar2) << 8 | (uint)pbVar2[1];
            }
            for (; (int)pbVar2 < (int)(pbVar5 + *(int *)((int)this + 100)); pbVar2 = pbVar2 + 1) {
              uVar4 = uVar4 << 8 | (uint)*pbVar2;
            }
          }
          *(uint *)(*(int *)((int)this + 0x6c) + uVar3 * 4) =
               *(int *)(*(int *)((int)this + 0x6c) + -4 + uVar3 * 4) +
               uVar4 * *(int *)((int)this + 0x60);
          pbVar5 = pbVar5 + *(int *)((int)this + 100);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(int *)((int)this + 0x5c) + 1U);
      }
      return 1;
    }
  }
  return 0;
}


