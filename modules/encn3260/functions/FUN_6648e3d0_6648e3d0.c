/* Module: encn3260.dll
   Function: FUN_6648e3d0
   Address: 6648e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648e3d0(void *this,ushort *param_1,int param_2)

{
  FUN_6648d4b0(this,param_1,param_2);
  *(ushort *)((int)this + 0x70) = *param_1;
  if ((short)param_1[10] < 0) {
    *(undefined1 *)((int)this + 0x7a) = 0x65;
  }
  else {
    *(char *)((int)this + 0x7a) = (char)param_1[10];
  }
  if (param_1 != (ushort *)0x0) {
    if (*(int *)(param_1 + 0xb) != 0) {
      *(int *)((int)this + 0x7b) = *(int *)(param_1 + 0xb);
      *(ushort *)((int)this + 0x7f) = param_1[0xd];
    }
    if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x12) != 0)) ||
       (((*(byte *)((int)this + 0x7a) < 0x60 || (0x7f < *(byte *)((int)this + 0x7a))) &&
        ((*(int *)(param_1 + 0xe) != 0 && (*(int *)(param_1 + 0x10) != 0)))))) {
      *(undefined4 *)((int)this + 0x85) = 0;
    }
  }
  return;
}


