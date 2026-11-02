/* Module: rnco3260.dll
   Function: FUN_636f9630
   Address: 636f9630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9630(undefined1 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    param_1[2] = (char)uVar1;
    *param_1 = (char)((uint)uVar1 >> 0x10);
    param_1[1] = (char)((uint)uVar1 >> 8);
    param_1 = param_1 + 3;
  }
  if (3 < (int)param_2) {
    uVar3 = param_2 >> 2;
    puVar2 = param_3;
    do {
      uVar1 = *puVar2;
      param_3 = puVar2 + 4;
      param_1[2] = (char)uVar1;
      *param_1 = (char)((uint)uVar1 >> 0x10);
      param_1[1] = (char)((uint)uVar1 >> 8);
      uVar1 = puVar2[1];
      param_1[5] = (char)uVar1;
      param_1[3] = (char)((uint)uVar1 >> 0x10);
      param_1[4] = (char)((uint)uVar1 >> 8);
      uVar1 = puVar2[2];
      param_1[8] = (char)uVar1;
      param_1[6] = (char)((uint)uVar1 >> 0x10);
      param_1[7] = (char)((uint)uVar1 >> 8);
      uVar1 = puVar2[3];
      param_1[0xb] = (char)uVar1;
      param_1[9] = (char)((uint)uVar1 >> 0x10);
      param_1[10] = (char)((uint)uVar1 >> 8);
      param_1 = param_1 + 0xc;
      param_2 = param_2 - 4;
      uVar3 = uVar3 - 1;
      puVar2 = param_3;
    } while (uVar3 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    param_1[2] = (char)uVar1;
    *param_1 = (char)((uint)uVar1 >> 0x10);
    param_1[1] = (char)((uint)uVar1 >> 8);
    param_1 = param_1 + 3;
  }
  return;
}


