/* Module: vegas30.exe
   Function: FUN_005e3b70
   Address: 005e3b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e3b70(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10c;
  uchar local_108 [260];
  undefined4 local_4;
  
  puVar2 = &local_10c;
  for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10c = param_2;
  _mbscpy(local_108,(uchar *)(param_1 + 0x480));
  local_4 = DAT_0064b000;
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x2fd,param_2,&LAB_005e39f0,&local_10c);
  if (iVar1 == 1) {
    _mbscpy((uchar *)(param_1 + 0x480),local_108);
    DAT_0064b000 = local_4;
    FUN_005c6370(param_1);
    return 1;
  }
  return 0;
}


