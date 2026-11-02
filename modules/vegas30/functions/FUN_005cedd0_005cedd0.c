/* Module: vegas30.exe
   Function: FUN_005cedd0
   Address: 005cedd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cedd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  uVar2 = param_3;
  switch(param_3) {
  case 199:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x3f800000;
    local_14 = 1;
    local_24 = 0;
    local_28 = 0x40000000;
    param_2 = 0x3f800000;
    uVar2 = 1;
    break;
  case 200:
    local_10 = *(undefined4 *)(param_2 + 0x20);
    local_c = *(undefined4 *)(param_2 + 0x24);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 1;
    local_8 = 0x3f800000;
    local_4 = 1;
    local_24 = 0;
    local_28 = 0x3f800000;
    param_2 = 0x3f000000;
    uVar2 = 2;
    break;
  case 0xc9:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = DAT_0064ab84;
    local_24 = 0xbf800000;
    local_28 = 0x3f800000;
    param_2 = 0;
    uVar2 = 1;
    break;
  case 0xca:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x3f800000;
    local_14 = DAT_0064ab88;
    local_24 = 0xbf800000;
    local_28 = 0x40400000;
    param_2 = 0x3f800000;
    uVar2 = 1;
  }
  FUN_005b83b0(param_1,1);
  uVar2 = FUN_0047c730(iVar1 + 0x98,iVar1,0,0,*(undefined4 *)(iVar1 + 0x20),
                       *(undefined4 *)(iVar1 + 0x24),local_24,local_28,param_2,param_3,uVar2,
                       &local_20);
  FUN_005b84d0(param_1,1);
  return uVar2;
}


