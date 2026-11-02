/* Module: rmme3260.dll
   Function: FUN_662235b0
   Address: 662235b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662235b0(void *this,undefined1 *param_1,int *param_2)

{
  undefined1 *puVar1;
  
  *param_1 = (char)((uint)*(undefined4 *)this >> 0x18);
  param_1[1] = (char)((uint)*(undefined4 *)this >> 0x10);
  param_1[2] = (char)((uint)*(undefined4 *)this >> 8);
  param_1[3] = *(undefined1 *)this;
  param_1[4] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x18);
  param_1[5] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x10);
  param_1[6] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
  param_1[7] = *(undefined1 *)((int)this + 4);
  param_1[8] = *(undefined1 *)((int)this + 9);
  param_1[9] = *(undefined1 *)((int)this + 8);
  puVar1 = param_1 + 10;
  if (*(short *)((int)this + 8) == 0) {
    *puVar1 = (char)((uint)*(undefined4 *)((int)this + 10) >> 0x18);
    param_1[0xb] = (char)((uint)*(undefined4 *)((int)this + 10) >> 0x10);
    param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 10) >> 8);
    param_1[0xd] = *(undefined1 *)((int)this + 10);
    param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 0x18);
    param_1[0xf] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 0x10);
    param_1[0x10] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 8);
    param_1[0x11] = *(undefined1 *)((int)this + 0xe);
    puVar1 = param_1 + 0x12;
  }
  *param_2 = (int)puVar1 - (int)param_1;
  return;
}


