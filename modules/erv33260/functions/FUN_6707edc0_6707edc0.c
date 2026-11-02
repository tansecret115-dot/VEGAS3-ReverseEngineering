/* Module: erv33260.dll
   Function: FUN_6707edc0
   Address: 6707edc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6707edc0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0xb;
  if (DAT_6718d870 == 0) {
    iVar1 = *(int *)((int)this + 0x68);
  }
  else if (*(int *)((int)this + 0xcc) == 2) {
    iVar1 = *(int *)((int)this + 0x124);
  }
  else {
    iVar1 = *(int *)((int)this + 0x60);
  }
  DAT_6718d870 = 1;
  param_1[1] = *(undefined4 *)((int)this + 0x94);
  param_1[2] = *(undefined4 *)((int)this + 0x98);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = param_1[1];
  param_1[4] = param_1[2];
  param_1[0xd] = *(undefined4 *)(iVar1 + 4);
  param_1[0xf] = *(undefined4 *)(iVar1 + 0xc);
  param_1[0xe] = *(undefined4 *)(iVar1 + 8);
  param_1[8] = *(undefined4 *)(iVar1 + 0x10);
  param_1[9] = *(undefined4 *)(iVar1 + 0x10);
  param_1[10] = *(undefined4 *)(iVar1 + 0x10);
  return 0;
}


