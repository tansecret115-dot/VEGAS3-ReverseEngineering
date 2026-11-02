/* Module: vidcap30.exe
   Function: FUN_00582cf0
   Address: 00582cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582cf0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    puVar2 = (undefined1 *)((int)param_2 + param_3);
    puVar3 = (undefined1 *)((int)param_1 + param_3);
    while( true ) {
      puVar3 = puVar3 + -1;
      puVar2 = puVar2 + -1;
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      *puVar3 = *puVar2;
    }
    return;
  }
  uVar1 = param_3 & 3;
  for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  if (uVar1 != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}


