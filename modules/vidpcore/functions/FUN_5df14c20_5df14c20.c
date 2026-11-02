/* Module: vidpcore.dll
   Function: FUN_5df14c20
   Address: 5df14c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df14c20(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = FUN_5df14b90();
  if (sVar1 == 0) {
    puVar3 = param_1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x6376534b;
    *(undefined2 *)(param_1 + 2) = 0x4203;
    *(undefined2 *)((int)param_1 + 10) = 0x40ff;
    FUN_5df14af0(param_1);
  }
  return;
}


