/* Module: vegas30.exe
   Function: FUN_0044f550
   Address: 0044f550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f550(HDC param_1,LPRECT param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2->right - param_2->left;
  iVar2 = param_2->bottom - param_2->top;
  if ((*param_4 != 0) && (((*param_5 == 0 || (param_5[2] != iVar1)) || (param_5[3] != iVar2)))) {
    FUN_0044f280(param_5,iVar1,iVar2,param_4,*param_3,0);
  }
  if (*param_5 != 0) {
    FUN_0044f090(param_1,param_2,param_5,0,0);
    return;
  }
  DrawEdge(param_1,param_2,2,0x80f);
  return;
}


