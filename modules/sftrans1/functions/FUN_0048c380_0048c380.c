/* Module: sftrans1.dll
   Function: FUN_0048c380
   Address: 0048c380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c380(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if ((((-1 < param_2) && (param_2 < **(int **)(param_1 + 0xa4))) && (-1 < param_3)) &&
     (param_3 < **(int **)(param_1 + 0xac) + 3)) {
    piVar1 = *(int **)((*(int **)(param_1 + 0xa4))[2] + param_2 * 4);
    if (*piVar1 == -1) {
      iVar5 = FUN_004863b0();
      iVar7 = iVar5;
      iVar4 = iVar5;
      while (iVar4 = iVar4 + 1, iVar4 < param_2) {
        uVar6 = 1;
        iVar2 = (*(int **)(param_1 + 0xa4))[2];
        puVar3 = *(undefined4 **)(iVar2 + iVar4 * 4);
        if ((-1 < iVar7) && (iVar7 < **(int **)(param_1 + 0xa4))) {
          uVar6 = **(undefined4 **)(iVar2 + iVar4 * 4 + -4);
        }
        FUN_00486a50(iVar4,uVar6);
        iVar7 = iVar7 + 1;
        *puVar3 = uVar6;
      }
      FUN_00486c30(**(undefined4 **)(param_1 + 0xa4),param_2 - iVar5,0xffffffff,0,0);
    }
    if (param_3 != *piVar1) {
      FUN_00486a50(param_2,param_3);
      FUN_004863e0(piVar1,param_3);
      *piVar1 = param_3;
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
      FUN_0048c310(1,param_2,0);
      return 1;
    }
  }
  return 0;
}


