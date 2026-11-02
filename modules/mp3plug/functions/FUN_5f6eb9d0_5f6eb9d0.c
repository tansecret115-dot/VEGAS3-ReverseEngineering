/* Module: mp3plug.dll
   Function: FUN_5f6eb9d0
   Address: 5f6eb9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6eb9d0(int param_1,int param_2,uint param_3,int param_4,undefined4 *param_5,int *param_6)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  uint local_34;
  uint uStack_30;
  uint local_24;
  uint uStack_20;
  
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = 0;
  if (param_2 == 0) {
    param_6[0xbc] = 8;
  }
  else {
    param_6[0xbc] = 6;
  }
  param_6[0x54] = 0;
  param_6[0x55] = 0;
  param_6[0x56] = 0;
  param_6[0x57] = 0;
  if (param_5 == (undefined4 *)0x0) {
    param_6[0x8b] = 0;
  }
  else {
    param_6[0x8b] = 1;
    FUN_5f6ebcb0(param_3,param_6[0xbc],param_5,param_6 + 0x8c);
  }
  param_6[0x51] = 0;
  param_6[0x52] = 0;
  param_6[0x53] = 0;
  param_6[0x58] = 0;
  param_6[3] = 0;
  param_6[4] = 0;
  param_6[5] = 0;
  param_6[6] = 0;
  param_6[7] = 0;
  param_6[8] = 0;
  param_6[9] = 0;
  param_6[10] = 0;
  param_6[0xb] = 0;
  param_6[0xc] = 0;
  param_6[0xd] = 0;
  param_6[0xe] = 0;
  param_6[0xf] = 0;
  param_6[0x10] = 0;
  param_6[0x11] = 0;
  param_6[0x12] = 0;
  param_6[0x13] = 0;
  param_6[0x14] = 0;
  param_6[0x15] = 0;
  param_6[0x16] = 0;
  param_6[0x17] = 0;
  param_6[0x18] = 0;
  param_6[0x19] = 0;
  param_6[0x1a] = 0;
  param_6[0x1b] = 0;
  param_6[0x1c] = 0;
  param_6[0x1d] = 0;
  param_6[0x1e] = 0;
  param_6[0x1f] = 0;
  param_6[0x20] = 0;
  param_6[0x21] = 0;
  param_6[0x22] = 0;
  param_6[0x23] = 0;
  param_6[0x24] = 0;
  param_6[0x25] = 0;
  param_6[0x26] = 0;
  param_6[0x27] = 0;
  param_6[0x28] = 0;
  param_6[0x29] = 0;
  fVar4 = (float10)_DAT_5f75d808;
  if (0 < param_1) {
    iVar3 = param_1 * 0x20 + param_4;
    do {
      fVar5 = (float10)*(float *)(*(int *)(param_4 + 0x10) + *(int *)(param_4 + 8) * 4);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      param_4 = param_4 + 0x20;
    } while (param_4 < iVar3);
    if ((float10)_DAT_5f75d80c != fVar4) {
      fVar4 = (float10)log2(fVar4);
      fVar4 = (float10)_DAT_5f75d804 - (float10)0.6931471805599453 * fVar4 * (float10)_DAT_5f75d800;
      if ((float10)_DAT_5f75d810 <= fVar4) {
        dVar1 = (double)fVar4;
        uStack_20 = (uint)((ulonglong)dVar1 >> 0x20);
        local_24 = SUB84(dVar1,0);
        uVar2 = uStack_20 >> 0x14 & 0x7ff;
        if (uVar2 < 0x3ff) {
          uVar2 = 0;
        }
        else {
          uVar2 = (uStack_20 << 0xb | local_24 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f)
          ;
          if ((longlong)dVar1 < 0) {
            uVar2 = -uVar2;
          }
        }
        param_6[0x59] = -uVar2;
      }
      else {
        dVar1 = (double)(fVar4 - (float10)_DAT_5f75d814);
        uStack_30 = (uint)((ulonglong)dVar1 >> 0x20);
        local_34 = SUB84(dVar1,0);
        uVar2 = uStack_30 >> 0x14 & 0x7ff;
        if (uVar2 < 0x3ff) {
          uVar2 = 0;
        }
        else {
          uVar2 = (uStack_30 << 0xb | local_34 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f)
          ;
          if ((longlong)dVar1 < 0) {
            uVar2 = -uVar2;
          }
        }
        param_6[0x59] = -uVar2;
      }
      goto LAB_5f6ebbf2;
    }
  }
  param_6[0x59] = 0;
LAB_5f6ebbf2:
  iVar3 = param_6[0x59];
  if (iVar3 < -0x95) {
    iVar3 = -0x96;
  }
  param_6[0x59] = iVar3;
  return;
}


