/* Module: encn3260.dll
   Function: FUN_6648d4b0
   Address: 6648d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648d4b0(void *this,ushort *param_1,int param_2)

{
  void *this_00;
  int *piVar1;
  
  if (param_1 != (ushort *)0x0) {
    if (*(int *)((int)this + 0x2c) == 0) {
      this_00 = operator_new(0x20);
      if (this_00 == (void *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = FUN_6648cf90(this_00,this);
      }
      *(int **)((int)this + 0x2c) = piVar1;
      *piVar1 = *piVar1 + 1;
    }
    FUN_6648d090(*(void **)((int)this + 0x2c),*param_1,*(undefined4 *)(param_1 + 1),
                 *(int *)((int)this + 0x30),CONCAT22((short)((uint)param_2 >> 0x10),param_1[10]),
                 *(int *)((int)this + 4),*(undefined4 *)((int)this + 0x58),param_2);
  }
  return;
}


