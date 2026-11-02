/* Module: mcplugrw.dll
   Function: FUN_0043b7e0
   Address: 0043b7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0043b7e0(void *this,int param_1,uchar *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x44) & 0x10) == 0) {
    iVar1 = FUN_0043c580(this,param_1,param_2);
    return iVar1;
  }
  if ((*(uint *)((int)this + 0x880) & 1) == 0) {
    iVar1 = FUN_0043c800(param_1,param_2);
    return iVar1;
  }
  return 0;
}


