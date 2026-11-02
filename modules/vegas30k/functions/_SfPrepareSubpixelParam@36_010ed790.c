/* Module: vegas30k.dll
   Function: _SfPrepareSubpixelParam@36
   Address: 010ed790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfPrepareSubpixelParam_36
          (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5,
          undefined4 param_6,int *param_7,undefined4 param_8,LONG *param_9)

{
  LONG dx;
  LONG dy;
  int iVar1;
  undefined4 *puVar2;
  RECT local_54;
  RECT local_44;
  tagRECT local_34;
  RECT local_24;
  RECT local_14;
  
  puVar2 = param_1;
                    /* 0xed790  1163  _SfPrepareSubpixelParam@36 */
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_5 == (int *)0x0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = *param_3 << 0xe;
    local_24.bottom = param_7[1] << 0xe;
  }
  else {
    local_24.left = *param_5;
    local_24.top = param_5[1];
    local_24.right = param_5[2];
    local_24.bottom = param_5[3];
  }
  if (param_9 == (LONG *)0x0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = *param_3 << 0xe;
    local_14.bottom = param_7[1] << 0xe;
  }
  else {
    local_14.left = *param_9;
    local_14.top = param_9[1];
    local_14.right = param_9[2];
    local_14.bottom = param_9[3];
  }
  local_54.right = *param_7 << 0xe;
  local_54.bottom = param_7[1] << 0xe;
  local_54.left = 0;
  local_54.top = 0;
  IntersectRect((LPRECT)(param_1 + 0x14),&local_14,&local_54);
  local_14.left = ((LPRECT)(param_1 + 0x14))->left;
  local_14.top = param_1[0x15];
  local_14.right = param_1[0x16];
  local_14.bottom = param_1[0x17];
  if ((((0x3fff < local_14.right - local_14.left) && (0x3fff < local_14.bottom - local_14.top)) &&
      (0x3fff < local_24.right - local_24.left)) && (0x3fff < local_24.bottom - local_24.top)) {
    param_1[0x1a] =
         (int)(((longlong)(local_14.right - local_14.left) * 0x4000) /
              (longlong)(local_24.right - local_24.left));
    param_1[0x1b] =
         (int)(((longlong)(local_14.bottom - local_14.top) * 0x4000) /
              (longlong)(local_24.bottom - local_24.top));
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = *param_3 << 0xe;
    local_44.bottom = param_3[1] << 0xe;
    param_1[8] = local_24.left;
    param_1[9] = local_24.top;
    param_1[10] = local_24.right;
    param_1[0xb] = local_24.bottom;
    IntersectRect((LPRECT)(param_1 + 4),&local_24,&local_44);
    dy = local_14.top;
    dx = local_14.left;
    local_24.left = ((LPRECT)(param_1 + 4))->left;
    local_24.top = param_1[5];
    local_24.right = param_1[6];
    local_24.bottom = param_1[7];
    if ((0x3fff < local_24.right - local_24.left) && (0x3fff < local_24.bottom - local_24.top)) {
      OffsetRect(&local_14,-local_14.left,-local_14.top);
      local_14.top = (LONG)(((longlong)local_14.top * 0x4000) / (longlong)(int)param_1[0x1b]);
      local_14.bottom = (LONG)(((longlong)local_14.bottom * 0x4000) / (longlong)(int)param_1[0x1b]);
      local_14.left = (LONG)(((longlong)local_14.left * 0x4000) / (longlong)(int)param_1[0x1a]);
      local_14.right = (LONG)(((longlong)local_14.right * 0x4000) / (longlong)(int)param_1[0x1a]);
      OffsetRect(&local_14,param_1[8],param_1[9]);
      IntersectRect(&local_34,&local_14,&local_24);
      OffsetRect(&local_34,-param_1[8],-param_1[9]);
      local_34.top = (uint)((longlong)local_34.top * (longlong)(int)param_1[0x1b]) >> 0xe |
                     (int)((ulonglong)((longlong)local_34.top * (longlong)(int)param_1[0x1b]) >>
                          0x20) << 0x12;
      local_34.bottom =
           (uint)((longlong)local_34.bottom * (longlong)(int)param_1[0x1b]) >> 0xe |
           (int)((ulonglong)((longlong)local_34.bottom * (longlong)(int)param_1[0x1b]) >> 0x20) <<
           0x12;
      local_34.left =
           (uint)((longlong)local_34.left * (longlong)(int)param_1[0x1a]) >> 0xe |
           (int)((ulonglong)((longlong)local_34.left * (longlong)(int)param_1[0x1a]) >> 0x20) <<
           0x12;
      local_34.right =
           (uint)((longlong)local_34.right * (longlong)(int)param_1[0x1a]) >> 0xe |
           (int)((ulonglong)((longlong)local_34.right * (longlong)(int)param_1[0x1a]) >> 0x20) <<
           0x12;
      OffsetRect(&local_34,dx,dy);
      IntersectRect(&local_14,&local_34,(RECT *)(param_1 + 0x14));
      param_1[0x10] = local_14.left;
      param_1[0x11] = local_14.top;
      param_1[0x12] = local_14.right;
      param_1[0x13] = local_14.bottom;
      param_1[1] = param_2;
      param_1[2] = param_4;
      param_1[0xd] = param_6;
      param_1[0xe] = param_8;
      if ((int)(param_1[6] - param_1[4]) < 0x8000) {
        param_1[0x18] = 0;
      }
      else {
        param_1[0x18] =
             (int)(((longlong)((param_1[0x12] - param_1[0x10]) + -0x4000) * 0x4000) /
                  (longlong)((param_1[6] - param_1[4]) + -0x4000));
      }
      if ((int)(param_1[7] - param_1[5]) < 0x8000) {
        param_1[0x19] = 0;
        return 1;
      }
      param_1[0x19] =
           (int)(((longlong)((param_1[0x13] - param_1[0x11]) + -0x4000) * 0x4000) /
                (longlong)((param_1[7] - param_1[5]) + -0x4000));
      return 1;
    }
  }
  return 0;
}


