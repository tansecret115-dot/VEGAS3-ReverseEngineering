/* Module: sfxpfx2.dll
   Function: FUN_5c8a2820
   Address: 5c8a2820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5c8a2876) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a2820(byte *param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
  if (param_6 != 0) {
    local_24 = param_6;
    do {
      local_10 = (double)(int)(char)(*param_1 ^ 0x80) * _DAT_5c8dc950;
      local_18 = local_10;
      if (*(int *)param_4 != 0) {
        dVar1 = *(double *)(param_4 + 8);
        dVar2 = dVar1 * *(double *)(param_4 + 0x18) +
                (local_10 * *(double *)(param_4 + 0x28) -
                *(double *)(param_4 + 0x20) * *(double *)(param_4 + 0x10));
        local_20._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        uVar5 = local_20._4_4_ & 0x7ff00000;
        local_18 = (dVar2 - dVar1) * *(double *)(param_4 + 0x30) + local_10;
        local_20 = dVar2;
        if (uVar5 < 0x3df00000) {
          local_20 = 0.0;
        }
        *(double *)(param_4 + 0x10) = dVar1;
        *(int *)(param_4 + 8) = (int)local_20;
        *(uint *)(param_4 + 0xc) = local_20._4_4_;
      }
      if (*param_5 != 0) {
        if (*param_5 == 1) {
          dVar1 = (local_18 * *(double *)(param_5 + 10) +
                  *(double *)(param_5 + 6) * *(double *)(param_5 + 2)) -
                  *(double *)(param_5 + 8) * *(double *)(param_5 + 4);
          local_20._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          uVar5 = local_20._4_4_ & 0x7ff00000;
          local_20 = dVar1;
          if (uVar5 < 0x3df00000) {
            local_20 = 0.0;
          }
          param_5[4] = param_5[2];
          param_5[2] = (int)local_20;
          dVar1 = local_18 * *(double *)(param_5 + 0xe) + local_20 * *(double *)(param_5 + 0x10);
          param_5[5] = param_5[3];
          param_5[3] = local_20._4_4_;
          dVar2 = (*(double *)(param_5 + 0x16) * *(double *)(param_5 + 0x12) +
                  dVar1 * *(double *)(param_5 + 0x1a)) -
                  *(double *)(param_5 + 0x18) * *(double *)(param_5 + 0x14);
          local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
          uVar5 = local_18._4_4_ & 0x7ff00000;
          local_18 = dVar2;
          if (uVar5 < 0x3df00000) {
            local_18 = 0.0;
          }
          param_5[0x14] = param_5[0x12];
          param_5[0x12] = (int)local_18;
          param_5[0x15] = param_5[0x13];
          param_5[0x13] = local_18._4_4_;
          local_18 = dVar1 * *(double *)(param_5 + 0x1e) + local_18 * *(double *)(param_5 + 0x20);
        }
        else {
          FUN_5c8a2af0((double *)&local_18,(double *)(param_5 + 2));
          FUN_5c8a2af0((double *)&local_18,(double *)(param_5 + 0x12));
        }
      }
      if (param_5[0x22] != 0) {
        if (param_5[0x22] == 1) {
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x24));
        }
        else {
          FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x24));
        }
        FUN_5c8a2a70((double *)&local_18,(double *)(param_5 + 0x34));
      }
      iVar4 = ftol();
      if (iVar4 < -0x80) {
        bVar3 = 0;
      }
      else if (iVar4 < 0x80) {
        bVar3 = (byte)iVar4 ^ 0x80;
      }
      else {
        bVar3 = 0xff;
      }
      *param_1 = bVar3;
      param_1 = param_1 + param_2;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


