/* Module: vidcap30.exe
   Function: FUN_00510de0
   Address: 00510de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00510de0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x8c) != iVar1) {
    iVar3 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x7c);
    if (0 < iVar3) {
      iVar2 = iVar3 - (int)(((longlong)(param_2[1] - iVar1) * (longlong)iVar3) /
                           (longlong)(*(int *)(param_1 + 0x8c) - iVar1));
    }
  }
  param_3[1] = iVar2;
  iVar1 = *(int *)(param_1 + 0x90);
  if ((*(int *)(param_1 + 0x94) != iVar1) &&
     (iVar2 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78), 0 < iVar2)) {
    *param_3 = (int)(((longlong)(*param_2 - iVar1) * (longlong)iVar2) /
                    (longlong)(*(int *)(param_1 + 0x94) - iVar1));
    return 1;
  }
  *param_3 = 0;
  return 1;
}


