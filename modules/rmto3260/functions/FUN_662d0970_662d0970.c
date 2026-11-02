/* Module: rmto3260.dll
   Function: FUN_662d0970
   Address: 662d0970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662d0970(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_2 == (undefined4 *)0x0) || ((short)param_3 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (param_3 & 0xffff) + 1;
  }
  puVar2 = operator_new(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (uVar1 = (param_3 & 0xffff) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(undefined1 *)((int)puVar2 + (param_3 & 0xffff)) = 0;
      *param_1 = puVar2;
      return 0;
    }
    *(undefined1 *)puVar2 = 0;
    *param_1 = puVar2;
    return 0;
  }
  *param_1 = 0;
  return 0x8007000e;
}


