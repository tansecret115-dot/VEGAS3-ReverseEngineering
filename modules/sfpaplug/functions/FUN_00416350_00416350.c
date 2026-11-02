/* Module: sfpaplug.dll
   Function: FUN_00416350
   Address: 00416350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416350(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  iVar1 = DAT_0045c380;
  if ((DAT_0045c380 == 0) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0x409;
  }
  *(int *)(param_1 + 0x13c) = param_2;
  *(int *)(iVar1 + 0x13c) = param_2;
  bVar2 = FUN_00416410((ushort)*(undefined4 *)(param_1 + 0x13c));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(iVar1 + 0x134) = 1;
  return 1;
}


