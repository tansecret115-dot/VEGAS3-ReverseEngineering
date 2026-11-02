/* Module: pncrt.dll
   Function: FUN_780293b0
   Address: 780293b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 __cdecl FUN_780293b0(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) != 0) {
      param_1[3] = uVar2 | 0x20;
      return 0xffff;
    }
    param_1[3] = uVar2 | 1;
    if ((uVar2 & 0x10c) == 0) {
      FUN_7800f630(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar3 = _read(param_1[4],(void *)param_1[2],param_1[6]);
    param_1[1] = iVar3;
    if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
      if ((param_1[3] & 0x82U) == 0) {
        uVar2 = param_1[4];
        if (uVar2 == 0xffffffff) {
          puVar4 = &__badioinfo;
        }
        else {
          puVar4 = (undefined *)((&__pioinfo)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = iVar3 + -2;
      uVar1 = *(undefined2 *)*param_1;
      *param_1 = (int)((undefined2 *)*param_1 + 1);
      return uVar1;
    }
    param_1[1] = 0;
    param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
  }
  return 0xffff;
}


