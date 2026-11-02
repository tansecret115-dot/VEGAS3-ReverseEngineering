/* Module: 50comupd.exe
   Function: FUN_01007627
   Address: 01007627
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01007627(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_010076db(param_1,0x100,param_1 + 0x2b14,param_1 + 0xa18);
  if (((CONCAT31(extraout_var,bVar1) != 0) &&
      (bVar1 = FUN_010076db(param_1,(uint)*(byte *)(param_1 + 0x2eb5) << 3,param_1 + 0x2c14,
                            param_1 + 0xb18), CONCAT31(extraout_var_00,bVar1) != 0)) &&
     (uVar2 = FUN_010084f4(param_1,(uint)*(byte *)(param_1 + 0x2eb5) * 8 + 0x100,param_1 + 0xa18,10,
                           (undefined4 *)(param_1 + 0x18),param_1 + 0xe3c), uVar2 != 0)) {
    bVar1 = FUN_010076db(param_1,0xf9,param_1 + 0x2db4,param_1 + 0xcb8);
    if (CONCAT31(extraout_var_01,bVar1) != 0) {
      uVar2 = FUN_010084f4(param_1,0xf9,param_1 + 0xcb8,8,(undefined4 *)(param_1 + 0x818),
                           param_1 + 0x233c);
      return uVar2 != 0;
    }
  }
  return false;
}


