/* Module: sfs4rw.dll
   Function: FUN_0041b2a0
   Address: 0041b2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0041b2a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_0041b210();
  if ((short)uVar1 == 0) {
    puVar3 = param_1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x6376534b;
    *(undefined2 *)(param_1 + 2) = 0x4203;
    *(undefined2 *)((int)param_1 + 10) = 0x40ff;
    FUN_0041b170(param_1);
  }
  return;
}


