/* Module: rmbe3260.dll
   Function: FUN_66006dd0
   Address: 66006dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66006dd0(void *this,int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0x471) && (*(int *)(param_1 + 0x18) == 0x477)) {
    (**(code **)(**(int **)((int)this + 0x110) + 0x11c))(&DAT_6606c304);
    (**(code **)(**(int **)((int)this + 0x114) + 0x11c))(s_10000_6606c2fc);
    (**(code **)(**(int **)((int)this + 0x118) + 0x130))(0);
  }
  return;
}


