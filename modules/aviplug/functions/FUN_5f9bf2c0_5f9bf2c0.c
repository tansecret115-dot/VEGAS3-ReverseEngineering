/* Module: aviplug.dll
   Function: FUN_5f9bf2c0
   Address: 5f9bf2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9bf2c0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short local_14;
  short local_10;
  short local_c;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x46) - (uint)*(byte *)(param_1 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_1 + 0x45) - (uint)*(byte *)(param_1 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_1 + 0x44) - (uint)*(byte *)(param_1 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9)) <=
      (int)*(short *)(param_1 + 0xb0)) {
    return;
  }
  bVar6 = *(byte *)(param_1 + 0x46);
  bVar1 = *(byte *)(param_1 + 0x45);
  if (bVar1 < bVar6) {
    bVar1 = *(byte *)(param_1 + 0x44);
    if (bVar6 <= bVar1) goto LAB_5f9bf337;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x44);
    if (bVar6 < bVar1) goto LAB_5f9bf337;
  }
  bVar1 = bVar6;
LAB_5f9bf337:
  bVar6 = *(byte *)(param_1 + 0x3e);
  uVar2 = bVar1 + 1;
  bVar1 = *(byte *)(param_1 + 0x3d);
  if (bVar1 < bVar6) {
    bVar1 = *(byte *)(param_1 + 0x3c);
    if (*(byte *)(param_1 + 0x3c) < bVar6) {
      bVar1 = bVar6;
    }
  }
  else if (bVar1 <= *(byte *)(param_1 + 0x3c)) {
    bVar1 = *(byte *)(param_1 + 0x3c);
  }
  uVar3 = bVar1 + 1;
  local_c = (short)(((ulonglong)bVar6 * (ulonglong)uVar3) / (ulonglong)uVar2);
  uVar4 = (uint)*(byte *)(param_1 + 0xb3);
  iVar5 = ((int)local_c - (uint)*(byte *)(param_1 + 0x46)) * uVar4;
  *(byte *)(param_1 + 0x3e) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x46);
  local_10 = (short)(((ulonglong)*(byte *)(param_1 + 0x3d) * (ulonglong)uVar3) / (ulonglong)uVar2);
  iVar5 = ((int)local_10 - (uint)*(byte *)(param_1 + 0x45)) * uVar4;
  *(byte *)(param_1 + 0x3d) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x45);
  local_14 = (short)(((ulonglong)*(byte *)(param_1 + 0x3c) * (ulonglong)uVar3) / (ulonglong)uVar2);
  iVar5 = ((int)local_14 - (uint)*(byte *)(param_1 + 0x44)) * uVar4;
  *(byte *)(param_1 + 0x3c) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x44);
  return;
}


