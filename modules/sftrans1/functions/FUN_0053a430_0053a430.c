/* Module: sftrans1.dll
   Function: FUN_0053a430
   Address: 0053a430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053a430(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = FUN_0053a3a0();
  if (sVar1 == 0) {
    puVar3 = param_1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x6376534b;
    *(undefined2 *)(param_1 + 2) = 0x4203;
    *(undefined2 *)((int)param_1 + 10) = 0x40ff;
    FUN_0053a300(param_1);
  }
  return;
}


