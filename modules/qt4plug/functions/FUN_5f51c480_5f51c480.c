/* Module: qt4plug.dll
   Function: FUN_5f51c480
   Address: 5f51c480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51c480(int *param_1,undefined2 *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  sVar1 = *(short *)(iVar3 + 0x18);
  uVar2 = *(ushort *)(iVar3 + 0x1a);
  iVar3 = *(int *)(iVar3 + 0x20);
  param_2[7] = uVar2;
  param_2[1] = sVar1;
  uVar2 = (uVar2 >> 3) * sVar1;
  param_2[6] = uVar2;
  uVar4 = iVar3 + 0x8000U >> 0x10;
  *(uint *)(param_2 + 4) = uVar2 * uVar4;
  *param_2 = 1;
  *(uint *)(param_2 + 2) = uVar4;
  param_2[8] = 0;
  return 0;
}


