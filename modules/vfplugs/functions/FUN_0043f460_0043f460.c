/* Module: vfplugs.dll
   Function: FUN_0043f460
   Address: 0043f460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f460(int param_1,LPRECT param_2,LONG *param_3,int param_4,LPRECT param_5,LONG *param_6,
                 LPRECT param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  tagRECT local_30;
  tagRECT local_20;
  LONG local_10;
  LONG local_c;
  
  SetRect(&local_30,0,0,*(int *)(param_4 + 4),*(int *)(param_4 + 8));
  SetRect(&local_20,0,0,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  if (param_6 == (LONG *)0x0) {
    param_5->left = local_30.left;
    param_5->top = local_30.top;
    param_5->right = local_30.right;
    LVar5 = local_30.bottom;
  }
  else {
    param_5->left = *param_6;
    param_5->top = param_6[1];
    param_5->right = param_6[2];
    LVar5 = param_6[3];
  }
  param_5->bottom = LVar5;
  if (param_3 == (LONG *)0x0) {
    param_2->left = local_20.left;
    param_2->top = local_20.top;
    param_2->right = local_20.right;
    LVar5 = local_20.bottom;
  }
  else {
    param_2->left = *param_3;
    param_2->top = param_3[1];
    param_2->right = param_3[2];
    LVar5 = param_3[3];
  }
  param_2->bottom = LVar5;
  local_10 = param_5->left;
  local_c = param_5->top;
  iVar1 = param_5->right;
  iVar2 = param_5->bottom;
  FUN_0043f2c0(&local_30.left,param_5,param_2);
  FUN_0043f2c0(&local_20.left,param_2,param_5);
  if (param_7 != (LPRECT)0x0) {
    iVar3 = param_5->top;
    param_7->left = param_5->left - local_10;
    iVar4 = param_5->bottom;
    param_7->top = iVar3 - local_c;
    param_7->right = iVar1 - param_5->right;
    param_7->bottom = iVar2 - iVar4;
  }
  if (param_6 == (LONG *)0x0) {
    param_5->left = local_30.left;
    param_5->top = local_30.top;
    param_5->right = local_30.right;
    param_5->bottom = local_30.bottom;
    if (param_7 != (LPRECT)0x0) {
      SetRect(param_7,0,0,0,0);
    }
  }
  if (param_3 == (LONG *)0x0) {
    param_2->left = local_20.left;
    param_2->top = local_20.top;
    param_2->right = local_20.right;
    param_2->bottom = local_20.bottom;
  }
  return;
}


