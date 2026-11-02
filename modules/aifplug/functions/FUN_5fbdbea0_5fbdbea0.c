/* Module: aifplug.dll
   Function: FUN_5fbdbea0
   Address: 5fbdbea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbdbea0(HANDLE param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_5fbdbc60(param_1,(undefined1 *)param_2);
  if (-1 < iVar1) {
    if (*param_2 != 0x464f524d) {
      return -0x7ffb1ff5;
    }
    iVar1 = FUN_5fbdbcb0(param_1,param_3);
  }
  return iVar1;
}


