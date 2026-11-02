/* Module: aviplug.dll
   Function: FUN_5f944550
   Address: 5f944550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f944550(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(iVar1 + 0xc);
  iVar4 = iVar1 + 0x20;
  if (iVar3 != 0) {
    do {
      uVar2 = *(uint *)(iVar4 + 4) & 0x7fffffff;
      if (uVar5 <= uVar2) {
        uVar5 = uVar2;
      }
      iVar4 = iVar4 + (uint)*(ushort *)(iVar1 + 8) * 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)(param_1 + 0x40) = (uVar5 + 3 & 0xfffffffc) + 8;
  return 0;
}


