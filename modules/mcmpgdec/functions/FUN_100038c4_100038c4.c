/* Module: mcmpgdec.dll
   Function: FUN_100038c4
   Address: 100038c4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100038c4(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[4] & 7;
  param_1[2] = param_1[2] << (sbyte)uVar3;
  param_1[4] = param_1[4] - uVar3;
  while( true ) {
    iVar2 = param_1[4];
    if (0x18 < iVar2) {
      return;
    }
    if ((byte *)(param_1[3] + *param_1) <= (byte *)param_1[1]) break;
    bVar1 = *(byte *)param_1[1];
    param_1[1] = param_1[1] + 1;
    param_1[2] = param_1[2] | (uint)bVar1 << (0x18U - (char)iVar2 & 0x1f);
    param_1[4] = iVar2 + 8;
  }
  param_1[7] = 1;
  param_1[8] = 1;
  return;
}


