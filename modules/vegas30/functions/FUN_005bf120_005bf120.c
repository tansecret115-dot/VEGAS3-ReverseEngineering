/* Module: vegas30.exe
   Function: FUN_005bf120
   Address: 005bf120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005bf120(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LPCVOID pvVar3;
  int iVar4;
  HGLOBAL pvVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_8;
  int local_4;
  
  local_4 = param_1;
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  uVar7 = 0;
  iVar4 = FUN_005be790(param_2,param_4,&local_8);
  if (iVar4 == 1) {
    piVar6 = *(int **)(param_1 + 0x78);
    if (piVar6 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar6;
    }
    if ((local_8 < 0) || (iVar4 + -1 < local_8)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar6[2] + local_8 * 4);
    }
    if (((iVar4 == 0) || (piVar6 = *(int **)(iVar4 + 0x60), piVar6 == (int *)0x0)) ||
       (*piVar6 <= param_3)) goto LAB_005bf2a2;
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    pvVar3 = *(LPCVOID *)(iVar1 * param_3 + 0x14 + iVar2);
    if (pvVar3 != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(pvVar3);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(iVar1 * param_3 + iVar2 + 0x14));
      GlobalFree(pvVar5);
      param_1 = local_4;
    }
    piVar6 = *(int **)(iVar4 + 0x60);
  }
  else if (iVar4 == 2) {
    if (((param_1 == -0x80) || (piVar6 = (int *)FUN_00522a00(local_8), piVar6 == (int *)0x0)) ||
       (*piVar6 <= param_3)) goto LAB_005bf2a2;
  }
  else {
    if (iVar4 != 3) goto LAB_005bf2a2;
    piVar6 = *(int **)(param_1 + 0x7c);
    if (piVar6 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar6;
    }
    if ((local_8 < 0) || (iVar4 + -1 < local_8)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar6[2] + local_8 * 4);
    }
    if (((iVar4 == 0) || (piVar6 = *(int **)(iVar4 + 0x60), piVar6 == (int *)0x0)) ||
       (*piVar6 <= param_3)) goto LAB_005bf2a2;
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    pvVar3 = *(LPCVOID *)(iVar1 * param_3 + 0x14 + iVar2);
    if (pvVar3 != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(pvVar3);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(iVar1 * param_3 + iVar2 + 0x14));
      GlobalFree(pvVar5);
      param_1 = local_4;
    }
    piVar6 = *(int **)(iVar4 + 0x60);
  }
  _SfList_DeleteList_16(piVar6,param_3,1,0);
  uVar7 = 1;
LAB_005bf2a2:
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return uVar7;
}


