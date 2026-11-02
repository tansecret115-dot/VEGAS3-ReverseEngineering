/* Module: rnco3260.dll
   Function: FUN_636f6b10
   Address: 636f6b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6b10(int *param_1,uint param_2,ushort *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  ushort *puVar4;
  
  piVar2 = param_1;
  for (; ((((uint)piVar2 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar3 = (uint)*param_3;
    param_3 = param_3 + 1;
    *piVar2 = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
    piVar2 = piVar2 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (int *)(param_2 >> 2);
    piVar1 = piVar2;
    puVar4 = param_3;
    do {
      piVar2 = piVar1 + 4;
      uVar3 = (uint)*puVar4;
      param_3 = puVar4 + 4;
      *piVar1 = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
      uVar3 = (uint)puVar4[1];
      piVar1[1] = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
      uVar3 = (uint)puVar4[2];
      piVar1[2] = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
      uVar3 = (uint)puVar4[3];
      piVar1[3] = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
      param_2 = param_2 - 4;
      param_1 = (int *)((int)param_1 + -1);
      piVar1 = piVar2;
      puVar4 = param_3;
    } while (param_1 != (int *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar3 = (uint)*param_3;
    param_3 = param_3 + 1;
    *piVar2 = (((uVar3 & 0xf800) << 3 | uVar3 & 0x7e0) << 2 | uVar3 & 0x1f) << 3;
    piVar2 = piVar2 + 1;
  }
  return;
}


