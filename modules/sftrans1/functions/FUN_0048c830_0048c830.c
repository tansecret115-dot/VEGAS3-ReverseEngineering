/* Module: sftrans1.dll
   Function: FUN_0048c830
   Address: 0048c830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c830(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  if ((-1 < param_2) && (param_2 < **(int **)(param_1 + 0xa4))) {
    iVar2 = *(int *)((*(int **)(param_1 + 0xa4))[2] + param_2 * 4);
    if ((int)param_3 < 0) {
      param_3 = (uint)(*(int *)(iVar2 + 0xc) == 0);
    }
    local_8 = 0;
    if ((param_3 != 0) &&
       (iVar3 = **(int **)(param_1 + 0xb0), iVar4 = iVar3, local_4 = iVar3, 0 < iVar3)) {
      do {
        iVar4 = iVar4 + -1;
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xb0) + 8) + iVar4 * 4);
        if (param_4 == 0) {
          iVar1 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,iVar1);
          if ((iVar1 < param_2) && (local_8 < iVar3)) {
            local_8 = iVar3;
          }
        }
        else {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          FUN_004dc400(*(undefined4 *)(param_1 + 0xb0),iVar4,1,1);
        }
        iVar3 = iVar3 + -1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    iVar3 = param_2;
    *(uint *)(iVar2 + 0xc) = param_3;
    if (param_3 == 0) {
      iVar2 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xb0),0,0xffffffff,iVar2);
      if ((-1 < iVar2) && (iVar2 < **(int **)(param_1 + 0xb0))) {
        FUN_004dc400(*(int **)(param_1 + 0xb0),iVar2,1,1);
      }
    }
    else {
      iVar4 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xb0),0,0xffffffff,iVar2);
      if (iVar4 < 0) {
        param_2 = iVar2;
        FUN_004dc110(*(undefined4 *)(param_1 + 0xb0),local_8,&param_2,1);
      }
    }
    *(int *)(param_1 + 0xfc) = iVar3;
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
    FUN_0048c310(2,0xffffffff,0);
    return 1;
  }
  return 0;
}


