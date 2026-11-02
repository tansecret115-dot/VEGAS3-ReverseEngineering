/* Module: gifplug.dll
   Function: FUN_5f6c2890
   Address: 5f6c2890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c2890(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  int iVar3;
  
  uVar2 = 0x80004005;
  if (param_2 != (int *)0x0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      bVar1 = FUN_5f6c2ff0(*(int *)(param_1 + 8));
      if (CONCAT31(extraout_var,bVar1) == 0) {
        *param_2 = (*(int *)(*(int *)(param_1 + 0x10) + 4) + 3U & 0xfffffffc) *
                   *(int *)(*(int *)(param_1 + 0x10) + 8);
        param_2[1] = 0;
        return 0;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8) * *(int *)(*(int *)(param_1 + 0x10) + 4) * 4;
      *param_2 = iVar3;
      param_2[1] = iVar3 >> 0x1f;
      uVar2 = 0;
    }
  }
  return uVar2;
}


