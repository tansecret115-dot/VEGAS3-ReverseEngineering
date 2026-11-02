/* Module: erv23260.dll
   Function: FUN_638123c0
   Address: 638123c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638123c0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0x10;
  param_1[1] = *(int *)((int)this + 0x118) + -0x10;
  param_1[2] = 0x10 - (param_2 + -1) * *(int *)((int)this + 0x118);
  param_1[3] = (0x11 - param_2) * *(int *)((int)this + 0x118) + *(int *)((int)this + 0x14) * -0x10 +
               0x10;
  param_1[4] = *(undefined4 *)((int)this + 0x118);
  param_1[5] = 0xdeadbeef;
  param_1[6] = 0xdeadbeef;
  param_1[7] = 0xdeadbeef;
  param_1[8] = 0xfffffff8;
  param_1[9] = 8;
  param_1[10] = 0xfffffff8;
  iVar1 = *(int *)((int)this + 0x118);
  uVar2 = *(uint *)((int)this + 0x14);
  param_1[0xc] = 0;
  param_1[0xd] = 0xdeadbeef;
  param_1[0xe] = 0xdeadbeef;
  param_1[0xb] = (uVar2 & 0xfffffff) * 8 - (iVar1 * 8 + 8);
  param_1[0xf] = 0xdeadbeef;
  return;
}


