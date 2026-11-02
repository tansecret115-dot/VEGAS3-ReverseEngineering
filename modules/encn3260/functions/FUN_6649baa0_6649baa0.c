/* Module: encn3260.dll
   Function: FUN_6649baa0
   Address: 6649baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649baa0(int param_1,uint param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_664be5b0(param_1,param_2 & 0xffff,param_3);
  *param_4 = (short)iVar1;
  return 0;
}


