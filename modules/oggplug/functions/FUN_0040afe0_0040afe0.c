/* Module: oggplug.dll
   Function: FUN_0040afe0
   Address: 0040afe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040afe0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  iVar1 = DAT_00510e98;
  if ((DAT_00510e98 == 0) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0x409;
  }
  *(int *)(param_1 + 0x13c) = param_2;
  *(int *)(iVar1 + 0x13c) = param_2;
  bVar2 = FUN_0040b0a0((ushort)*(undefined4 *)(param_1 + 0x13c));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(iVar1 + 0x134) = 1;
  return 1;
}


