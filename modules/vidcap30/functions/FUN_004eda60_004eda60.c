/* Module: vidcap30.exe
   Function: FUN_004eda60
   Address: 004eda60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004eda60(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_2 + 0xb2);
  bVar1 = *(byte *)(param_2 + 0x3d);
  *(char *)(param_1 + 0x3e) =
       *(char *)(param_1 + 0x3e) + (char)(*(byte *)(param_2 + 0x3e) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x3c);
  *(char *)(param_1 + 0x3d) = *(char *)(param_1 + 0x3d) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x3f);
  *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x46);
  *(char *)(param_1 + 0x3f) = *(char *)(param_1 + 0x3f) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x45);
  *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x44);
  *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x47);
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x4e);
  *(char *)(param_1 + 0x47) = *(char *)(param_1 + 0x47) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x4d);
  *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x4c);
  *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x4d) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x4f);
  *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x4c) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x56);
  *(char *)(param_1 + 0x4f) = *(char *)(param_1 + 0x4f) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x55);
  *(char *)(param_1 + 0x56) = *(char *)(param_1 + 0x56) + (char)(bVar2 * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x54);
  *(char *)(param_1 + 0x55) = *(char *)(param_1 + 0x55) + (char)(bVar1 * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x57);
  *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + (char)(bVar2 * uVar3 >> 8);
  *(char *)(param_1 + 0x57) = *(char *)(param_1 + 0x57) + (char)(bVar1 * uVar3 >> 8);
  return;
}


