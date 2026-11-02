/* Module: mp3plug.dll
   Function: FUN_5f7004e0
   Address: 5f7004e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f7004e0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = 0;
  if (0 < param_2) {
    for (piVar6 = param_4;
        (int)piVar6 < (int)(((int)(param_4 + param_2) - (int)param_4 & 0xfffffff8U) + (int)param_4);
        piVar6 = piVar6 + 2) {
      iVar4 = iVar4 + *piVar6 * 3 + piVar6[1] * 3;
    }
    for (; (int)piVar6 < (int)(param_4 + param_2); piVar6 = piVar6 + 1) {
      iVar4 = iVar4 + *piVar6 * 3;
    }
  }
  if (param_2 < param_3) {
    piVar6 = param_4 + param_2;
    do {
      iVar1 = iVar4 + 3;
      iVar5 = *piVar6 * 3;
      iVar7 = iVar4;
      do {
        iVar3 = 0;
        if (0 < iVar5) {
          iVar2 = 0;
          do {
            iVar3 = iVar3 + 3;
            iVar5 = iVar2 + iVar7 * 4;
            iVar2 = iVar2 + 0xc;
            *(undefined4 *)(param_5 + iVar4 * 4) = *(undefined4 *)(iVar5 + param_1);
            iVar4 = iVar4 + 1;
            iVar5 = *piVar6 * 3;
          } while (iVar3 < iVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
      piVar6 = piVar6 + 1;
    } while ((int)piVar6 < (int)(param_4 + param_3));
  }
  for (; iVar4 < 0x240; iVar4 = iVar4 + 1) {
    *(undefined4 *)(param_5 + iVar4 * 4) = 0;
  }
  return;
}


