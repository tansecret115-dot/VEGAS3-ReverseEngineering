/* Module: sftrans1.dll
   Function: FUN_0048a670
   Address: 0048a670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048a670(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_8 [2];
  
  if ((param_2 < 0) || (**(int **)(param_1 + 0xa4) <= param_2)) {
    param_2 = *(int *)(param_1 + 0x100);
  }
  bVar3 = param_3 == (int *)0x0;
  if (bVar3) {
    param_3 = *(int **)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + param_2 * 4);
  }
  iVar1 = *param_3;
  iVar2 = 1;
  if ((((iVar1 < 0) || (**(int **)(param_1 + 0xac) + 3 <= iVar1)) &&
      (bVar4 = iVar1 == -1, iVar1 = iVar2, bVar4)) &&
     ((-1 < param_2 + -1 && (param_2 + -1 < **(int **)(param_1 + 0xa4))))) {
    iVar1 = **(int **)((*(int **)(param_1 + 0xa4))[2] + -4 + param_2 * 4);
  }
  if (bVar3) {
    iVar1 = FUN_00486c30(param_2,1,iVar1,0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_00486ba0(param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  local_8[1] = 0;
  local_8[0] = param_2;
  FUN_0048c640(local_8,0);
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  return 0;
}


