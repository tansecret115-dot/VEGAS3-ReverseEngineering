/* Module: vidcap30.exe
   Function: FUN_0040dbf0
   Address: 0040dbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dbf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_0040d640(param_1,param_2);
  if (-1 < iVar2) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
    iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * iVar2;
    iVar6 = iVar5 + iVar4;
    if ((*(int *)(iVar5 + 0x28 + iVar4) == param_2) && (*(int *)(iVar6 + 0x30) == 1)) {
      *(undefined4 *)(iVar6 + 0x28) = 0;
      *(undefined4 *)(iVar6 + 0x30) = 0;
    }
    else {
      piVar1 = *(int **)(iVar6 + 0x2c);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      iVar5 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)piVar1[2];
        do {
          if (*piVar3 == param_2) {
            _SfList_DeleteList_16(piVar1,iVar5,1,0);
            break;
          }
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar5 < iVar4);
      }
      piVar1 = *(int **)(iVar6 + 0x2c);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      *(int *)(iVar6 + 0x30) = iVar4;
      if (*(int *)piVar1[2] != *(int *)(iVar6 + 0x28)) {
        *(int *)(iVar6 + 0x28) = *(int *)piVar1[2];
      }
      if ((iVar4 < 2) && (piVar1 != (int *)0x0)) {
        _SfList_Destroy_4(piVar1);
        *(undefined4 *)(iVar6 + 0x2c) = 0;
      }
    }
    if (*(int *)(iVar6 + 0x44) != 0) {
      FUN_0040d850(param_1,iVar2);
    }
    if (*(int *)(iVar6 + 0x30) < 1) {
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x8c),iVar2,1,0);
    }
    if ((*(int **)(param_1 + 0x8c) == (int *)0x0) || (**(int **)(param_1 + 0x8c) < 1)) {
      FUN_00408cb0(DAT_005ba4c0,1);
    }
  }
  return;
}


