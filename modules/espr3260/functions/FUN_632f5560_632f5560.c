/* Module: espr3260.dll
   Function: FUN_632f5560
   Address: 632f5560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_632f5560(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  *(int *)(param_1 + 0x1380) = param_1 + 0x10f8;
  *(int *)(param_1 + 0x137c) = param_1 + 0xfb8;
  *(int *)(param_1 + 0x1778) = param_1 + 0x14f8;
  *(int *)(param_1 + 0x1378) = param_1 + 0x938;
  *(int *)(param_1 + 0x718) = param_1 + 0x498;
  *(int *)(param_1 + 0x18c0) = param_1 + 0x1780;
  FUN_632f9340((undefined4 *)(param_1 + 0x8f8),0xb0);
  FUN_632f9340((undefined4 *)(param_1 + 8),0x1c4);
  FUN_632f9340((undefined4 *)(param_1 + 0x1384),0xfd);
  FUN_632f9340((undefined4 *)(param_1 + 0x75c),0x10);
  FUN_632f9340((undefined4 *)(param_1 + 0x1944),0x10);
  FUN_632f9340((undefined4 *)(param_1 + 0x1904),0x10);
  FUN_632f9340((undefined4 *)(param_1 + 0x1984),0x10);
  FUN_632f9340((undefined4 *)(param_1 + 0x19c8),0x10);
  FUN_632f9340((undefined4 *)(param_1 + 3000),0x1f0);
  FUN_632f9340(*(undefined4 **)(param_1 + 0x18c0),0x50);
  *(undefined4 *)(param_1 + 0x177c) = 0x3f800000;
  FUN_632f6b90(60.0,16000.0,0x3f8000fc,0x10);
  iVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x71c);
  do {
    iVar1 = iVar1 + 1;
    fVar4 = (float10)fcos((float10)iVar1 * (float10)_DAT_632fa358);
    *pfVar2 = (float)fVar4;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 0xf);
  *(undefined4 *)(param_1 + 0x758) = 0;
  FUN_632f6650((float *)(param_1 + 0x1a08),400,0x50);
  puVar3 = (undefined4 *)(param_1 + 0x79c);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x79c) = 0x3f800000;
  puVar3 = (undefined4 *)(param_1 + 0x7e0);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x7e0) = 0x3f800000;
  puVar3 = (undefined4 *)(param_1 + 0x824);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x824) = 0x3f800000;
  return;
}


