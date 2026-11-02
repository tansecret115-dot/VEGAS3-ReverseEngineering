/* Module: vegas30.exe
   Function: FUN_00562390
   Address: 00562390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00562390(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_10 [16];
  
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[2] = 0xffffffff;
  iVar1 = _SfList_CreateExZ_32(param_1,0x178,0xffffffff,0xffffffff,0x80000004,0,0,0);
  if (-1 < iVar1) {
    FUN_00561f40(param_1);
    param_1[1] = param_2;
    FUN_005625c0(param_1);
    FUN_005622e0(param_1,param_2);
    if (param_3 != 0) {
      _SfGuidFromString_8(param_3,local_10);
      FUN_005621d0(param_1,local_10);
    }
  }
  return iVar1;
}


