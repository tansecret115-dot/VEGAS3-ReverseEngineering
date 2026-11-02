/* Module: espr3260.dll
   Function: FUN_632f12a0
   Address: 632f12a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_632f12a0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x4010) = 0;
  *(undefined4 *)(param_1 + 0x4014) = 0;
  *(undefined4 *)(param_1 + 0x4018) = 0;
  *(undefined4 *)(param_1 + 0x4020) = 0;
  *(undefined4 *)(param_1 + 0x4024) = 0x28;
  *(undefined4 *)(param_1 + 0x4028) = 0;
  *(undefined4 *)(param_1 + 0x402c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x868);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pfVar3 = (float *)(param_1 + 0x8a8);
  do {
    iVar1 = iVar1 + 1;
    *pfVar3 = (float)iVar1 * _DAT_632fa070;
    pfVar3 = pfVar3 + 1;
  } while (iVar1 < 0x10);
  *(undefined4 *)(param_1 + 0x8ec) = 0xc1600000;
  *(undefined4 *)(param_1 + 0x8f0) = 0xc1600000;
  return param_1;
}


