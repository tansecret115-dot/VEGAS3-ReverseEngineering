/* Module: hhupd.exe
   Function: FUN_01007df0
   Address: 01007df0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_01007df0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 uVar3;
  
  bVar2 = FUN_01007ed0(param_1,0x100,param_1 + 0x2b14,param_1 + 0xa18);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return false;
  }
  bVar2 = FUN_01007ed0(param_1,(uint)*(byte *)(param_1 + 0x2eb5) << 3,param_1 + 0x2c14,
                       param_1 + 0xb18);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    return false;
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x2eb5) * 8 + 0x100;
  uVar3 = FUN_01008cac(iVar1,extraout_EDX,param_1,iVar1,param_1 + 0xa18,10,
                       (undefined4 *)(param_1 + 0x18),param_1 + 0xe3c);
  if ((int)uVar3 == 0) {
    return false;
  }
  bVar2 = FUN_01007ed0(param_1,0xf9,param_1 + 0x2db4,param_1 + 0xcb8);
  if (CONCAT31(extraout_var_01,bVar2) == 0) {
    return false;
  }
  uVar3 = FUN_01008cac(param_1 + 0x818,extraout_EDX_00,param_1,0xf9,param_1 + 0xcb8,8,
                       (undefined4 *)(param_1 + 0x818),param_1 + 0x233c);
  return (bool)('\x01' - ((int)uVar3 == 0));
}


