/* Module: rmto3260.dll
   Function: FUN_662df910
   Address: 662df910
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662df910(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = 0;
  iVar2 = ((uint)*(ushort *)(param_1 + 6) * 3 + (uint)*(ushort *)(param_1 + 0x10) + 6) * 2;
  if (*(short *)(param_1 + 0x16) != 0) {
    do {
      iVar1 = FUN_662df970((uint)uVar3 * 0x15 + *(int *)(param_1 + 0x18));
      iVar2 = iVar2 + iVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x16));
  }
  return iVar2;
}


