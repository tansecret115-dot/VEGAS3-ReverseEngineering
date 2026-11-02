/* Module: vegas30k.dll
   Function: _SfDibPrepareCopy@52
   Address: 0109b700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibPrepareCopy_52
          (int *param_1,int *param_2,int *param_3,int *param_4,int param_5,RECT *param_6,int param_7
          ,undefined4 param_8,int param_9,RECT *param_10,int param_11,undefined4 param_12,
          int param_13)

{
  int iVar1;
  tagRECT local_50;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
                    /* 0x9b700  874  _SfDibPrepareCopy@52 */
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    if ((param_6 != (RECT *)0x0) && (param_10 != (RECT *)0x0)) {
      iVar1 = FUN_0109af20(&local_40,param_8,param_6);
      if (iVar1 == 0) {
        return &DAT_80070057;
      }
      iVar1 = FUN_0109af20(&local_10,param_12,param_10);
      if (iVar1 == 0) {
        return &DAT_80070057;
      }
      iVar1 = FUN_0109af90(&local_10,&local_40);
      if (iVar1 == 0) {
        return &DAT_80070057;
      }
      IntersectRect(&local_30,&local_40,param_6);
      IntersectRect(&local_50,&local_10,param_10);
      iVar1 = FUN_0109af60(&local_50);
      if (iVar1 == 0) {
        iVar1 = FUN_0109af60(&local_30);
        if (iVar1 == 0) {
          iVar1 = FUN_0109af90(&local_50,&local_30);
          if (iVar1 == 0) {
            OffsetRect(&local_50,local_40.left,local_40.top);
            IntersectRect(&local_20,&local_30,&local_50);
            local_50.top = local_20.top;
            local_50.left = local_20.left;
            local_50.right = local_20.right;
            local_50.bottom = local_20.bottom;
            OffsetRect(&local_50,-local_40.left,-local_40.top);
            iVar1 = FUN_0109af90(&local_50,&local_30);
            if (iVar1 == 0) {
              return &DAT_80070057;
            }
          }
          *param_1 = local_50.right - local_50.left;
          *param_2 = local_50.bottom - local_50.top;
          *param_3 = local_50.left * param_13 + param_9 + local_50.top * param_11;
          *param_4 = local_30.left * param_13 + param_5 + local_30.top * param_7;
        }
      }
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0x80004003;
}


