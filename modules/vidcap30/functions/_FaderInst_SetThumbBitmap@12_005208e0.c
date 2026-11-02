/* Module: vidcap30.exe
   Function: _FaderInst_SetThumbBitmap@12
   Address: 005208e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _FaderInst_SetThumbBitmap_12(undefined4 *param_1,HANDLE param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x1208e0  165  _FaderInst_SetThumbBitmap@12 */
  uVar1 = param_1[0x45];
  param_1[0x45] = param_2;
  param_1[0x46] = param_3;
  if (param_2 != (HANDLE)0x0) {
    GetObjectA(param_2,0x18,local_18);
    if ((param_1[3] & 8) == 0) {
      param_1[0x20] = local_14;
    }
    else {
      param_1[0x20] = local_10;
    }
    *param_1 = param_1[1];
    param_1[3] = (param_1[2] & 1) << 5 | param_1[3] & 0xfffff7df;
    return uVar1;
  }
  if (((byte)*param_1 & 0x30) != 0x10) {
    param_1[0x20] = 0x14;
    return uVar1;
  }
  param_1[0x20] = 10;
  return uVar1;
}


