/* Module: sfcdi.dll
   Function: FUN_5bf2bb30
   Address: 5bf2bb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bb30(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = FUN_5bf2bb00(param_1);
  if (uVar2 <= param_2) {
    piVar1 = (int *)(param_1 + 0x40);
    *piVar1 = param_2 + 1;
    if (uVar2 == 0) {
      FUN_5bf2bdc0(piVar1);
      puVar3 = (undefined4 *)FUN_5bf2bb10(param_1,param_2);
      *puVar3 = param_3;
      return 0;
    }
    FUN_5bf2be10(piVar1);
  }
  puVar3 = (undefined4 *)FUN_5bf2bb10(param_1,param_2);
  *puVar3 = param_3;
  return 0;
}


