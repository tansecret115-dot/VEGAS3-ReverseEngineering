/* Module: mp3plug.dll
   Function: FUN_5f6d3b30
   Address: 5f6d3b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6d3b30(int *param_1,uint param_2,uint param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (1 < (int)param_3) {
    pvVar1 = calloc(8,1);
    *param_1 = (int)pvVar1;
    if (pvVar1 != (void *)0x0) {
      if (param_2 == 0) {
        param_2 = param_3;
      }
      pvVar1 = calloc(4,param_2);
      *(void **)(*param_1 + 4) = pvVar1;
      if (*(int *)(*param_1 + 4) != 0) {
        iVar3 = 0;
        if (0 < (int)param_3) {
          if (0 < (int)(param_3 & 0xfffffffe)) {
            do {
              *(undefined4 *)(*(int *)(*param_1 + 4) + iVar3 * 4) =
                   *(undefined4 *)(param_4 + iVar3 * 4);
              *(undefined4 *)(*(int *)(*param_1 + 4) + 4 + iVar3 * 4) =
                   *(undefined4 *)(param_4 + 4 + iVar3 * 4);
              iVar3 = iVar3 + 2;
            } while (iVar3 < (int)(param_3 & 0xfffffffe));
          }
          for (; iVar3 < (int)param_3; iVar3 = iVar3 + 1) {
            *(undefined4 *)(*(int *)(*param_1 + 4) + iVar3 * 4) =
                 *(undefined4 *)(param_4 + iVar3 * 4);
          }
        }
        if ((int)param_3 < (int)param_2) {
          iVar2 = (param_2 - iVar3 & 0xfffffffe) + iVar3;
          for (; iVar3 < iVar2; iVar3 = iVar3 + 2) {
            *(undefined4 *)(*(int *)(*param_1 + 4) + iVar3 * 4) = 0;
            *(undefined4 *)(*(int *)(*param_1 + 4) + 4 + iVar3 * 4) = 0;
          }
          for (; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
            *(undefined4 *)(*(int *)(*param_1 + 4) + iVar3 * 4) = 0;
          }
          FUN_5f6e5d10(*(float **)(*param_1 + 4));
          *(uint *)*param_1 = param_2;
        }
        else {
          *(uint *)*param_1 = param_3;
        }
        return 1;
      }
    }
  }
  return 0;
}


