/* Module: rmme3260.dll
   Function: FUN_66232120
   Address: 66232120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66232120(int param_1,uint param_2,int param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_662552d0(param_1,param_2 & 0xffff,param_3);
  *param_4 = (short)iVar1;
  return 0;
}


