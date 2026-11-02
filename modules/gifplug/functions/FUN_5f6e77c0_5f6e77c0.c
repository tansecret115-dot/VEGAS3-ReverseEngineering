/* Module: gifplug.dll
   Function: FUN_5f6e77c0
   Address: 5f6e77c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e77c0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x48) - (uint)*(ushort *)(param_1 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_1 + 0x46) - (uint)*(ushort *)(param_1 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_1 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    uVar3 = (uint)*(ushort *)(param_1 + 0xa8);
    *(ushort *)(param_1 + 0x40) =
         (short)(((uint)*(ushort *)(param_1 + 0x48) - (uint)*(ushort *)(param_1 + 0x40)) * uVar3 >>
                0x10) + *(ushort *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x3e) =
         (short)(((uint)*(ushort *)(param_1 + 0x46) - (uint)*(ushort *)(param_1 + 0x3e)) * uVar3 >>
                0x10) + *(ushort *)(param_1 + 0x3e);
    *(ushort *)(param_1 + 0x3c) =
         (short)(((uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 0x3c)) * uVar3 >>
                0x10) + *(ushort *)(param_1 + 0x3c);
    *(ushort *)(param_1 + 0x42) =
         (short)(((uint)*(ushort *)(param_1 + 0x4a) - (uint)*(ushort *)(param_1 + 0x42)) * uVar3 >>
                0x10) + *(ushort *)(param_1 + 0x42);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  uVar2 = *(ushort *)(param_1 + 0x46);
  if (uVar2 < uVar1) {
    uVar2 = *(ushort *)(param_1 + 0x44);
    if (uVar1 <= uVar2) goto LAB_5f6e78d5;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x44);
    if (*(ushort *)(param_1 + 0x44) < uVar2) goto LAB_5f6e78d5;
  }
  uVar2 = uVar1;
LAB_5f6e78d5:
  uVar3 = uVar2 + 1;
  uVar4 = (uint)*(ushort *)(param_1 + 0xaa);
  *(ushort *)(param_1 + 0x40) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x40) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x40)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x3e) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3e) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x3e)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x3e);
  *(ushort *)(param_1 + 0x3c) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3c) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x3c)) * uVar4 >> 0x10) +
       *(ushort *)(param_1 + 0x3c);
  return;
}


