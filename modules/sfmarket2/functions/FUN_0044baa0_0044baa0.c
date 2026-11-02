/* Module: sfmarket2.dll
   Function: FUN_0044baa0
   Address: 0044baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044baa0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_5 == 0) {
    if (param_4 != 0) {
      uVar5 = (int)(param_3 * 0xffff + ((int)(param_3 * 0xffff) >> 0x1f & 0x3fffU)) >> 0xe & 0xffff;
      uVar3 = *(ushort *)(param_2 + 0x3e);
      *(ushort *)(param_1 + 0x3c) =
           (short)(((uint)*(ushort *)(param_1 + 0x3c) - (uint)*(ushort *)(param_2 + 0x3c)) * uVar5
                  >> 0x10) + *(ushort *)(param_2 + 0x3c);
      uVar4 = *(ushort *)(param_2 + 0x40);
      *(ushort *)(param_1 + 0x3e) =
           (short)(((uint)*(ushort *)(param_1 + 0x3e) - (uint)uVar3) * uVar5 >> 0x10) + uVar3;
      uVar3 = *(ushort *)(param_2 + 0x42);
      *(ushort *)(param_1 + 0x40) =
           (short)(((uint)*(ushort *)(param_1 + 0x40) - (uint)uVar4) * uVar5 >> 0x10) + uVar4;
      *(ushort *)(param_1 + 0x42) =
           (short)(((uint)*(ushort *)(param_1 + 0x42) - (uint)uVar3) * uVar5 >> 0x10) + uVar3;
      return;
    }
    param_3 = (int)(param_3 * 0xff + ((int)(param_3 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
    iVar6 = ((uint)*(byte *)(param_1 + 0x3c) - (uint)*(byte *)(param_2 + 0x3c)) * param_3;
    bVar1 = *(byte *)(param_2 + 0x3d);
    *(byte *)(param_1 + 0x3c) =
         (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x3c);
    iVar6 = ((uint)*(byte *)(param_1 + 0x3d) - (uint)bVar1) * param_3;
    bVar2 = *(byte *)(param_2 + 0x3e);
    *(byte *)(param_1 + 0x3d) = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
    iVar6 = ((uint)*(byte *)(param_1 + 0x3e) - (uint)bVar2) * param_3;
    bVar1 = *(byte *)(param_2 + 0x3f);
    *(byte *)(param_1 + 0x3e) = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar2;
    iVar6 = ((uint)*(byte *)(param_1 + 0x3f) - (uint)bVar1) * param_3;
    *(byte *)(param_1 + 0x3f) = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
  }
  return;
}


