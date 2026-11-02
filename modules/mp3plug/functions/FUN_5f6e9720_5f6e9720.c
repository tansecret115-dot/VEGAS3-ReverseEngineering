/* Module: mp3plug.dll
   Function: FUN_5f6e9720
   Address: 5f6e9720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6e9720(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (DAT_5f7529d0 == 0) {
    FUN_5f6e9b00();
    DAT_5f7529d0 = 1;
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar9 = iVar2 + 1;
      iVar7 = iVar2 * 0x20;
      uVar6 = *(uint *)(param_3 + 4 + iVar7);
      if (iVar9 < param_1) {
        iVar8 = iVar9 * 0x20;
        iVar5 = *(int *)(param_5 + iVar2 * 4);
        do {
          iVar2 = iVar9;
          if (iVar5 != *(int *)(param_5 + iVar9 * 4)) break;
          uVar6 = uVar6 + *(int *)(param_3 + 4 + iVar8);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 0x20;
          iVar2 = iVar9;
        } while (iVar9 < param_1);
      }
      else {
        iVar5 = *(int *)(param_5 + iVar2 * 4);
        iVar2 = iVar9;
      }
      iVar9 = *(int *)(param_3 + iVar7);
      uVar3 = param_2 - iVar9;
      if ((int)uVar6 < (int)uVar3) {
        uVar3 = uVar6;
      }
      iVar7 = param_7 + iVar9 * 4;
      iVar9 = param_6 + iVar9 * 4;
      uVar4 = param_4 - iVar5;
      if ((int)uVar4 < 0) {
        fVar1 = *(float *)(&DAT_5f741210 + (-uVar4 & 3) * 4) *
                *(float *)(&DAT_5f741040 + ((int)-uVar4 >> 2) * 4);
      }
      else {
        fVar1 = *(float *)(&DAT_5f741200 + (uVar4 & 3) * 4) *
                *(float *)(&DAT_5f741120 + ((int)uVar4 >> 2) * 4);
      }
      iVar5 = 0;
      if (0 < (int)uVar3) {
        if (0 < (int)(uVar3 & 0xfffffffe)) {
          do {
            *(float *)(iVar7 + iVar5 * 4) =
                 (float)(&DAT_5f7529d4)[*(int *)(iVar9 + iVar5 * 4)] * fVar1;
            *(float *)(iVar7 + 4 + iVar5 * 4) =
                 (float)(&DAT_5f7529d4)[*(int *)(iVar9 + 4 + iVar5 * 4)] * fVar1;
            iVar5 = iVar5 + 2;
          } while (iVar5 < (int)(uVar3 & 0xfffffffe));
        }
        while (iVar5 < (int)uVar3) {
          iVar8 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *(float *)(iVar7 + -4 + iVar5 * 4) =
               (float)(&DAT_5f7529d4)[*(int *)(iVar9 + iVar8)] * fVar1;
        }
      }
    } while (((int)uVar6 <= (int)uVar3) && (iVar2 < param_1));
  }
  uVar6 = *(int *)(param_3 + param_1 * 0x20) - param_2;
  if (0 < (int)uVar6) {
    FUN_5f6d8bb0(0,param_7 + param_2 * 4,uVar6);
  }
  return;
}


