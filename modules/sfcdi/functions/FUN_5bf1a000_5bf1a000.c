/* Module: sfcdi.dll
   Function: FUN_5bf1a000
   Address: 5bf1a000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf1a000(short *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 2;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      uVar1 = (int)*param_1 >> 0x1f;
      if (((int)(((int)*param_1 ^ uVar1) - uVar1) < 3) &&
         (uVar1 = (int)param_1[1] >> 0x1f, (int)(((int)param_1[1] ^ uVar1) - uVar1) < 3)) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return (param_2 * 0x3fffffff + uVar2) * 4;
        }
      }
      else {
        param_2 = 0;
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 2;
    } while (uVar2 < uVar3);
  }
  return -1;
}


