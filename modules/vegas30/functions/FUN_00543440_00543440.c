/* Module: vegas30.exe
   Function: FUN_00543440
   Address: 00543440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00543440(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0;
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  piVar5 = param_2;
  bVar1 = false;
  iVar8 = **(int **)(param_1 + 4);
  if (0 < iVar8) {
    piVar3 = (int *)(*(int **)(param_1 + 4))[2];
    param_1 = iVar8;
    do {
      if ((*(int *)*piVar3 == *param_2) && (((int *)*piVar3)[1] == param_2[1])) {
        bVar1 = true;
      }
      piVar3 = piVar3 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if (bVar1) {
      local_8 = 0;
      goto LAB_0054350d;
    }
  }
  piVar3 = calloc(1,0x18);
  if (piVar3 == (int *)0x0) {
    local_8 = 0x8007000e;
  }
  else {
    piVar6 = piVar3;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    if (param_2[3] == 1) {
      uVar7 = *(undefined4 *)(iVar2 + 4);
      iVar8 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 4);
    }
    param_2 = piVar3;
    _SfList_InsertList_16(uVar7,iVar8,&param_2,1);
  }
LAB_0054350d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 4) + 0xc));
  return local_8;
}


