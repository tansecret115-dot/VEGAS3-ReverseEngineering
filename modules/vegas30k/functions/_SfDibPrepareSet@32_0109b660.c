/* Module: vegas30k.dll
   Function: _SfDibPrepareSet@32
   Address: 0109b660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibPrepareSet_32(int *param_1,int *param_2,int *param_3,int param_4,RECT *param_5,int param_6,
                   undefined4 param_7,int param_8)

{
  int iVar1;
  tagRECT local_20;
  RECT local_10;
  
                    /* 0x9b660  876  _SfDibPrepareSet@32 */
  if (param_5 == (RECT *)0x0) {
    return (undefined1 *)0x80004003;
  }
  iVar1 = FUN_0109af20(&local_10,param_7,param_5);
  if (iVar1 == 0) {
    return &DAT_80070057;
  }
  IntersectRect(&local_20,&local_10,param_5);
  iVar1 = FUN_0109af60(&local_20);
  if (iVar1 == 0) {
    *param_1 = local_20.right - local_20.left;
    *param_2 = local_20.bottom - local_20.top;
    *param_3 = local_20.left * param_8 + param_4 + local_20.top * param_6;
  }
  return (undefined1 *)0x0;
}


