/* Module: extmondrv.dll
   Function: FUN_00409500
   Address: 00409500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00409500(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_0044e838 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_0044e83c + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_LAB_0044e858;
  return;
}


