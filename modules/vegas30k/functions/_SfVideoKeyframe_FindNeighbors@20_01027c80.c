/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_FindNeighbors@20
   Address: 01027c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfVideoKeyframe_FindNeighbors_20(int param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x27c80  1257  _SfVideoKeyframe_FindNeighbors@20 */
  if (*(int **)(param_1 + 0x60) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x60);
  }
  iVar4 = 0;
  *param_3 = -1;
  if (0 < iVar5) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 8);
    iVar2 = iVar4;
    while( true ) {
      iVar4 = iVar2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 4) * iVar4;
      iVar2 = *(int *)(iVar3 + 4 + iVar1);
      if ((param_5 < iVar2) || ((param_5 <= iVar2 && (param_4 < *(uint *)(iVar3 + iVar1))))) break;
      iVar2 = iVar4 + 1;
      if (iVar5 <= iVar4 + 1) {
        *param_2 = iVar4;
        return 0;
      }
    }
    *param_3 = iVar4;
  }
  *param_2 = iVar4 + -1;
  return 0;
}


