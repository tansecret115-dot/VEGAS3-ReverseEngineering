/* Module: extmondrv.dll
   Function: FUN_00409550
   Address: 00409550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00409550(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_0044e838 + param_3 * 8);
  uVar1 = *(undefined4 *)(&DAT_0044e83c + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  *(undefined ***)this = &PTR_LAB_0044e858;
  FUN_004121e0(DAT_0045b190,param_5);
  return this;
}


