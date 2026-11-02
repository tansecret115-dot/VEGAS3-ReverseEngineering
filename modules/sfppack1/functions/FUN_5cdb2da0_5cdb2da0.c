/* Module: sfppack1.dll
   Function: FUN_5cdb2da0
   Address: 5cdb2da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdb2da0(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (0x10 < *(uint *)(param_1 + 0x40)) {
    *(undefined2 *)(iVar1 + 0x10) = 0;
  }
  FUN_5cdb6540(iVar1);
  uVar2 = (*(ushort *)(iVar1 + 0xe) >> 3) * *(short *)(iVar1 + 2);
  *(ushort *)(iVar1 + 0xc) = uVar2;
  *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 4) * (uint)uVar2;
  return;
}


