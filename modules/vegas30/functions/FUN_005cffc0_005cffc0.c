/* Module: vegas30.exe
   Function: FUN_005cffc0
   Address: 005cffc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cffc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_1;
  iVar4 = *(int *)(param_1 + 0x50);
  if ((((iVar4 == 0) || (*(int *)(iVar4 + 0x18) == 0)) ||
      (uVar1 = *(uint *)(*(int *)(iVar4 + 0x18) + 0x134), (uVar1 & 0x400) != 0)) ||
     ((uVar1 & 0x20) != 0)) {
    iVar2 = 1;
  }
  else {
    local_8 = 0;
    local_4 = 0;
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
    param_1 = 0;
    iVar2 = FUN_005cf930(iVar3,&local_8,&local_10,&param_1,param_2,param_3,1);
    if ((iVar2 == 0) && ((int)local_10 != 0 || local_10._4_4_ != 0)) {
      if (*(int *)(iVar4 + 0x18) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005f13f0(*(undefined4 *)(iVar3 + 4));
      }
      if ((*(int *)(iVar3 + 0x94) == 0) &&
         (iVar2 = _SfList_CreateExZ_32
                            ((undefined4 *)(iVar3 + 0x94),0x18,0xffffffff,0xffffffff,0x40000004,0,0,
                             0), iVar2 < 0)) {
        return iVar2;
      }
      if ((*(uint *)(*(int *)(iVar4 + 0x18) + 0x134) & 0x800) != 0) {
        local_8 = 0;
        local_4 = 0;
        local_10 = ftol();
        param_1 = 1;
      }
      iVar4 = FUN_005cf660(*(undefined4 *)(iVar3 + 0x94),local_8,local_4,local_10,param_1);
      return iVar4;
    }
  }
  return iVar2;
}


