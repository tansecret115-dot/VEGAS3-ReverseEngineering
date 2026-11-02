/* Module: vidcap30.exe
   Function: _TrackbarInst_SetThumbBitmap@12
   Address: 004b3a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _TrackbarInst_SetThumbBitmap_12(undefined4 *param_1,HANDLE param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0xb3a80  736  _TrackbarInst_SetThumbBitmap@12 */
  uVar1 = param_1[0x21];
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  if (param_2 != (HANDLE)0x0) {
    GetObjectA(param_2,0x18,local_18);
    *(short *)(param_1 + 0x23) = (short)local_14;
    *(short *)((int)param_1 + 0x8e) = (short)local_10;
    if ((param_1[3] & 8) == 0) {
      param_1[0x1e] = local_14;
    }
    else {
      param_1[0x1e] = local_10;
    }
    *param_1 = param_1[1];
    param_1[3] = (param_1[2] & 1) << 8 | param_1[3] & 0xffffbeff;
    return uVar1;
  }
  if ((param_1[3] & 0x4000) != 0) {
    param_1[0x1e] = 0xc;
    return uVar1;
  }
  if (((byte)*param_1 & 0x30) != 0x10) {
    param_1[0x1e] = 10;
    return uVar1;
  }
  param_1[0x1e] = 8;
  return uVar1;
}


