/* Module: rnco3260.dll
   Function: FUN_636fc550
   Address: 636fc550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fc550(ushort *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
    param_1 = param_1 + 1;
  }
  if (3 < (int)param_2) {
    uVar4 = param_2 >> 2;
    puVar2 = param_1;
    puVar3 = param_3;
    do {
      param_1 = puVar2 + 4;
      param_3 = puVar3 + 4;
      param_2 = param_2 - 4;
      *puVar2 = (*puVar3 & 0x7fe0) << 1 | *puVar3 & 0x1f;
      puVar2[1] = (puVar3[1] & 0x7fe0) << 1 | puVar3[1] & 0x1f;
      puVar2[2] = (puVar3[2] & 0x7fe0) << 1 | puVar3[2] & 0x1f;
      uVar4 = uVar4 - 1;
      puVar2[3] = (puVar3[3] & 0x7fe0) << 1 | puVar3[3] & 0x1f;
      puVar2 = param_1;
      puVar3 = param_3;
    } while (uVar4 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
    param_1 = param_1 + 1;
  }
  return;
}


