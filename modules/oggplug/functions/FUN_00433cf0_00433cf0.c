/* Module: oggplug.dll
   Function: FUN_00433cf0
   Address: 00433cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00433cf0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fStack00000018;
  
  iVar6 = 0;
  iVar2 = *param_1;
  if (0 < iVar2) {
    do {
      iVar5 = iVar6 + 1;
      fStack00000018 = *(float *)(param_3 + iVar6 * 4);
      iVar4 = *(int *)(param_1[6] + iVar6 * 4);
      pfVar3 = (float *)(param_3 + iVar6 * 4);
      if (iVar5 < iVar2) {
        piVar7 = (int *)(param_1[6] + iVar5 * 4);
        do {
          if (*piVar7 != iVar4) break;
          pfVar1 = pfVar3 + 1;
          pfVar3 = pfVar3 + 1;
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
          iVar5 = iVar5 + 1;
          if (fStack00000018 < *pfVar1) {
            fStack00000018 = *pfVar3;
          }
        } while (iVar5 < iVar2);
      }
      if (*(float *)(param_4 + iVar6 * 4) < fStack00000018 + _DAT_0044d778) {
        iVar4 = iVar4 >> ((byte)param_1[9] & 0x1f);
        if (iVar4 < 0x11) {
          if (iVar4 < 0) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 0x10;
        }
        FUN_00433dd0(param_5,*(int *)(param_2 + iVar4 * 4),fStack00000018,
                     *(int *)(param_1[6] + iVar6 * 4) - param_1[8],param_1[0xb],param_1[10]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return;
}


