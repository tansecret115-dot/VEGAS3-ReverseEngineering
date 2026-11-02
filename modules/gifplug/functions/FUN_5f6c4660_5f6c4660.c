/* Module: gifplug.dll
   Function: FUN_5f6c4660
   Address: 5f6c4660
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f6c4660(void *this,short param_1)

{
  short sVar1;
  
  *(short *)((int)this + 0x335) = param_1 + 1;
  *(undefined4 *)((int)this + 0x44f) = 1;
  *(undefined4 *)((int)this + 0x453) = 3;
  *(undefined4 *)((int)this + 0x457) = 7;
  *(undefined4 *)((int)this + 0x45b) = 0xf;
  *(short *)((int)this + 0x33d) = (short)(1 << ((byte)(param_1 + 1) & 0x1f));
  *(undefined4 *)((int)this + 0x45f) = 0x1f;
  *(undefined4 *)((int)this + 0x463) = 0x3f;
  *(undefined4 *)((int)this + 0x467) = 0x7f;
  *(undefined4 *)((int)this + 0x46b) = 0xff;
  *(undefined4 *)((int)this + 0x46f) = 0x1ff;
  *(undefined4 *)((int)this + 0x473) = 0x3ff;
  sVar1 = (short)(1 << ((byte)param_1 & 0x1f));
  *(short *)((int)this + 0x337) = sVar1;
  *(undefined4 *)((int)this + 0x477) = 0x7ff;
  *(undefined4 *)((int)this + 0x47b) = 0xfff;
  *(short *)((int)this + 0x339) = sVar1 + 1;
  *(short *)((int)this + 0x33b) = sVar1 + 2;
  *(short *)((int)this + 0x33f) = sVar1 + 2;
  *(undefined2 *)((int)this + 0x343) = 0;
  *(undefined2 *)((int)this + 0x341) = 0;
  *(undefined4 *)((int)this + 1099) = 0;
  return (uint)this & 0xffff0000;
}


