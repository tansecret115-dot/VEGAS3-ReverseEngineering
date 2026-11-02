/* Module: sfs4rw.dll
   Function: FUN_0046f2d0
   Address: 0046f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f2d0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ((uint)*(ushort *)(param_2 + 0x40) + (uint)*(ushort *)(param_2 + 0x3e) +
          (uint)*(ushort *)(param_2 + 0x3c)) / 3 & 0xffff;
  uVar4 = (uint)*(ushort *)(param_2 + 0xa8);
  *(ushort *)(param_1 + 0x40) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x40)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x3e) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x3e)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x3e);
  uVar1 = *(ushort *)(param_2 + 0x42);
  *(short *)(param_1 + 0x3c) =
       (short)(((uVar3 - *(ushort *)(param_1 + 0x3c)) * uVar4 >> 0x10) +
              (uint)*(ushort *)(param_1 + 0x3c));
  uVar2 = *(ushort *)(param_2 + 0x46);
  *(ushort *)(param_1 + 0x42) =
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x42)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x42);
  uVar3 = ((uint)*(ushort *)(param_2 + 0x48) + (uint)uVar2 + (uint)*(ushort *)(param_2 + 0x44)) / 3
          & 0xffff;
  *(ushort *)(param_1 + 0x48) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x48)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x48);
  *(ushort *)(param_1 + 0x46) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x46)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x46);
  uVar1 = *(ushort *)(param_2 + 0x4a);
  *(short *)(param_1 + 0x44) =
       (short)(((uVar3 - *(ushort *)(param_1 + 0x44)) * uVar4 >> 0x10) +
              (uint)*(ushort *)(param_1 + 0x44));
  uVar2 = *(ushort *)(param_2 + 0x4e);
  *(ushort *)(param_1 + 0x4a) =
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x4a)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x4a);
  uVar3 = ((uint)*(ushort *)(param_2 + 0x50) + (uint)uVar2 + (uint)*(ushort *)(param_2 + 0x4c)) / 3
          & 0xffff;
  *(ushort *)(param_1 + 0x50) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x50)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x50);
  *(ushort *)(param_1 + 0x4e) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x4e)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x4e);
  uVar1 = *(ushort *)(param_2 + 0x52);
  *(short *)(param_1 + 0x4c) =
       (short)(((uVar3 - *(ushort *)(param_1 + 0x4c)) * uVar4 >> 0x10) +
              (uint)*(ushort *)(param_1 + 0x4c));
  *(ushort *)(param_1 + 0x52) =
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x52)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x52);
  uVar3 = ((uint)*(ushort *)(param_2 + 0x58) + (uint)*(ushort *)(param_2 + 0x56) +
          (uint)*(ushort *)(param_2 + 0x54)) / 3 & 0xffff;
  *(ushort *)(param_1 + 0x58) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x58)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x56) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x56)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x56);
  uVar1 = *(ushort *)(param_2 + 0x5a);
  *(ushort *)(param_1 + 0x54) =
       (short)((uVar3 - *(ushort *)(param_1 + 0x54)) * uVar4 >> 0x10) + *(ushort *)(param_1 + 0x54);
  *(ushort *)(param_1 + 0x5a) =
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x5a)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x5a);
  return;
}


