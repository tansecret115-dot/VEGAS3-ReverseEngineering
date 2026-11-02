/* Module: erv23260.dll
   Function: FUN_637f2a10
   Address: 637f2a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f2a10(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  iVar3 = (**(code **)(*(int *)this + 8))(param_1);
  if ((iVar3 == 0) && ((*(int *)((int)this + 0x68) != 0 || (*(int *)((int)this + 0x2c8) == 0)))) {
    if (*param_2 != 0xb) {
      return 8;
    }
    if ((((0x800 < uVar2) || (0x480 < uVar1)) || (uVar2 < 0x20)) ||
       (((uVar1 < 0x20 || ((uVar2 & 0xfffffffc) != uVar2)) || ((uVar1 & 0xfffffffc) != uVar1)))) {
      iVar3 = 7;
    }
  }
  return iVar3;
}


