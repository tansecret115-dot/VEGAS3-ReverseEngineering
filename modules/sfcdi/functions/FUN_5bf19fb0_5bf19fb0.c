/* Module: sfcdi.dll
   Function: FUN_5bf19fb0
   Address: 5bf19fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf19fb0(short *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = FUN_5bf1a000(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    return 0;
  }
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (short *)((int)param_1 + 1);
  }
  return uVar1;
}


