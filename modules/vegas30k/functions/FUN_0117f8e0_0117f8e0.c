/* Module: vegas30k.dll
   Function: FUN_0117f8e0
   Address: 0117f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0117f8e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x24) & 2) != 0) goto LAB_0117f926;
    iVar2 = *(int *)(param_1 + 0x50);
    iVar1 = _SfGetMillisecEx_4(param_1 + 8);
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = iVar1 - iVar2;
    if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x58) <= iVar1)) goto LAB_0117f926;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar1 = _SfGetMillisecEx_4(param_1 + 8);
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = iVar1 - iVar2;
  }
  iVar3 = iVar3 + iVar1;
LAB_0117f926:
  if (*(int *)(param_1 + 0x5c) < iVar3) {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) < iVar3) {
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = iVar3;
  }
  return iVar2;
}


