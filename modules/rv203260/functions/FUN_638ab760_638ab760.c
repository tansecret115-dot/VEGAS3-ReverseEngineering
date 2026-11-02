/* Module: rv203260.dll
   Function: FUN_638ab760
   Address: 638ab760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638ab760(void *this,int *param_1)

{
  int iVar1;
  
  FUN_638a9950(this,2);
  iVar1 = *(int *)((int)this + 0x92) + 8;
  *param_1 = iVar1;
  if ((*(int *)((int)this + 0x10a) != 1) && (*(int *)((int)this + 0x2a8) != 0)) {
    *param_1 = iVar1 + *(int *)((int)this + 599) * 2;
  }
  return 0;
}


