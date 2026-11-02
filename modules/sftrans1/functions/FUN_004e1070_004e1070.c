/* Module: sftrans1.dll
   Function: FUN_004e1070
   Address: 004e1070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e1070(int param_1,LONG *param_2,LONG *param_3,int param_4,int *param_5,int *param_6,
                 LPRECT param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  
  SetRect(&local_30,0,0,*(int *)(param_4 + 4),*(int *)(param_4 + 8));
  SetRect(&local_20,0,0,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  if (param_6 == (int *)0x0) {
    *param_5 = local_30.left;
    param_5[1] = local_30.top;
    param_5[2] = local_30.right;
    iVar4 = local_30.bottom;
  }
  else {
    *param_5 = *param_6;
    param_5[1] = param_6[1];
    param_5[2] = param_6[2];
    iVar4 = param_6[3];
  }
  param_5[3] = iVar4;
  if (param_3 == (LONG *)0x0) {
    *param_2 = local_20.left;
    param_2[1] = local_20.top;
    param_2[2] = local_20.right;
    LVar5 = local_20.bottom;
  }
  else {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    LVar5 = param_3[3];
  }
  param_2[3] = LVar5;
  local_10 = *param_5;
  local_c = param_5[1];
  iVar4 = param_5[2];
  iVar1 = param_5[3];
  FUN_004e0ed0(&local_30,param_5,param_2);
  FUN_004e0ed0(&local_20,param_2,param_5);
  if (param_7 != (LPRECT)0x0) {
    iVar2 = param_5[1];
    param_7->left = *param_5 - local_10;
    iVar3 = param_5[3];
    param_7->top = iVar2 - local_c;
    param_7->right = iVar4 - param_5[2];
    param_7->bottom = iVar1 - iVar3;
  }
  if (param_6 == (int *)0x0) {
    *param_5 = local_30.left;
    param_5[1] = local_30.top;
    param_5[2] = local_30.right;
    param_5[3] = local_30.bottom;
    if (param_7 != (LPRECT)0x0) {
      SetRect(param_7,0,0,0,0);
    }
  }
  if (param_3 == (LONG *)0x0) {
    *param_2 = local_20.left;
    param_2[1] = local_20.top;
    param_2[2] = local_20.right;
    param_2[3] = local_20.bottom;
  }
  return;
}


