/* Module: oggplug.dll
   Function: FUN_004414d0
   Address: 004414d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004414d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = uVar1 << 8 ^ (&DAT_005163a0)[(uint)*(byte *)(iVar2 + *param_1) ^ uVar1 >> 0x18];
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  iVar2 = 0;
  if (0 < param_1[3]) {
    do {
      uVar1 = uVar1 << 8 ^ (&DAT_005163a0)[(uint)*(byte *)(iVar2 + param_1[2]) ^ uVar1 >> 0x18];
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[3]);
  }
  *(char *)(*param_1 + 0x16) = (char)uVar1;
  *(char *)(*param_1 + 0x17) = (char)(uVar1 >> 8);
  *(char *)(*param_1 + 0x18) = (char)(uVar1 >> 0x10);
  *(char *)(*param_1 + 0x19) = (char)(uVar1 >> 0x18);
  return;
}


