/* Module: mp3rw.dll
   Function: FUN_0046f5e0
   Address: 0046f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f5e0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0xa8);
  uVar1 = *(ushort *)(param_2 + 0x3e);
  *(ushort *)(param_1 + 0x40) =
       *(ushort *)(param_1 + 0x40) +
       (short)(((uint)*(ushort *)(param_2 + 0x40) - (uint)*(ushort *)(param_1 + 0x40)) * uVar3 >>
              0x10);
  uVar2 = *(ushort *)(param_2 + 0x3c);
  *(ushort *)(param_1 + 0x3e) =
       *(ushort *)(param_1 + 0x3e) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x3e)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x42);
  *(ushort *)(param_1 + 0x3c) =
       *(ushort *)(param_1 + 0x3c) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x3c)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x48);
  *(ushort *)(param_1 + 0x42) =
       *(ushort *)(param_1 + 0x42) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x42)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x46);
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x48)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x44);
  *(ushort *)(param_1 + 0x46) =
       *(ushort *)(param_1 + 0x46) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x46)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x4a);
  *(ushort *)(param_1 + 0x44) =
       *(ushort *)(param_1 + 0x44) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x44)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x50);
  *(ushort *)(param_1 + 0x4a) =
       *(ushort *)(param_1 + 0x4a) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x4a)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x4e);
  *(ushort *)(param_1 + 0x50) =
       *(ushort *)(param_1 + 0x50) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x50)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x4c);
  *(ushort *)(param_1 + 0x4e) =
       *(ushort *)(param_1 + 0x4e) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x4e)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x52);
  *(ushort *)(param_1 + 0x4c) =
       *(ushort *)(param_1 + 0x4c) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x4c)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x58);
  *(ushort *)(param_1 + 0x52) =
       *(ushort *)(param_1 + 0x52) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x52)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x56);
  *(ushort *)(param_1 + 0x58) =
       *(ushort *)(param_1 + 0x58) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x58)) * uVar3 >> 0x10);
  uVar2 = *(ushort *)(param_2 + 0x54);
  *(ushort *)(param_1 + 0x56) =
       *(ushort *)(param_1 + 0x56) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x56)) * uVar3 >> 0x10);
  uVar1 = *(ushort *)(param_2 + 0x5a);
  *(ushort *)(param_1 + 0x54) =
       *(ushort *)(param_1 + 0x54) +
       (short)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x54)) * uVar3 >> 0x10);
  *(ushort *)(param_1 + 0x5a) =
       *(ushort *)(param_1 + 0x5a) +
       (short)(((uint)uVar1 - (uint)*(ushort *)(param_1 + 0x5a)) * uVar3 >> 0x10);
  return;
}


