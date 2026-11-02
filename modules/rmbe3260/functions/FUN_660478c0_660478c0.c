/* Module: rmbe3260.dll
   Function: FUN_660478c0
   Address: 660478c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_660478c0(void *this,char *param_1,undefined2 param_2,ushort param_3,uint param_4,int param_5)

{
  FUN_660475a0(param_1,(char *)((int)this + 0x49),5);
  *(undefined2 *)((int)this + 0x52) = param_2;
  *(ushort *)((int)this + 0x50) = param_3;
  *(short *)((int)this + 0x4e) =
       (short)((ulonglong)(param_4 & 0xffff) / (ulonglong)(longlong)(int)(uint)param_3);
  if (param_5 != 0) {
    *(undefined1 *)((int)this + 0x54) = 1;
    *(int *)((int)this + 0x55) = param_5;
    FUN_660470d0((int)this);
    return;
  }
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x55) = 0;
  FUN_660470d0((int)this);
  return;
}


