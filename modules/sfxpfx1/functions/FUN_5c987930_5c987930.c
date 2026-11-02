/* Module: sfxpfx1.dll
   Function: FUN_5c987930
   Address: 5c987930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5c987930(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_5c9878a0();
  if ((short)uVar1 == 0) {
    puVar3 = param_1;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = 0x6376534b;
    *(undefined2 *)(param_1 + 2) = 0x4203;
    *(undefined2 *)((int)param_1 + 10) = 0x40ff;
    FUN_5c987800(param_1);
  }
  return;
}


