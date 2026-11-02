/* Module: rmbe3260.dll
   Function: FUN_6604b310
   Address: 6604b310
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6604b310(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(int *)((int)this + 0x227) != 0) && (*(int *)((int)this + 0x23f) != 0)) {
    if (*(code **)((int)this + 0x233) != (code *)0x0) {
      (**(code **)((int)this + 0x233))(*(int *)((int)this + 0x227),s_Ardubancel_Quazanga_6606e97c);
    }
    iVar1 = (**(code **)((int)this + 0x23f))(*(undefined4 *)((int)this + 0x227),param_1);
    if (iVar1 == 0) {
      *(short *)((int)this + 0x225) = (short)param_1;
    }
  }
  return iVar1;
}


