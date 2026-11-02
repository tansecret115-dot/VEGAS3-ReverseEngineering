/* Module: mp3plug.dll
   Function: FUN_5f70f630
   Address: 5f70f630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f70f630(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_EAX;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_2c;
  undefined8 local_24;
  
  iVar14 = 4;
  if (DAT_5f7529a4 == 0) {
    if (2 < param_1) {
      iVar12 = 0x20;
      do {
        dVar7 = *(double *)(iVar12 + 0x5f74ce70);
        local_4c = _DAT_5f7641b0;
        local_54 = _DAT_5f7641b8;
        dVar8 = *(double *)(iVar12 + 0x5f74ce78);
        iVar15 = 0;
        if (0 < iVar14) {
          do {
            fVar11 = (float)local_4c;
            fVar10 = (float)local_54;
            iVar13 = iVar15;
            do {
              iVar1 = iVar13 + iVar14;
              iVar2 = iVar13 + iVar14 * 2;
              fVar9 = *(float *)(in_EAX + 4 + iVar1 * 8) * fVar11 -
                      *(float *)(in_EAX + iVar1 * 8) * fVar10;
              fVar3 = *(float *)(in_EAX + 4 + iVar1 * 8);
              fVar4 = *(float *)(in_EAX + 4 + iVar13 * 8);
              fVar5 = *(float *)(in_EAX + iVar13 * 8);
              fVar6 = *(float *)(in_EAX + iVar13 * 8);
              *(float *)(in_EAX + 4 + iVar1 * 8) = *(float *)(in_EAX + 4 + iVar13 * 8) - fVar9;
              fVar3 = *(float *)(in_EAX + iVar1 * 8) * fVar11 + fVar3 * fVar10;
              *(float *)(in_EAX + iVar1 * 8) = fVar5 - fVar3;
              *(float *)(in_EAX + 4 + iVar13 * 8) = fVar9 + fVar4;
              *(float *)(in_EAX + iVar13 * 8) = fVar6 + fVar3;
              iVar13 = iVar2;
            } while (iVar2 < param_2);
            local_4c = (double)((float)dVar7 * fVar11 - (float)dVar8 * fVar10);
            local_54 = (double)((float)dVar7 * fVar10 + fVar11 * (float)dVar8);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar14);
        }
        iVar14 = iVar14 * 2;
        iVar12 = iVar12 + 0x10;
      } while (iVar12 < param_1 << 4);
    }
  }
  else if (2 < param_1) {
    iVar12 = 0x20;
    do {
      dVar7 = *(double *)(iVar12 + 0x5f74ce70);
      local_24 = _DAT_5f7641a0;
      local_2c = _DAT_5f7641a8;
      dVar8 = *(double *)(iVar12 + 0x5f74ce78);
      iVar15 = 0;
      if (0 < iVar14) {
        do {
          fVar11 = (float)local_24;
          fVar10 = (float)local_2c;
          iVar13 = iVar15;
          do {
            iVar1 = iVar13 + iVar14;
            iVar2 = iVar13 + iVar14 * 2;
            fVar9 = *(float *)(in_EAX + 4 + iVar1 * 8) * fVar11 -
                    *(float *)(in_EAX + iVar1 * 8) * fVar10;
            fVar3 = *(float *)(in_EAX + 4 + iVar1 * 8);
            fVar4 = *(float *)(in_EAX + 4 + iVar13 * 8);
            fVar5 = *(float *)(in_EAX + iVar13 * 8);
            fVar6 = *(float *)(in_EAX + iVar13 * 8);
            *(float *)(in_EAX + 4 + iVar1 * 8) = *(float *)(in_EAX + 4 + iVar13 * 8) - fVar9;
            fVar3 = *(float *)(in_EAX + iVar1 * 8) * fVar11 + fVar3 * fVar10;
            *(float *)(in_EAX + iVar1 * 8) = fVar5 - fVar3;
            *(float *)(in_EAX + 4 + iVar13 * 8) = fVar9 + fVar4;
            *(float *)(in_EAX + iVar13 * 8) = fVar6 + fVar3;
            iVar13 = iVar2;
          } while (iVar2 < param_2);
          local_24 = (double)((float)dVar7 * fVar11 - (float)dVar8 * fVar10);
          local_2c = (double)((float)dVar7 * fVar10 + fVar11 * (float)dVar8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar14);
      }
      iVar14 = iVar14 * 2;
      iVar12 = iVar12 + 0x10;
    } while (iVar12 < param_1 << 4);
  }
  return;
}


