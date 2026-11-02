/* Module: vidpcore.dll
   Function: FUN_5debbf10
   Address: 5debbf10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5debbf10(int *param_1,int *param_2,int *param_3,int param_4,RECT *param_5,int param_6,
            undefined4 param_7,int param_8)

{
  int iVar1;
  tagRECT local_20;
  RECT local_10;
  
  if (param_5 == (RECT *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5debb7d0(&local_10,param_7,param_5);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  IntersectRect(&local_20,&local_10,param_5);
  iVar1 = FUN_5debb810(&local_20);
  if (iVar1 == 0) {
    *param_1 = local_20.right - local_20.left;
    *param_2 = local_20.bottom - local_20.top;
    *param_3 = local_20.left * param_8 + param_4 + local_20.top * param_6;
  }
  return 0;
}


