/* Module: vegas30.exe
   Function: FUN_0044f450
   Address: 0044f450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f450(HDC param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tagRECT local_10;
  
  iVar1 = *param_3;
  if (*param_4 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = param_4[2];
  }
  iVar2 = *param_5;
  iVar5 = ((param_2[2] - *param_2) - iVar3) + iVar1;
  if (iVar2 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = *(int *)(iVar2 + 8);
  }
  local_10.left = (iVar3 / 2 - iVar1 / 2) + *param_2;
  local_10.right = local_10.left + iVar5;
  local_10.top = (param_2[3] + 1 + param_2[1]) / 2 - (iVar4 + 1) / 2;
  local_10.bottom = local_10.top + iVar4;
  if ((iVar2 != 0) && (((*param_6 == 0 || (param_6[2] != iVar5)) || (param_6[3] != iVar4)))) {
    FUN_0044f280(param_6,iVar5,iVar4,param_5,iVar1,0);
  }
  if (*param_6 != 0) {
    FUN_0044f090(param_1,&local_10,param_6,0,0);
    return;
  }
  DrawEdge(param_1,&local_10,2,0x80f);
  return;
}


