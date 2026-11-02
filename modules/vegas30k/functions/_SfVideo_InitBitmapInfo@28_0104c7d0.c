/* Module: vegas30k.dll
   Function: _SfVideo_InitBitmapInfo@28
   Address: 0104c7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfVideo_InitBitmapInfo_28
          (undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,uint param_6,
          int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x4c7d0  1279  _SfVideo_InitBitmapInfo@28 */
  uVar1 = _SfPixelTypeToBitAttribs_20(param_2,&param_2,0,0,&local_c);
  if ((uVar1 == 0) || (param_1 == (undefined4 *)0x0)) {
    return &DAT_80070057;
  }
  iVar2 = (uVar1 * param_3 + 0x1f >> 3 & 0x1ffffffc) * param_4;
  if ((int)param_6 < 0) {
    param_6 = 0;
  }
  if (param_2 != 3) {
    if (((param_5 == (undefined4 *)0x0) && (param_6 == 0)) && (uVar1 < 9)) {
      param_6 = (1 << ((byte)uVar1 & 0x1f)) - 1;
    }
  }
  else {
    param_5 = (undefined4 *)0x0;
    param_6 = 0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = iVar2;
  }
  param_1[5] = iVar2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = 0x28;
  *(undefined2 *)(param_1 + 3) = 1;
  *(short *)((int)param_1 + 0xe) = (short)uVar1;
  param_1[4] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_6;
  param_1[9] = 0;
  if (param_2 == 3) {
    param_1[10] = local_c;
    param_1[0xb] = local_8;
    param_1[0xc] = local_4;
    return (undefined1 *)0x0;
  }
  if ((param_5 != (undefined4 *)0x0) && ((param_6 & 0x3fffffff) != 0)) {
    puVar3 = param_1 + 10;
    for (param_6 = param_6 & 0x3fffffff; param_6 != 0; param_6 = param_6 - 1) {
      *puVar3 = *param_5;
      param_5 = param_5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_5;
      param_5 = (undefined4 *)((int)param_5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return (undefined1 *)0x0;
}


