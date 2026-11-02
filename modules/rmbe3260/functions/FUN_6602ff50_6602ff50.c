/* Module: rmbe3260.dll
   Function: FUN_6602ff50
   Address: 6602ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6602ff50(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_6605cda0(puVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_6605cda0(puVar2);
  }
  *(int *)(param_1 + 0x6a) = iVar4;
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar4 != 0)) {
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    pvVar5 = operator_new(0x12);
    *(void **)(param_1 + 0x52) = pvVar5;
    if (pvVar5 != (void *)0x0) {
      pvVar5 = operator_new(0x12);
      *(void **)(param_1 + 0x5e) = pvVar5;
      if (pvVar5 != (void *)0x0) {
        **(undefined4 **)(param_1 + 0x52) = 0x2e524d46;
        *(undefined4 *)(*(int *)(param_1 + 0x52) + 4) = 0x12;
        *(undefined2 *)(*(int *)(param_1 + 0x52) + 8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x52) + 10) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x52) + 0xe) = *(undefined4 *)(param_1 + 8);
        puVar2 = *(undefined4 **)(param_1 + 0x52);
        puVar1 = *(undefined1 **)(param_1 + 0x5e);
        *puVar1 = (char)((uint)*puVar2 >> 0x18);
        puVar1[1] = (char)((uint)*puVar2 >> 0x10);
        puVar1[2] = (char)((uint)*puVar2 >> 8);
        puVar1[3] = *(undefined1 *)puVar2;
        puVar1[4] = (char)((uint)puVar2[1] >> 0x18);
        puVar1[5] = (char)((uint)puVar2[1] >> 0x10);
        puVar1[6] = (char)((uint)puVar2[1] >> 8);
        puVar1[7] = *(undefined1 *)(puVar2 + 1);
        puVar1[8] = *(undefined1 *)((int)puVar2 + 9);
        puVar1[9] = *(undefined1 *)(puVar2 + 2);
        if ((*(short *)(puVar2 + 2) == 0) || (*(short *)(puVar2 + 2) == 1)) {
          puVar1[10] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x18);
          puVar1[0xb] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x10);
          puVar1[0xc] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 8);
          puVar1[0xd] = *(undefined1 *)((int)puVar2 + 10);
          puVar1[0xe] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x18);
          puVar1[0xf] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x10);
          puVar1[0x10] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 8);
          puVar1[0x11] = *(undefined1 *)((int)puVar2 + 0xe);
        }
        puVar2 = operator_new(0x10);
        puVar2[2] = *(undefined4 *)(param_1 + 0x5e);
        *puVar2 = 0x12;
        puVar2[1] = 0;
        puVar2[3] = 0;
        FUN_6605cf30(*(void **)(param_1 + 0xc),*(int *)((int)*(void **)(param_1 + 0xc) + 4),puVar2);
        pvVar5 = operator_new(0x32);
        *(void **)(param_1 + 0x56) = pvVar5;
        if (pvVar5 != (void *)0x0) {
          pvVar5 = operator_new(0x32);
          *(void **)(param_1 + 0x62) = pvVar5;
          if (pvVar5 != (void *)0x0) {
            **(undefined4 **)(param_1 + 0x56) = 0x50524f50;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 4) = 0x32;
            *(undefined2 *)(*(int *)(param_1 + 0x56) + 8) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 10) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0xe) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x12) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x16) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x1a) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x1e) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x22) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x26) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x2a) = 0;
            *(undefined2 *)(*(int *)(param_1 + 0x56) + 0x2e) = 0;
            *(undefined2 *)(*(int *)(param_1 + 0x56) + 0x30) = 0;
            puVar2 = *(undefined4 **)(param_1 + 0x56);
            puVar1 = *(undefined1 **)(param_1 + 0x62);
            *puVar1 = (char)((uint)*puVar2 >> 0x18);
            puVar1[1] = (char)((uint)*puVar2 >> 0x10);
            puVar1[2] = (char)((uint)*puVar2 >> 8);
            puVar1[3] = *(undefined1 *)puVar2;
            puVar1[4] = (char)((uint)puVar2[1] >> 0x18);
            puVar1[5] = (char)((uint)puVar2[1] >> 0x10);
            puVar1[6] = (char)((uint)puVar2[1] >> 8);
            puVar1[7] = *(undefined1 *)(puVar2 + 1);
            puVar1[8] = *(undefined1 *)((int)puVar2 + 9);
            puVar1[9] = *(undefined1 *)(puVar2 + 2);
            if (*(short *)(puVar2 + 2) == 0) {
              puVar1[10] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x18);
              puVar1[0xb] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x10);
              puVar1[0xc] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 8);
              puVar1[0xd] = *(undefined1 *)((int)puVar2 + 10);
              puVar1[0xe] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x18);
              puVar1[0xf] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x10);
              puVar1[0x10] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 8);
              puVar1[0x11] = *(undefined1 *)((int)puVar2 + 0xe);
              puVar1[0x12] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x12) >> 0x18);
              puVar1[0x13] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x12) >> 0x10);
              puVar1[0x14] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x12) >> 8);
              puVar1[0x15] = *(undefined1 *)((int)puVar2 + 0x12);
              puVar1[0x16] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x16) >> 0x18);
              puVar1[0x17] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x16) >> 0x10);
              puVar1[0x18] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x16) >> 8);
              puVar1[0x19] = *(undefined1 *)((int)puVar2 + 0x16);
              puVar1[0x1a] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1a) >> 0x18);
              puVar1[0x1b] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1a) >> 0x10);
              puVar1[0x1c] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1a) >> 8);
              puVar1[0x1d] = *(undefined1 *)((int)puVar2 + 0x1a);
              puVar1[0x1e] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1e) >> 0x18);
              puVar1[0x1f] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1e) >> 0x10);
              puVar1[0x20] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x1e) >> 8);
              puVar1[0x21] = *(undefined1 *)((int)puVar2 + 0x1e);
              puVar1[0x22] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x22) >> 0x18);
              puVar1[0x23] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x22) >> 0x10);
              puVar1[0x24] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x22) >> 8);
              puVar1[0x25] = *(undefined1 *)((int)puVar2 + 0x22);
              puVar1[0x26] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x26) >> 0x18);
              puVar1[0x27] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x26) >> 0x10);
              puVar1[0x28] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x26) >> 8);
              puVar1[0x29] = *(undefined1 *)((int)puVar2 + 0x26);
              puVar1[0x2a] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x2a) >> 0x18);
              puVar1[0x2b] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x2a) >> 0x10);
              puVar1[0x2c] = (char)((uint)*(undefined4 *)((int)puVar2 + 0x2a) >> 8);
              puVar1[0x2d] = *(undefined1 *)((int)puVar2 + 0x2a);
              puVar1[0x2e] = *(undefined1 *)((int)puVar2 + 0x2f);
              puVar1[0x2f] = *(undefined1 *)((int)puVar2 + 0x2e);
              puVar1[0x30] = *(undefined1 *)((int)puVar2 + 0x31);
              puVar1[0x31] = *(undefined1 *)(puVar2 + 0xc);
            }
            puVar2 = operator_new(0x10);
            uVar3 = *(undefined4 *)(param_1 + 0x62);
            *puVar2 = 0x32;
            puVar2[2] = uVar3;
            puVar2[1] = 0;
            puVar2[3] = 0;
            iVar4 = *(int *)((int)*(void **)(param_1 + 0xc) + 4);
            FUN_6605cf30(*(void **)(param_1 + 0xc),iVar4,puVar2);
            *(int *)(param_1 + 0x1c) = iVar4;
            pvVar5 = operator_new(0x12);
            *(void **)(param_1 + 0x5a) = pvVar5;
            if (pvVar5 != (void *)0x0) {
              pvVar5 = operator_new(0x12);
              *(void **)(param_1 + 0x66) = pvVar5;
              if (pvVar5 != (void *)0x0) {
                **(undefined4 **)(param_1 + 0x5a) = 0x44415441;
                *(undefined4 *)(*(int *)(param_1 + 0x5a) + 4) = 0x12;
                *(undefined2 *)(*(int *)(param_1 + 0x5a) + 8) = 0;
                *(undefined4 *)(*(int *)(param_1 + 0x5a) + 10) = 0;
                *(undefined4 *)(*(int *)(param_1 + 0x5a) + 0xe) = 0;
                puVar2 = *(undefined4 **)(param_1 + 0x5a);
                puVar1 = *(undefined1 **)(param_1 + 0x66);
                *puVar1 = (char)((uint)*puVar2 >> 0x18);
                puVar1[1] = (char)((uint)*puVar2 >> 0x10);
                puVar1[2] = (char)((uint)*puVar2 >> 8);
                puVar1[3] = *(undefined1 *)puVar2;
                puVar1[4] = (char)((uint)puVar2[1] >> 0x18);
                puVar1[5] = (char)((uint)puVar2[1] >> 0x10);
                puVar1[6] = (char)((uint)puVar2[1] >> 8);
                puVar1[7] = *(undefined1 *)(puVar2 + 1);
                puVar1[8] = *(undefined1 *)((int)puVar2 + 9);
                puVar1[9] = *(undefined1 *)(puVar2 + 2);
                if (*(short *)(puVar2 + 2) == 0) {
                  puVar1[10] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x18);
                  puVar1[0xb] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 0x10);
                  puVar1[0xc] = (char)((uint)*(undefined4 *)((int)puVar2 + 10) >> 8);
                  puVar1[0xd] = *(undefined1 *)((int)puVar2 + 10);
                  puVar1[0xe] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x18);
                  puVar1[0xf] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 0x10);
                  puVar1[0x10] = (char)((uint)*(undefined4 *)((int)puVar2 + 0xe) >> 8);
                  puVar1[0x11] = *(undefined1 *)((int)puVar2 + 0xe);
                }
                puVar2 = operator_new(0x10);
                puVar2[2] = *(undefined4 *)(param_1 + 0x66);
                *puVar2 = 0x12;
                puVar2[1] = 0;
                puVar2[3] = 0;
                FUN_6605cf30(*(void **)(param_1 + 0xc),*(int *)((int)*(void **)(param_1 + 0xc) + 4),
                             puVar2);
                *(undefined4 *)(param_1 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0x2e) = 0;
                *(undefined4 *)(param_1 + 0x32) = 0;
                *(undefined4 *)(param_1 + 0x36) = 0;
                *(undefined4 *)(param_1 + 0x3e) = 0;
                *(undefined4 *)(param_1 + 0x42) = 0;
                *(undefined4 *)(param_1 + 0x4a) = 0;
                *(undefined2 *)(param_1 + 0x6e) = 0;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0x8007000e;
  return 0x8007000e;
}


