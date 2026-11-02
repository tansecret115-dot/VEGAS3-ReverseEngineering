/* Module: sfpublish.dll
   Function: FUN_00428100
   Address: 00428100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428100(uchar *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = s__I64d_0043fc5c;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
    if ((param_5 & 1) == 0) {
      pcVar2 = (&PTR_s__I64d_0043b4e8)[uVar1];
    }
    else {
      pcVar2 = (&PTR_s__I64d_0043b530)[uVar1];
    }
  }
  FUN_00427bb0(param_1,(int *)param_2,param_3,param_4,pcVar2,param_5);
  return;
}


