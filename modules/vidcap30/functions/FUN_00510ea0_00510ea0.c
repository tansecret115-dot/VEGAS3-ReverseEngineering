/* Module: vidcap30.exe
   Function: FUN_00510ea0
   Address: 00510ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00510ea0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x7c);
  if (0 < iVar1) {
    iVar2 = (int)(((longlong)(*(int *)(param_1 + 0x84) - param_2[1]) *
                  (longlong)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88))) / (longlong)iVar1
                 );
  }
  iVar1 = 0;
  param_3[1] = *(int *)(param_1 + 0x88) + iVar2;
  iVar2 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78);
  if (0 < iVar2) {
    iVar1 = (int)(((longlong)(*param_2 - *(int *)(param_1 + 0x78)) *
                  (longlong)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90))) / (longlong)iVar2
                 );
  }
  *param_3 = *(int *)(param_1 + 0x90) + iVar1;
  return 1;
}


