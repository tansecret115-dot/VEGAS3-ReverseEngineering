/* Module: extmondrv.dll
   Function: FUN_004452d0
   Address: 004452d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004452d0(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_2;
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)*(byte *)(param_2 + 0x3e) + (uint)*(byte *)(param_2 + 0x3d) +
                               (uint)*(byte *)(param_2 + 0x3c)) * 0x55555556) >> 0x20);
  uVar4 = (uint)*(byte *)(uVar2 + 0xb2);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x3e)) * uVar4;
  *(byte *)(param_1 + 0x3e) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x3d)) * uVar4;
  *(byte *)(param_1 + 0x3d) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x3c)) * uVar4;
  *(byte *)(param_1 + 0x3c) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
  iVar3 = ((uint)*(byte *)(uVar2 + 0x3f) - (uint)*(byte *)(param_1 + 0x3f)) * uVar4;
  bVar1 = *(byte *)(uVar2 + 0x46);
  *(byte *)(param_1 + 0x3f) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3f);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(uVar2 + 0x45) +
                               (uint)*(byte *)(uVar2 + 0x44)) * 0x55555556) >> 0x20);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x46)) * uVar4;
  *(byte *)(param_1 + 0x46) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x46);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x45)) * uVar4;
  *(byte *)(param_1 + 0x45) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x45);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x44)) * uVar4;
  *(byte *)(param_1 + 0x44) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x44);
  iVar3 = ((uint)*(byte *)(uVar2 + 0x47) - (uint)*(byte *)(param_1 + 0x47)) * uVar4;
  bVar1 = *(byte *)(uVar2 + 0x4e);
  *(byte *)(param_1 + 0x47) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x47);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(uVar2 + 0x4d) +
                               (uint)*(byte *)(uVar2 + 0x4c)) * 0x55555556) >> 0x20);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x4e)) * uVar4;
  *(byte *)(param_1 + 0x4e) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4e);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x4d)) * uVar4;
  *(byte *)(param_1 + 0x4d) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4d);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x4c)) * uVar4;
  *(byte *)(param_1 + 0x4c) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4c);
  iVar3 = ((uint)*(byte *)(uVar2 + 0x4f) - (uint)*(byte *)(param_1 + 0x4f)) * uVar4;
  bVar1 = *(byte *)(uVar2 + 0x56);
  *(byte *)(param_1 + 0x4f) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4f);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(uVar2 + 0x55) +
                               (uint)*(byte *)(uVar2 + 0x54)) * 0x55555556) >> 0x20);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x56)) * uVar4;
  *(byte *)(param_1 + 0x56) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x56);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x55)) * uVar4;
  *(byte *)(param_1 + 0x55) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x55);
  iVar3 = (param_2 - *(byte *)(param_1 + 0x54)) * uVar4;
  *(byte *)(param_1 + 0x54) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x54);
  iVar3 = ((uint)*(byte *)(uVar2 + 0x57) - (uint)*(byte *)(param_1 + 0x57)) * uVar4;
  *(byte *)(param_1 + 0x57) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x57);
  return;
}


