/* Module: mp3plug.dll
   Function: FUN_5f6f42c0
   Address: 5f6f42c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6f42c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  uint local_5c;
  uint uStack_58;
  
  fVar4 = _DAT_5f75dfcc * _DAT_5f75ddd8;
  iVar7 = 0;
  if (0 < in_stack_00000010) {
    do {
      fVar8 = (float10)*(float *)(in_EAX + iVar7 * 4);
      if (fVar8 <= (float10)_DAT_5f75dfd0) {
        fVar8 = (float10)_DAT_5f75dfec;
      }
      fVar1 = *(float *)(param_2 + iVar7 * 4);
      if (*(float *)(param_2 + iVar7 * 4) <= _DAT_5f75dfd4) {
        fVar1 = _DAT_5f75dfe8;
      }
      fVar8 = (float10)log2(fVar8 / (float10)fVar1);
      dVar3 = (double)((float10)0.6931471805599453 * fVar8 * (float10)fVar4);
      uStack_58 = (uint)((ulonglong)dVar3 >> 0x20);
      local_5c = SUB84(dVar3,0);
      uVar6 = uStack_58 >> 0x14 & 0x7ff;
      if (uVar6 < 0x3ff) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uStack_58 << 0xb | local_5c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
        if ((longlong)dVar3 < 0) {
          uVar6 = -uVar6;
        }
      }
      *(uint *)(in_stack_00000014 + iVar7 * 4) = uVar6;
      if ((int)uVar6 < 0) {
        iVar5 = uVar6 * -2 + -1;
        *(int *)(in_stack_00000014 + iVar7 * 4) = iVar5;
        if (6 < iVar5) {
          *(undefined4 *)(in_stack_00000014 + iVar7 * 4) = 5;
        }
      }
      else {
        *(uint *)(in_stack_00000014 + iVar7 * 4) = uVar6 * 2;
        if (6 < (int)(uVar6 * 2)) {
          *(undefined4 *)(in_stack_00000014 + iVar7 * 4) = 6;
        }
      }
      fVar1 = *(float *)(in_EAX + iVar7 * 4);
      fVar2 = *(float *)(param_2 + iVar7 * 4);
      if (fVar2 < fVar1) {
        fVar2 = fVar1;
      }
      fVar1 = *(float *)(param_1 + iVar7 * 4);
      if (*(float *)(param_1 + iVar7 * 4) <= _DAT_5f75dfdc) {
        fVar1 = _DAT_5f75dfe4;
      }
      *(float *)(in_stack_00000018 + iVar7 * 4) = SQRT(fVar2 / fVar1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_stack_00000010);
  }
  *(undefined4 *)(in_stack_00000018 + in_stack_00000010 * 4) =
       *(undefined4 *)(in_stack_00000018 + -4 + in_stack_00000010 * 4);
  return;
}


