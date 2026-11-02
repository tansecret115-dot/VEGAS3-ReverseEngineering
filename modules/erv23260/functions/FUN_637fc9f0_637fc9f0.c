/* Module: erv23260.dll
   Function: FUN_637fc9f0
   Address: 637fc9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_637fc9f0(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x60) == 0) && (param_1 != 0)) {
    return false;
  }
  iVar1 = FUN_637fd680(this,0x11,1,7);
  return iVar1 != 0;
}


