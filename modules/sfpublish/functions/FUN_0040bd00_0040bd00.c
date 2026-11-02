/* Module: sfpublish.dll
   Function: FUN_0040bd00
   Address: 0040bd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bd00(int *param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined2 *puStack_68;
  undefined2 *puStack_64;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined2 local_24 [4];
  int local_1c;
  undefined2 local_14 [4];
  undefined4 local_c;
  
  puStack_64 = local_24;
  puStack_68 = (undefined2 *)0x40bd15;
  Ordinal_8();
  puStack_68 = local_14;
  puStack_6c = (undefined1 *)0x40bd1b;
  Ordinal_8();
  puStack_6c = local_54;
  puStack_70 = (undefined1 *)0x40bd21;
  Ordinal_8();
  puStack_70 = local_44;
  puStack_74 = (undefined1 *)0x40bd27;
  Ordinal_8();
  puStack_74 = local_34;
  Ordinal_8();
  local_14[0] = 3;
  local_c = 0xe;
  iVar1 = lstrlenA(param_2);
  FUN_004328f0();
  MultiByteToWideChar(0,1,param_2,-1,(LPWSTR)&puStack_74,iVar1 + 1);
  iVar1 = Ordinal_2(&puStack_74);
  if (iVar1 != 0) {
    local_24[0] = 8;
    local_1c = iVar1;
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,local_24,local_14,local_54,local_44,local_34);
    Ordinal_6(iVar1);
    return uVar2;
  }
  return 0x8007000e;
}


