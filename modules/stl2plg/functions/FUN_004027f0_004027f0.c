/* Module: stl2plg.dll
   Function: FUN_004027f0
   Address: 004027f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004027f0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004027e0(this,param_1);
  if (-1 < iVar1) {
    *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  }
  return;
}


