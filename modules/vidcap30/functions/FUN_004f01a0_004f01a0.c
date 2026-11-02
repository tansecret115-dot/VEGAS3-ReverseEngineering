/* Module: vidcap30.exe
   Function: FUN_004f01a0
   Address: 004f01a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f01a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = (uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_2 + 0xae);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (uint)*(byte *)(param_2 + 0x3d) - (uint)*(byte *)(param_2 + 0xad);
  uVar6 = (int)uVar2 >> 0x1f;
  iVar8 = (int)*(short *)(param_2 + 0xb0);
  uVar3 = (uint)*(byte *)(param_2 + 0x3c) - (uint)*(byte *)(param_2 + 0xac);
  uVar7 = (int)uVar3 >> 0x1f;
  if (iVar8 < (int)(((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) +
                   ((uVar3 ^ uVar7) - uVar7))) {
    uVar1 = (uint)*(byte *)(param_2 + 0xb2);
    iVar4 = ((uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_1 + 0x3e)) * uVar1;
    *(byte *)(param_1 + 0x3e) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
    iVar4 = ((uint)*(byte *)(param_2 + 0x3d) - (uint)*(byte *)(param_1 + 0x3d)) * uVar1;
    *(byte *)(param_1 + 0x3d) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
    iVar4 = ((uint)*(byte *)(param_2 + 0x3c) - (uint)*(byte *)(param_1 + 0x3c)) * uVar1;
    *(byte *)(param_1 + 0x3c) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
    iVar4 = ((uint)*(byte *)(param_2 + 0x3f) - (uint)*(byte *)(param_1 + 0x3f)) * uVar1;
    *(byte *)(param_1 + 0x3f) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3f);
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x46) - (uint)*(byte *)(param_2 + 0xae);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (uint)*(byte *)(param_2 + 0x45) - (uint)*(byte *)(param_2 + 0xad);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x44) - (uint)*(byte *)(param_2 + 0xac);
  uVar7 = (int)uVar3 >> 0x1f;
  if (iVar8 < (int)(((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) +
                   ((uVar3 ^ uVar7) - uVar7))) {
    uVar1 = (uint)*(byte *)(param_2 + 0xb2);
    iVar4 = ((uint)*(byte *)(param_2 + 0x46) - (uint)*(byte *)(param_1 + 0x46)) * uVar1;
    *(byte *)(param_1 + 0x46) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x46);
    iVar4 = ((uint)*(byte *)(param_2 + 0x45) - (uint)*(byte *)(param_1 + 0x45)) * uVar1;
    *(byte *)(param_1 + 0x45) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x45);
    iVar4 = ((uint)*(byte *)(param_2 + 0x44) - (uint)*(byte *)(param_1 + 0x44)) * uVar1;
    *(byte *)(param_1 + 0x44) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x44);
    iVar4 = ((uint)*(byte *)(param_2 + 0x47) - (uint)*(byte *)(param_1 + 0x47)) * uVar1;
    *(byte *)(param_1 + 0x47) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x47);
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x4e) - (uint)*(byte *)(param_2 + 0xae);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (uint)*(byte *)(param_2 + 0x4d) - (uint)*(byte *)(param_2 + 0xad);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x4c) - (uint)*(byte *)(param_2 + 0xac);
  uVar7 = (int)uVar3 >> 0x1f;
  if (iVar8 < (int)(((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) +
                   ((uVar3 ^ uVar7) - uVar7))) {
    uVar1 = (uint)*(byte *)(param_2 + 0xb2);
    iVar4 = ((uint)*(byte *)(param_2 + 0x4e) - (uint)*(byte *)(param_1 + 0x4e)) * uVar1;
    *(byte *)(param_1 + 0x4e) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4e);
    iVar4 = ((uint)*(byte *)(param_2 + 0x4d) - (uint)*(byte *)(param_1 + 0x4d)) * uVar1;
    *(byte *)(param_1 + 0x4d) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4d);
    iVar4 = ((uint)*(byte *)(param_2 + 0x4c) - (uint)*(byte *)(param_1 + 0x4c)) * uVar1;
    *(byte *)(param_1 + 0x4c) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4c);
    iVar4 = ((uint)*(byte *)(param_2 + 0x4f) - (uint)*(byte *)(param_1 + 0x4f)) * uVar1;
    *(byte *)(param_1 + 0x4f) =
         (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4f);
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x56) - (uint)*(byte *)(param_2 + 0xae);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (uint)*(byte *)(param_2 + 0x55) - (uint)*(byte *)(param_2 + 0xad);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x54) - (uint)*(byte *)(param_2 + 0xac);
  uVar7 = (int)uVar3 >> 0x1f;
  if (iVar8 < (int)(((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) +
                   ((uVar3 ^ uVar7) - uVar7))) {
    uVar1 = (uint)*(byte *)(param_2 + 0xb2);
    iVar8 = ((uint)*(byte *)(param_2 + 0x56) - (uint)*(byte *)(param_1 + 0x56)) * uVar1;
    *(byte *)(param_1 + 0x56) =
         (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x56);
    iVar8 = ((uint)*(byte *)(param_2 + 0x55) - (uint)*(byte *)(param_1 + 0x55)) * uVar1;
    *(byte *)(param_1 + 0x55) =
         (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x55);
    iVar8 = ((uint)*(byte *)(param_2 + 0x54) - (uint)*(byte *)(param_1 + 0x54)) * uVar1;
    *(byte *)(param_1 + 0x54) =
         (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x54);
    iVar8 = ((uint)*(byte *)(param_2 + 0x57) - (uint)*(byte *)(param_1 + 0x57)) * uVar1;
    *(byte *)(param_1 + 0x57) =
         (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x57);
  }
  return;
}


