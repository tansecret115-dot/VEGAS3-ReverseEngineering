/* Module: rmbe3260.dll
   Function: FUN_66017840
   Address: 66017840
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66017840(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x1a);
  iVar2 = 0x14;
  if (((uVar1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) && (uVar1 != 0)) {
    uVar4 = (uint)uVar1;
    puVar3 = (ushort *)(*(int *)(param_1 + 0x2c) + 0x16);
    do {
      uVar4 = uVar4 - 1;
      iVar2 = (uint)*puVar3 + iVar2 + puVar3[3] + 0x16 + (uint)puVar3[-6] * 2;
      puVar3 = puVar3 + 0x11;
    } while (uVar4 != 0);
  }
  return iVar2;
}


