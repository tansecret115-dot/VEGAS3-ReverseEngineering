/* Module: vidcap30.exe
   Function: FUN_004eec60
   Address: 004eec60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004eec60(int param_1)

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
  undefined2 local_10;
  undefined2 local_c;
  undefined2 local_8;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x46) - (uint)*(byte *)(param_1 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_1 + 0x45) - (uint)*(byte *)(param_1 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_1 + 0x44) - (uint)*(byte *)(param_1 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)*(short *)(param_1 + 0xb0) <
      (int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9))) {
    uVar2 = (uint)*(byte *)(param_1 + 0xb2);
    iVar5 = ((uint)*(byte *)(param_1 + 0x46) - (uint)*(byte *)(param_1 + 0x3e)) * uVar2;
    *(byte *)(param_1 + 0x3e) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
    iVar5 = ((uint)*(byte *)(param_1 + 0x45) - (uint)*(byte *)(param_1 + 0x3d)) * uVar2;
    *(byte *)(param_1 + 0x3d) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
    iVar5 = ((uint)*(byte *)(param_1 + 0x44) - (uint)*(byte *)(param_1 + 0x3c)) * uVar2;
    *(byte *)(param_1 + 0x3c) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
    iVar5 = ((uint)*(byte *)(param_1 + 0x47) - (uint)*(byte *)(param_1 + 0x3f)) * uVar2;
    *(byte *)(param_1 + 0x3f) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3f);
    return;
  }
  bVar6 = *(byte *)(param_1 + 0x46);
  bVar1 = *(byte *)(param_1 + 0x45);
  if (bVar1 < bVar6) {
    bVar1 = *(byte *)(param_1 + 0x44);
    if (bVar6 <= bVar1) goto LAB_004eed80;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x44);
    if (bVar6 < bVar1) goto LAB_004eed80;
  }
  bVar1 = bVar6;
LAB_004eed80:
  uVar2 = bVar1 + 1;
  local_8 = (short)(((ulonglong)*(byte *)(param_1 + 0x3e) * (ulonglong)uVar2) / 0xff);
  uVar3 = (uint)*(byte *)(param_1 + 0xb3);
  iVar5 = ((int)local_8 - (uint)*(byte *)(param_1 + 0x3e)) * uVar3;
  *(byte *)(param_1 + 0x3e) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
  local_c = (short)(((ulonglong)*(byte *)(param_1 + 0x3d) * (ulonglong)uVar2) / 0xff);
  iVar5 = ((int)local_c - (uint)*(byte *)(param_1 + 0x3d)) * uVar3;
  *(byte *)(param_1 + 0x3d) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
  local_10 = (short)(((ulonglong)*(byte *)(param_1 + 0x3c) * (ulonglong)uVar2) / 0xff);
  iVar5 = ((int)local_10 - (uint)*(byte *)(param_1 + 0x3c)) * uVar3;
  *(byte *)(param_1 + 0x3c) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
  return;
}


