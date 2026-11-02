/* Module: rmbe3260.dll
   Function: FUN_66042e40
   Address: 66042e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66042e40(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(param_1) {
  case 0:
    *(uint **)this = param_2;
    return 0;
  case 1:
    *(uint **)((int)this + 4) = param_2;
    if (*(int *)((int)this + 0x14) != 0) {
      FUN_66042df0(this,*(int *)((int)this + 0x14) * 2);
      return 0;
    }
    break;
  case 2:
    uVar1 = *param_2;
    *(uint *)((int)this + 0x14) = uVar1;
    if (uVar1 == 0) {
      return 0xffffffff;
    }
    FUN_66042df0(this,uVar1 * 2);
    return 0;
  case 3:
    *(uint *)((int)this + 0x10) = *param_2;
    return 0;
  default:
    uVar2 = 0x30000;
    break;
  case 8:
    uVar1 = *param_2;
    if ((uVar1 != 0) && (uVar1 < 2)) {
      *(uint *)((int)this + 0x27) = uVar1;
      return 0;
    }
    return 0xffffffff;
  }
  return uVar2;
}


