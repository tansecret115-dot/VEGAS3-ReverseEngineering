/* Module: rmbe3260.dll
   Function: FUN_6604c890
   Address: 6604c890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6604c890(int param_1,uint param_2,int param_3,short *param_4,int param_5)

{
  int iVar1;
  
  *param_4 = 0;
  iVar1 = FUN_6604d1e0(param_1,param_2,param_3,param_4,param_5);
  return (-(uint)(iVar1 != -1) & 0x7fffbffb) + 0x80004005;
}


