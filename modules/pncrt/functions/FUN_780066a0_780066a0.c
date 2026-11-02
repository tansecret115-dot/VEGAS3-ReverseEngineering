/* Module: pncrt.dll
   Function: FUN_780066a0
   Address: 780066a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_780066a0(void *this,undefined4 *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  uint local_4;
  
  uVar3 = *(uint *)((int)this + 4);
  uVar1 = local_4 ^ ((int)(uVar3 << 0x1c) >> 0x1c ^ local_4) & 0xf;
  uVar1 = uVar1 ^ (uVar1 ^ uVar3) & 0x10;
  uVar1 = uVar1 ^ (uVar1 ^ uVar3) & 0x20;
  local_4 = uVar1 ^ (uVar1 ^ uVar3) & 0x40;
  local_8 = *(undefined4 *)this;
  iVar2 = DName::isEmpty((DName *)&local_8);
  if (iVar2 == 0) {
    FUN_78006950(&local_8,param_2);
  }
  else {
    FUN_78006b50(&local_8,param_2);
  }
  uVar3 = ((int)(local_4 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar3 = (local_4 ^ uVar3) & 0x10 ^ uVar3;
  uVar3 = (local_4 ^ uVar3) & 0x20 ^ uVar3;
  param_1[1] = (local_4 ^ uVar3) & 0x40 ^ uVar3;
  *param_1 = local_8;
  return;
}


