/* Module: vfplugs.dll
   Function: FUN_004311d0
   Address: 004311d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004311d0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,
            RECT *param_7,int param_8,undefined4 *param_9,int param_10,RECT *param_11,int param_12,
            undefined4 *param_13,int param_14)

{
  int iVar1;
  tagRECT local_50;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  if ((((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) && (param_4 != (int *)0x0)) &&
     (param_1 != (int *)0x0)) {
    *param_4 = 0;
    *param_2 = 0;
    *param_3 = 0;
    *param_5 = 0;
    if ((param_7 != (RECT *)0x0) && (param_11 != (RECT *)0x0)) {
      iVar1 = FUN_004307c0(&local_40.left,param_9,&param_7->left);
      if (iVar1 == 0) {
        return 0x80070057;
      }
      iVar1 = FUN_004307c0(&local_10.left,param_13,&param_11->left);
      if (iVar1 == 0) {
        return 0x80070057;
      }
      iVar1 = FUN_00430830(&local_10.left,&local_40.left);
      if (iVar1 == 0) {
        return 0x80070057;
      }
      IntersectRect(&local_30,&local_40,param_7);
      IntersectRect(&local_50,&local_10,param_11);
      iVar1 = FUN_00430800(&local_50.left);
      if (iVar1 == 0) {
        iVar1 = FUN_00430800(&local_30.left);
        if (iVar1 == 0) {
          iVar1 = FUN_00430830(&local_50.left,&local_30.left);
          if (iVar1 == 0) {
            OffsetRect(&local_50,local_40.left,local_40.top);
            IntersectRect(&local_20,&local_30,&local_50);
            local_50.top = local_20.top;
            local_50.left = local_20.left;
            local_50.right = local_20.right;
            local_50.bottom = local_20.bottom;
            OffsetRect(&local_50,-local_40.left,-local_40.top);
            iVar1 = FUN_00430830(&local_50.left,&local_30.left);
            if (iVar1 == 0) {
              return 0x80070057;
            }
          }
          *param_1 = local_50.left;
          *param_2 = local_50.right - local_50.left;
          param_1[1] = local_50.top;
          *param_3 = local_50.bottom - local_50.top;
          param_1[2] = local_50.right;
          *param_4 = local_50.left * param_14 + param_10 + local_50.top * param_12;
          param_1[3] = local_50.bottom;
          *param_5 = local_30.left * param_14 + param_6 + local_30.top * param_8;
        }
      }
      return 0;
    }
  }
  return 0x80004003;
}


