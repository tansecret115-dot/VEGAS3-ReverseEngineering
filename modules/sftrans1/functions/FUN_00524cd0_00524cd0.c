/* Module: sftrans1.dll
   Function: FUN_00524cd0
   Address: 00524cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524cd0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_2 + 0xb2);
  bVar1 = *(byte *)(param_2 + 0x3d);
  *(byte *)(param_1 + 0x3e) =
       *(byte *)(param_1 + 0x3e) +
       (char)(((uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_1 + 0x3e)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x3c);
  *(byte *)(param_1 + 0x3d) =
       *(byte *)(param_1 + 0x3d) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x3d)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x3f);
  *(byte *)(param_1 + 0x3c) =
       *(byte *)(param_1 + 0x3c) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x3c)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x46);
  *(byte *)(param_1 + 0x3f) =
       *(byte *)(param_1 + 0x3f) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x3f)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x45);
  *(byte *)(param_1 + 0x46) =
       *(byte *)(param_1 + 0x46) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x46)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x44);
  *(byte *)(param_1 + 0x45) =
       *(byte *)(param_1 + 0x45) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x45)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x47);
  *(byte *)(param_1 + 0x44) =
       *(byte *)(param_1 + 0x44) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x44)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x4e);
  *(byte *)(param_1 + 0x47) =
       *(byte *)(param_1 + 0x47) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x47)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x4d);
  *(byte *)(param_1 + 0x4e) =
       *(byte *)(param_1 + 0x4e) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x4e)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x4c);
  *(byte *)(param_1 + 0x4d) =
       *(byte *)(param_1 + 0x4d) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x4d)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x4f);
  *(byte *)(param_1 + 0x4c) =
       *(byte *)(param_1 + 0x4c) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x4c)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x56);
  *(byte *)(param_1 + 0x4f) =
       *(byte *)(param_1 + 0x4f) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x4f)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x55);
  *(byte *)(param_1 + 0x56) =
       *(byte *)(param_1 + 0x56) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x56)) * uVar3 >> 8);
  bVar2 = *(byte *)(param_2 + 0x54);
  *(byte *)(param_1 + 0x55) =
       *(byte *)(param_1 + 0x55) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x55)) * uVar3 >> 8);
  bVar1 = *(byte *)(param_2 + 0x57);
  *(byte *)(param_1 + 0x54) =
       *(byte *)(param_1 + 0x54) +
       (char)(((uint)bVar2 - (uint)*(byte *)(param_1 + 0x54)) * uVar3 >> 8);
  *(byte *)(param_1 + 0x57) =
       *(byte *)(param_1 + 0x57) +
       (char)(((uint)bVar1 - (uint)*(byte *)(param_1 + 0x57)) * uVar3 >> 8);
  return;
}


