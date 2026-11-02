/* Module: rmto3260.dll
   Function: FUN_662da040
   Address: 662da040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662da040(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_70 [32];
  undefined4 local_50;
  undefined4 local_4c;
  uint local_10;
  undefined4 local_c;
  void *local_8;
  
  uVar1 = *(uint *)(param_1 + 0x32);
  iVar2 = *(int *)(param_1 + 0x36);
  local_c = 0;
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    local_10 = CONCAT22(local_10._2_2_,
                        CONCAT11(*(undefined1 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 5)));
    iVar2 = iVar2 + 6;
  }
  iVar3 = 0;
  if (iVar2 == 0) {
    iVar3 = -0x7ff8ffa9;
  }
  if (-1 < iVar3) {
    local_8 = this;
    if ((local_10 & 0xffff) == 4) {
      FUN_662c7500(local_70,*(byte **)(param_1 + 0x36),uVar1);
      local_50 = *(undefined4 *)((int)this + 0xa6);
      local_4c = local_50;
      FUN_662da100(local_70,*(undefined1 **)(param_1 + 0x36),(int *)(param_1 + 0x32));
    }
    else if ((local_10 & 0xffff) == 5) {
      FUN_662d8ec0(local_70,*(byte **)(param_1 + 0x36),uVar1);
      local_50 = *(undefined4 *)((int)this + 0xa6);
      local_4c = local_50;
      FUN_662da3a0(local_70,*(undefined1 **)(param_1 + 0x36),(int *)(param_1 + 0x32));
      return 0;
    }
  }
  return 0;
}


