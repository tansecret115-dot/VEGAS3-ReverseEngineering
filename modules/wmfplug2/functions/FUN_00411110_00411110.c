/* Module: wmfplug2.dll
   Function: FUN_00411110
   Address: 00411110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00411110(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0047c720;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_0047c5c8 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_0047c5cc + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 200000;
  *(undefined4 *)((int)this + 0x44) = 0x40;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xf0;
  *(undefined4 *)((int)this + 0x50) = 0x140;
  *(undefined ***)this = &PTR_LAB_0047c6e0;
  *(undefined4 *)((int)this + 4) = 1;
  if ((param_4 != 0) && (piVar1 = *(int **)(param_4 + 0x428), piVar1 != (int *)0x0)) {
    if (piVar1[0x12] != 0) {
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(piVar1[0x12] + 8);
      *(undefined4 *)((int)this + 0x50) =
           *(undefined4 *)(*(int *)(*(int *)(param_4 + 0x428) + 0x48) + 4);
      return;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(*piVar1 + 8);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(**(int **)(param_4 + 0x428) + 4);
    }
  }
  return;
}


