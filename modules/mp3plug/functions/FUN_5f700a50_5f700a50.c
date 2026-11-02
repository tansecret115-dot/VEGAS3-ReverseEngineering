/* Module: mp3plug.dll
   Function: FUN_5f700a50
   Address: 5f700a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_5f700a50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  iVar10 = 0;
  if (0 < param_3) {
    do {
      if (param_7 <= iVar10) break;
      iVar7 = iVar9 * 0x20;
      *(int *)(param_8 + iVar7) = iVar10;
      *(undefined4 *)(param_8 + 4 + iVar7) = *(undefined4 *)(param_4 + iVar9 * 4);
      *(int *)(param_8 + 0x10 + iVar7) = param_2 + iVar10 * 4;
      *(int *)(param_8 + 0xc + iVar7) = param_1 + iVar10 * 4;
      fVar1 = *(float *)(param_6 + iVar9 * 4);
      *(undefined4 *)(param_8 + 0x14 + iVar7) = *(undefined4 *)(param_6 + iVar9 * 4);
      bVar3 = fVar1 == _DAT_5f75f484;
      *(undefined4 *)(param_8 + 0x1c + iVar7) = *(undefined4 *)(param_5 + iVar9 * 4);
      if (bVar3) {
        *(undefined4 *)(param_8 + 0x18 + iVar7) = 0;
      }
      else {
        *(float *)(param_8 + 0x18 + iVar7) = _DAT_5f75f494 / *(float *)(param_6 + iVar9 * 4);
      }
      fVar1 = _DAT_5f75f48c;
      iVar6 = 0;
      iVar8 = *(int *)(param_8 + 4 + iVar7);
      *(undefined4 *)(param_8 + 8 + iVar7) = 0;
      if (0 < iVar8) {
        do {
          fVar2 = *(float *)(*(int *)(param_8 + 0xc + iVar7) + iVar6 * 4);
          if (fVar1 < fVar2) {
            *(int *)(param_8 + 8 + iVar7) = iVar6;
            iVar8 = *(int *)(param_8 + 4 + iVar7);
            fVar1 = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
      iVar10 = iVar10 + *(int *)(param_4 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_3);
  }
  if (iVar9 < 0x17) {
    piVar4 = (int *)(param_8 + iVar9 * 0x20);
    piVar5 = (int *)(param_4 + iVar9 * 4);
    do {
      *piVar4 = iVar10;
      iVar7 = *piVar5;
      piVar4[5] = 0;
      piVar4[1] = iVar7;
      piVar4[7] = 0;
      piVar4[3] = param_1 + iVar10 * 4;
      piVar4[6] = 0;
      piVar4[4] = param_2 + iVar10 * 4;
      piVar4[2] = 0;
      iVar10 = iVar10 + *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 8;
    } while ((int)piVar5 < param_4 + 0x5c);
  }
  return iVar9;
}


