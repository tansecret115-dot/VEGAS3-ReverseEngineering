/* Module: vfplugs.dll
   Function: FUN_00430f00
   Address: 00430f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00430f00(int *param_1,int *param_2,int *param_3,int param_4,RECT *param_5,int param_6,
            undefined4 *param_7,int param_8)

{
  int iVar1;
  tagRECT local_20;
  RECT local_10;
  
  if (param_5 == (RECT *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_004307c0(&local_10.left,param_7,&param_5->left);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  IntersectRect(&local_20,&local_10,param_5);
  iVar1 = FUN_00430800(&local_20.left);
  if (iVar1 == 0) {
    *param_1 = local_20.right - local_20.left;
    *param_2 = local_20.bottom - local_20.top;
    *param_3 = local_20.left * param_8 + param_4 + local_20.top * param_6;
  }
  return 0;
}


