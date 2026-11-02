/* Module: sfppack2.dll
   Function: FUN_5cd4010b
   Address: 5cd4010b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_5cd4010b(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5cd400b2(this,param_1);
  return (bool)('\x01' - (iVar1 != 0));
}


