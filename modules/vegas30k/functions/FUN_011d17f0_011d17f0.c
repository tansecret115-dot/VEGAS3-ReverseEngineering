/* Module: vegas30k.dll
   Function: FUN_011d17f0
   Address: 011d17f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011d17f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x154) & 0xfffffbff;
  *(uint *)(param_1 + 0x154) = uVar2;
  uVar1 = *(uint *)(*(int *)(param_1 + 500) * 0x20 + 0x1b0 + param_1);
  if (((uVar1 & 0x10) == 0) && ((uVar1 & 1) != 0)) {
    iVar3 = FUN_011d1750(*(undefined4 *)((*(int *)(param_1 + 500) + 0xd) * 0x20 + param_1),
                         *(undefined4 *)(param_1 + 0x1e8));
    if (0 < iVar3) {
      *(uint *)(*(int *)(param_1 + 500) * 0x20 + 0x1a4 + param_1) =
           (uint)*(ushort *)(*(int *)(param_1 + 0x19c) + 0xc) * iVar3;
      iVar3 = *(int *)(param_1 + 500) * 0x20;
      *(uint *)(iVar3 + 0x1b0 + param_1) = *(uint *)(iVar3 + 0x1b0 + param_1) & 0xfffffffe;
      *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x400;
    }
    uVar2 = *(uint *)(param_1 + 0x154);
  }
  return (int)(uVar2 << 0x15) >> 0x1f;
}


