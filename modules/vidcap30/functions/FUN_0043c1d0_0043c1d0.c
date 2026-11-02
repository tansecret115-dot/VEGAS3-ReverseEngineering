/* Module: vidcap30.exe
   Function: FUN_0043c1d0
   Address: 0043c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0x1ae8) & 4) != 0) {
    local_10 = *(int *)(param_1 + 0xb0) + 4;
    local_c = *(undefined4 *)(param_1 + 0xb4);
    local_8 = *(int *)(param_1 + 0xb8) + -4;
    local_4 = *(undefined4 *)(param_1 + 0xbc);
    iVar1 = GetSystemMetrics(0x2d);
    local_10 = local_10 + iVar1;
    local_4 = *(undefined4 *)(param_1 + 0x164c);
    FUN_00412310(param_2,&local_10,6,8);
    local_4 = *(undefined4 *)(param_1 + 0x1650);
    FUN_00412310(param_2,&local_10,6,8);
  }
  FUN_00460850(*(undefined4 *)(param_1 + 0x14f8),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x14fc),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1500),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1504),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1508),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x150c),0xf,0,param_2);
  FUN_00460850(*(undefined4 *)(param_1 + 0x1510),0xf,0,param_2);
  FUN_0042fba0(*(undefined4 *)(param_1 + 0x151c),param_2,param_4);
  FUN_0042fba0(*(undefined4 *)(param_1 + 0x1514),param_2,param_4);
  FUN_0042fba0(*(undefined4 *)(param_1 + 0x1518),param_2,param_4);
  return;
}


