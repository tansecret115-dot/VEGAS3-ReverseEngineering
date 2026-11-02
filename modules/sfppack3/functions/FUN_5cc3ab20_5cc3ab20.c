/* Module: sfppack3.dll
   Function: FUN_5cc3ab20
   Address: 5cc3ab20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc3ab20(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (0x10 < *(uint *)(param_1 + 0x40)) {
    *(undefined2 *)(iVar1 + 0x10) = 0;
  }
  FUN_5cc3d4c0(iVar1);
  uVar2 = (*(ushort *)(iVar1 + 0xe) >> 3) * *(short *)(iVar1 + 2);
  *(ushort *)(iVar1 + 0xc) = uVar2;
  *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 4) * (uint)uVar2;
  return;
}


