/* Module: wmfplug2.dll
   Function: FUN_00432e20
   Address: 00432e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00432e20(undefined1 *param_1,float *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * 255.0);
      *param_1 = (char)iVar1;
      if (iVar1 < 0) {
        *param_1 = 0;
      }
      else if (0xfe < iVar1) {
        *param_1 = 0xff;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar3 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * 255.0);
      iVar2 = (int)ROUND(param_2[1] * 255.0);
      *param_1 = (char)iVar1;
      if (iVar1 < 0) {
        *param_1 = 0;
      }
      else if (0xfe < iVar1) {
        *param_1 = 0xff;
      }
      param_1[1] = (char)iVar2;
      if (iVar2 < 0) {
        param_1[1] = 0;
      }
      else if (0xfe < iVar2) {
        param_1[1] = 0xff;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


