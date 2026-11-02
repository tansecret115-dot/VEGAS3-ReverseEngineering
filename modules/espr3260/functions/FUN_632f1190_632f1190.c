/* Module: espr3260.dll
   Function: FUN_632f1190
   Address: 632f1190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_632f1190(void *this,int *param_1,int *param_2)

{
  FUN_632f9040(this,(uint)*(ushort *)((int)this + 0x3526c));
  if (*(int *)((int)this + 0x5254) == 1) {
    *(undefined4 *)((int)this + 0x5264) = 0x10;
  }
  else {
    *(undefined4 *)((int)this + 0x5264) = 8;
  }
  *param_1 = *(int *)((int)this + 0x5250) * *(int *)((int)this + 0x5264) *
             *(int *)((int)this + 0x5254);
  *param_2 = *(int *)((int)this + 0x5258) * *(int *)((int)this + 0x5264);
  FUN_632f46d0(this);
  return;
}


