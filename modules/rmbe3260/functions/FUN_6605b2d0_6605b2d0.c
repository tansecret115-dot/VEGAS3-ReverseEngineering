/* Module: rmbe3260.dll
   Function: FUN_6605b2d0
   Address: 6605b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6605b2d0(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((param_1[5] == 0) && (param_1[6] == 0)) {
    puVar4 = (undefined4 *)param_1[4];
    puVar1 = operator_new(*param_1);
    param_1[4] = (uint)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = *param_1;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      param_1[5] = 1;
      return 0;
    }
    return 0x8007000e;
  }
  return 0;
}


