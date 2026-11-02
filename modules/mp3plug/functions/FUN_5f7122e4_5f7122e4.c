/* Module: mp3plug.dll
   Function: FUN_5f7122e4
   Address: 5f7122e4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f7122e4(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0xac);
  if (*(int *)((int)this + 0xca38) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0xa8);
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(int *)((int)this + 0x20) =
       *(int *)((int)this + 0xac) >> ((byte)*(undefined4 *)((int)this + 0xca30) & 0x1f);
  if (*(int *)((int)this + 0xca34) == 0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 8;
  }
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if (param_1 != 0x41010001) {
    if (param_1 == 0x41010002) {
      *(undefined4 *)((int)this + 0x34) = 1;
    }
    return;
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  return;
}


