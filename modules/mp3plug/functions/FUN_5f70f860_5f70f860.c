/* Module: mp3plug.dll
   Function: FUN_5f70f860
   Address: 5f70f860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f70f860(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_EAX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar10 = 0;
  if (1 < param_2) {
    iVar10 = 0;
    iVar11 = param_2;
    do {
      iVar11 = iVar11 >> 1;
      iVar10 = iVar10 + 1;
    } while (1 < iVar11);
  }
  iVar11 = 0;
  uVar14 = (int)(param_2 * 2 + (uint)(0x7fffffff < (uint)(param_2 * 2))) >> 1;
  iVar13 = 0;
  if (0 < (int)(uVar14 - 1)) {
    iVar15 = (int)(uVar14 + (0x7fffffff < uVar14)) >> 1;
    do {
      if (iVar11 < iVar13) {
        uVar1 = *(undefined4 *)(in_EAX + iVar13 * 8);
        *(undefined4 *)(in_EAX + iVar13 * 8) = *(undefined4 *)(in_EAX + iVar11 * 8);
        *(undefined4 *)(in_EAX + iVar11 * 8) = uVar1;
        uVar1 = *(undefined4 *)(in_EAX + 4 + iVar13 * 8);
        *(undefined4 *)(in_EAX + 4 + iVar13 * 8) = *(undefined4 *)(in_EAX + 4 + iVar11 * 8);
        *(undefined4 *)(in_EAX + 4 + iVar11 * 8) = uVar1;
      }
      iVar12 = iVar15;
      if (iVar15 <= iVar13) {
        do {
          iVar13 = iVar13 - iVar12;
          iVar12 = iVar12 >> 1;
        } while (iVar12 <= iVar13);
      }
      iVar13 = iVar13 + iVar12;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uVar14 - 1));
  }
  iVar11 = 1 << ((byte)iVar10 & 0x1f);
  if (0 < iVar11 * 2) {
    iVar13 = 0;
    while( true ) {
      fVar2 = *(float *)(in_EAX + 0x18 + iVar13 * 4) + *(float *)(in_EAX + 0x10 + iVar13 * 4);
      fVar5 = *(float *)(in_EAX + 8 + iVar13 * 4) + *(float *)(in_EAX + iVar13 * 4);
      fVar6 = *(float *)(in_EAX + iVar13 * 4) - *(float *)(in_EAX + 8 + iVar13 * 4);
      fVar3 = *(float *)(in_EAX + 0x10 + iVar13 * 4) - *(float *)(in_EAX + 0x18 + iVar13 * 4);
      fVar8 = *(float *)(in_EAX + 0x1c + iVar13 * 4) + *(float *)(in_EAX + 0x14 + iVar13 * 4);
      fVar9 = *(float *)(in_EAX + 0xc + iVar13 * 4) + *(float *)(in_EAX + 4 + iVar13 * 4);
      fVar4 = *(float *)(in_EAX + 4 + iVar13 * 4) - *(float *)(in_EAX + 0xc + iVar13 * 4);
      *(float *)(in_EAX + iVar13 * 4) = fVar2 + fVar5;
      fVar7 = *(float *)(in_EAX + 0x14 + iVar13 * 4) - *(float *)(in_EAX + 0x1c + iVar13 * 4);
      *(float *)(in_EAX + 0x10 + iVar13 * 4) = fVar5 - fVar2;
      *(float *)(in_EAX + 4 + iVar13 * 4) = fVar8 + fVar9;
      *(float *)(in_EAX + 0x14 + iVar13 * 4) = fVar9 - fVar8;
      *(float *)(in_EAX + 8 + iVar13 * 4) = fVar7 + fVar6;
      *(float *)(in_EAX + 0x18 + iVar13 * 4) = fVar6 - fVar7;
      fVar2 = fVar4 - fVar3;
      fVar3 = fVar3 + fVar4;
      iVar13 = iVar13 + 8;
      if (iVar11 * 2 <= iVar13) break;
      *(float *)(in_EAX + -0x14 + iVar13 * 4) = fVar2;
      *(float *)(in_EAX + -4 + iVar13 * 4) = fVar3;
    }
    *(float *)(in_EAX + -0x14 + iVar13 * 4) = fVar2;
    *(float *)(in_EAX + -4 + iVar13 * 4) = fVar3;
  }
  FUN_5f70f630(iVar10,iVar11);
  return 1;
}


