/* Module: vidcap30.exe
   Function: FUN_0042b280
   Address: 0042b280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b280(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 8) {
    if (param_1[0xfd] == 0) {
      return 0x80004003;
    }
    FUN_004289c0(param_1,param_1[0xfd] + 0x50,0);
    iVar2 = FUN_004264b0(param_1);
    if (iVar2 != 0) {
      iVar2 = param_1[0xfd];
      iVar1 = *(int *)(iVar2 + 0x50);
      *(int *)(iVar2 + 0x50) = iVar1 + -1;
      *(uint *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + -1 + (uint)(iVar1 != 0);
    }
    param_1[0x52] = param_1[0x52];
    param_1[0x53] = param_1[0x53] | 1;
  }
  return 0;
}


