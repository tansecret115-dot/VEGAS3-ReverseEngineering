/* Module: erv33260.dll
   Function: FUN_6707d6f0
   Address: 6707d6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707d6f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_3 + *(int *)(param_1 + 0xc);
  iVar1 = param_2 << (0x20U - (char)uVar2 & 0x1f);
  **(byte **)(param_1 + 4) = **(byte **)(param_1 + 4) | (byte)((uint)iVar1 >> 0x18);
  *(char *)(*(int *)(param_1 + 4) + 1) = (char)((uint)iVar1 >> 0x10);
  *(char *)(*(int *)(param_1 + 4) + 2) = (char)((uint)iVar1 >> 8);
  *(char *)(*(int *)(param_1 + 4) + 3) = (char)iVar1;
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + (uVar2 >> 3);
  *(uint *)(param_1 + 0xc) = uVar2 & 7;
  return;
}


