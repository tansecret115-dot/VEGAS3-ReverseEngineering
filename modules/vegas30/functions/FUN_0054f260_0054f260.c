/* Module: vegas30.exe
   Function: FUN_0054f260
   Address: 0054f260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054f260(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *local_4;
  
  iVar1 = Transport_IsPlaying();
  if ((iVar1 == 0) && (piVar2 = (int *)FUN_0054a530(param_1), piVar2 != (int *)0x0)) {
    local_4 = (int *)0x0;
    iVar1 = FUN_0054c960(param_1,&local_4);
    if (iVar1 < 0) {
      iVar1 = Transport_IsPreviewPlaying();
      if (iVar1 != 0) {
        FUN_005fd4c0(1);
        return;
      }
    }
    else {
      iVar4 = 0;
      iVar1 = *local_4;
      if (0 < iVar1) {
        piVar3 = (int *)local_4[2];
        do {
          if (*piVar3 == *piVar2) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar1);
      }
      _SfList_Destroy_4(local_4);
      if (iVar4 == iVar1) {
        iVar1 = Transport_IsPreviewPlaying();
        if (iVar1 != 0) {
          FUN_005fd4c0(1);
          return;
        }
      }
      else {
        iVar1 = Transport_IsPreviewPlaying();
        if (iVar1 != 0) {
          if (*(int **)(param_1 + 0x544) == piVar2) {
            return;
          }
          FUN_005fd4c0(1);
        }
        puVar5 = &DAT_00657600;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_00657600 = 0x10;
        DAT_00657604 = 0;
        _DAT_00657620 = 0;
        _DAT_0065761c = 0;
        _DAT_00657608 = 0;
        _DAT_0065760c = 0;
        _DAT_00657610 = 0xffffffff;
        _DAT_00657614 = 0xffffffff;
        _DAT_00657618 = *piVar2;
        if (_DAT_00657618 != 0) {
          *(int **)(param_1 + 0x544) = piVar2;
          FUN_005fcfc0(&DAT_00657600,0,0,0,0,0,0,0,0x3ff00000,0);
        }
      }
    }
  }
  return;
}


