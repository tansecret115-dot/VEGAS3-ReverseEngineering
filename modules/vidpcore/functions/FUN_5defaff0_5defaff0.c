/* Module: vidpcore.dll
   Function: FUN_5defaff0
   Address: 5defaff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5defaff0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2;
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)*(byte *)(param_2 + 0x3e) + (uint)*(byte *)(param_2 + 0x3d) +
                               (uint)*(byte *)(param_2 + 0x3c)) * 0x55555556) >> 0x20);
  uVar4 = (uint)*(byte *)(iVar3 + 0xb2);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x3e)) * uVar4;
  *(byte *)(param_1 + 0x3e) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x3d)) * uVar4;
  *(byte *)(param_1 + 0x3d) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x3c)) * uVar4;
  *(byte *)(param_1 + 0x3c) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
  iVar2 = ((uint)*(byte *)(iVar3 + 0x3f) - (uint)*(byte *)(param_1 + 0x3f)) * uVar4;
  bVar1 = *(byte *)(iVar3 + 0x46);
  *(byte *)(param_1 + 0x3f) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3f);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(iVar3 + 0x45) +
                               (uint)*(byte *)(iVar3 + 0x44)) * 0x55555556) >> 0x20);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x46)) * uVar4;
  *(byte *)(param_1 + 0x46) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x46);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x45)) * uVar4;
  *(byte *)(param_1 + 0x45) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x45);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x44)) * uVar4;
  *(byte *)(param_1 + 0x44) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x44);
  iVar2 = ((uint)*(byte *)(iVar3 + 0x47) - (uint)*(byte *)(param_1 + 0x47)) * uVar4;
  bVar1 = *(byte *)(iVar3 + 0x4e);
  *(byte *)(param_1 + 0x47) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x47);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(iVar3 + 0x4d) +
                               (uint)*(byte *)(iVar3 + 0x4c)) * 0x55555556) >> 0x20);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x4e)) * uVar4;
  *(byte *)(param_1 + 0x4e) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4e);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x4d)) * uVar4;
  *(byte *)(param_1 + 0x4d) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4d);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x4c)) * uVar4;
  *(byte *)(param_1 + 0x4c) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4c);
  iVar2 = ((uint)*(byte *)(iVar3 + 0x4f) - (uint)*(byte *)(param_1 + 0x4f)) * uVar4;
  bVar1 = *(byte *)(iVar3 + 0x56);
  *(byte *)(param_1 + 0x4f) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x4f);
  param_2 = (uint)(byte)((ulonglong)
                         ((longlong)
                          (int)((uint)bVar1 + (uint)*(byte *)(iVar3 + 0x55) +
                               (uint)*(byte *)(iVar3 + 0x54)) * 0x55555556) >> 0x20);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x56)) * uVar4;
  *(byte *)(param_1 + 0x56) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x56);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x55)) * uVar4;
  *(byte *)(param_1 + 0x55) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x55);
  iVar2 = (param_2 - *(byte *)(param_1 + 0x54)) * uVar4;
  *(byte *)(param_1 + 0x54) =
       (char)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x54);
  iVar3 = ((uint)*(byte *)(iVar3 + 0x57) - (uint)*(byte *)(param_1 + 0x57)) * uVar4;
  *(byte *)(param_1 + 0x57) =
       (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x57);
  return;
}


