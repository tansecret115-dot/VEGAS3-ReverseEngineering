/* Module: mcplug.dll
   Function: FUN_0045c6d0
   Address: 0045c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045c6d0(int param_1)

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
  if ((int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8)) <=
      *(int *)(param_1 + 0xa4)) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x48);
  uVar2 = *(ushort *)(param_1 + 0x46);
  if (uVar2 < uVar1) {
    uVar2 = *(ushort *)(param_1 + 0x44);
    if (uVar1 <= uVar2) goto LAB_0045c753;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x44);
    if (*(ushort *)(param_1 + 0x44) < uVar2) goto LAB_0045c753;
  }
  uVar2 = uVar1;
LAB_0045c753:
  uVar1 = *(ushort *)(param_1 + 0x40);
  uVar3 = uVar2 + 1;
  uVar2 = *(ushort *)(param_1 + 0x3e);
  if (uVar2 < uVar1) {
    uVar2 = *(ushort *)(param_1 + 0x3c);
    if (*(ushort *)(param_1 + 0x3c) < uVar1) {
      uVar2 = uVar1;
    }
  }
  else if (uVar2 <= *(ushort *)(param_1 + 0x3c)) {
    uVar2 = *(ushort *)(param_1 + 0x3c);
  }
  uVar4 = uVar2 + 1;
  uVar5 = (uint)*(ushort *)(param_1 + 0xaa);
  *(ushort *)(param_1 + 0x40) =
       (short)((((uint)(((ulonglong)uVar1 * (ulonglong)uVar4) / (ulonglong)uVar3) & 0xffff) -
               (uint)*(ushort *)(param_1 + 0x48)) * uVar5 >> 0x10) + *(ushort *)(param_1 + 0x48);
  *(ushort *)(param_1 + 0x3e) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3e) * (ulonglong)uVar4) /
                       (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_1 + 0x46)) * uVar5 >>
              0x10) + *(ushort *)(param_1 + 0x46);
  *(ushort *)(param_1 + 0x3c) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3c) * (ulonglong)uVar4) /
                       (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_1 + 0x44)) * uVar5 >>
              0x10) + *(ushort *)(param_1 + 0x44);
  return;
}


