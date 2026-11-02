/* Module: sfcdi.dll
   Function: FUN_5bf41c50
   Address: 5bf41c50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf41c50(undefined4 *param_1,uint param_2,LPCSTR param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar1 = FUN_5bf3d750(param_1,param_2 >> 1,param_3);
  FUN_5bf3d970((undefined2 *)param_1,param_2 >> 1);
  return uVar1;
}


