/* Module: vegas30.exe
   Function: FUN_005d1150
   Address: 005d1150
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005d1150(undefined4 param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  uint *local_4;
  
  FUN_005d1520(param_2 + 0x38);
  iVar1 = FUN_005d1550(param_2);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = _SfList_AllocItem_12(*(undefined4 *)(param_2 + 0x234),0x20,&local_4);
  if (local_4 != (uint *)0x0) {
    local_4[3] = param_4;
    local_4[4] = param_5;
    local_4[5] = param_6;
    local_4[6] = param_7;
    *local_4 = (param_8 & 1) << 1 | *local_4 & 0xfffffffd;
    iVar1 = FUN_005d0d40(param_4,param_5,param_6,param_7,param_3,local_4 + 1);
    if (iVar1 < 0) {
      iVar1 = (**(code **)*param_3)(param_3,&DAT_0062f6f8,local_4 + 7);
      if (iVar1 < 0) {
        _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x234),0xffffffff,0xffffffff,0);
        return 1;
      }
      *(int *)(param_2 + 0x240) = *(int *)(param_2 + 0x240) + 1;
    }
    iVar1 = _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x234),0xffffffff,0,0xffffffff);
    return (uint)(iVar1 < 0);
  }
  return uVar2;
}


