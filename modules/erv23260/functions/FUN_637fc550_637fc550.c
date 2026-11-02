/* Module: erv23260.dll
   Function: FUN_637fc550
   Address: 637fc550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fc550(void *this,uint param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 1;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 1:
    iVar4 = 0x80;
    iVar2 = 0x60;
    break;
  case 2:
    iVar4 = 0xb0;
    iVar2 = 0x90;
    break;
  case 3:
    iVar4 = 0x160;
    iVar2 = 0x120;
    break;
  case 4:
    iVar4 = 0x2c0;
    iVar2 = 0x240;
    break;
  case 5:
    iVar4 = 0x580;
    iVar2 = 0x480;
    break;
  case 6:
    iVar4 = *(int *)(param_1 + 0x80);
    iVar2 = *(int *)(param_1 + 0x84);
    break;
  default:
    goto switchD_637fc56e_default;
  }
  bVar3 = 0;
  if ((*(int *)((int)this + 0xc4) == 0) || (*(int *)((int)this + 200) != 0)) {
    *param_2 = 0;
    uVar1 = *(uint *)((int)this + 0xc4);
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 != 0) {
      param_1 = 0;
      while ((iVar4 != *(int *)(*(int *)((int)this + 200) + param_1 * 8) ||
             (iVar2 != *(int *)(*(int *)((int)this + 200) + 4 + param_1 * 8)))) {
        bVar3 = bVar3 + 1;
        param_1 = (uint)bVar3;
        if (uVar1 <= param_1) {
          return 1;
        }
      }
      local_8 = 0;
      *param_2 = bVar3;
    }
  }
switchD_637fc56e_default:
  return local_8;
}


