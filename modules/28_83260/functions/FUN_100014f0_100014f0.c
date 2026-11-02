/* Module: 28_83260.dll
   Function: FUN_100014f0
   Address: 100014f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_100014f0(void *this,int *param_1)

{
  int iVar1;
  
  if (((*param_1 == 8000) && ((short)param_1[1] == 0x10)) && (*(short *)((int)param_1 + 6) == 1)) {
    iVar1 = FUN_10006310(this,(undefined4 *)((int)this + 0xc),(undefined4 *)((int)this + 8),0);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


