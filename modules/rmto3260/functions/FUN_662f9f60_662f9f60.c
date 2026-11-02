/* Module: rmto3260.dll
   Function: FUN_662f9f60
   Address: 662f9f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_662f9f60(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((short)param_2 == 0) {
    return (undefined4 *)0x0;
  }
  uVar3 = param_2 & 0xffff;
  puVar1 = operator_new(uVar3 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined1 *)((int)puVar1 + uVar3) = 0;
  }
  return puVar1;
}


