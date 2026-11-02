/* Module: mp3plug.dll
   Function: FUN_5f708960
   Address: 5f708960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f708960(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar3 = (param_5 + 1) / 3;
  iVar5 = iVar3 * 3 + -1;
  iVar4 = param_5 - iVar5;
  local_20 = (param_3 + 1) / 3;
  if (param_4 < local_20) {
    local_20 = param_4;
  }
  do {
    if (local_20 <= iVar3) {
      return;
    }
    fVar2 = (*(float *)(*param_2 + iVar3 * 4) + *(float *)(param_2[6] + iVar3 * 4) +
            *(float *)(param_2[0xc] + iVar3 * 4)) * _DAT_5f7608a8;
    for (; iVar4 < 3; iVar4 = iVar4 + 2) {
      iVar1 = iVar4 * 4 + iVar5 * 4;
      if (fVar2 < *(float *)(param_1 + iVar1)) {
        *(float *)(param_1 + iVar1) = fVar2;
      }
      if (2 < iVar4 + 1) break;
      iVar1 = (iVar4 + 1) * 4 + iVar5 * 4;
      if (fVar2 < *(float *)(param_1 + iVar1)) {
        *(float *)(param_1 + iVar1) = fVar2;
      }
    }
    iVar5 = iVar5 + 3;
    iVar3 = iVar3 + 1;
    iVar4 = 0;
  } while( true );
}


