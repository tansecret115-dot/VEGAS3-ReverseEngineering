/* Module: encn3260.dll
   Function: FUN_66495960
   Address: 66495960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66495960(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (param_2 & 0xffff) - param_1;
  if (iVar1 < 0) {
    iVar1 = (*(int *)((int)this + 0x66) - param_1) + (param_2 & 0xffff);
  }
  return iVar1;
}


