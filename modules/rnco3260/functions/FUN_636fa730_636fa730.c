/* Module: rnco3260.dll
   Function: FUN_636fa730
   Address: 636fa730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fa730(char *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  uint uVar4;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = (char)uVar1 << 3;
    param_1[1] = (byte)(uVar1 >> 2) & 0xf8;
    param_1[2] = (byte)(uVar1 >> 7) & 0xf8;
    param_1 = param_1 + 3;
  }
  if (3 < (int)param_2) {
    uVar4 = param_2 >> 2;
    pcVar2 = param_1;
    puVar3 = param_3;
    do {
      param_1 = pcVar2 + 0xc;
      uVar1 = *puVar3;
      param_3 = puVar3 + 4;
      param_2 = param_2 - 4;
      *pcVar2 = (char)uVar1 << 3;
      pcVar2[2] = (byte)(uVar1 >> 7) & 0xf8;
      pcVar2[1] = (byte)(uVar1 >> 2) & 0xf8;
      uVar1 = puVar3[1];
      pcVar2[3] = (char)uVar1 << 3;
      pcVar2[5] = (byte)(uVar1 >> 7) & 0xf8;
      pcVar2[4] = (byte)(uVar1 >> 2) & 0xf8;
      uVar1 = puVar3[2];
      pcVar2[6] = (char)uVar1 << 3;
      pcVar2[8] = (byte)(uVar1 >> 7) & 0xf8;
      pcVar2[7] = (byte)(uVar1 >> 2) & 0xf8;
      uVar1 = puVar3[3];
      pcVar2[9] = (char)uVar1 << 3;
      pcVar2[10] = (byte)(uVar1 >> 2) & 0xf8;
      pcVar2[0xb] = (byte)(uVar1 >> 7) & 0xf8;
      uVar4 = uVar4 - 1;
      pcVar2 = param_1;
      puVar3 = param_3;
    } while (uVar4 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *param_1 = (char)uVar1 << 3;
    param_1[1] = (byte)(uVar1 >> 2) & 0xf8;
    param_1[2] = (byte)(uVar1 >> 7) & 0xf8;
    param_1 = param_1 + 3;
  }
  return;
}


