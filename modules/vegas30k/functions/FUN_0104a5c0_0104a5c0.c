/* Module: vegas30k.dll
   Function: FUN_0104a5c0
   Address: 0104a5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0104a5c0(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3;
  for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  if (param_2 == 0x2711) {
    uVar1 = _SfLang_GetLCID_4(DAT_0120e5c8);
    if (3 < param_4) {
      *param_3 = uVar1;
      return 4;
    }
  }
  else if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = _SfGetMetricBinary_16(*(int *)(param_1 + 0x34),param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}


