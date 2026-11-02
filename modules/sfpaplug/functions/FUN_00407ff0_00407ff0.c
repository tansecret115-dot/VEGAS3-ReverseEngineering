/* Module: sfpaplug.dll
   Function: FUN_00407ff0
   Address: 00407ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00407ff0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x54);
  iVar1 = iVar2 + 1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 8) {
    if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + -1) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(uint *)(param_1 + 0x54) = (uint)*(byte *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c))
    ;
  }
  return iVar3 >> (7U - (char)iVar2 & 0x1f) & 1;
}


