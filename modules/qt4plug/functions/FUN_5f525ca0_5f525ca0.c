/* Module: qt4plug.dll
   Function: FUN_5f525ca0
   Address: 5f525ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f525ca0(void *this,undefined2 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f525d20(this,&param_2,param_2);
  if (-1 < iVar1) {
    *param_1 = (undefined2)param_2;
    iVar1 = 0;
  }
  return iVar1;
}


