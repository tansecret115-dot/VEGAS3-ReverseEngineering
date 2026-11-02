/* Module: sfs4rw.dll
   Function: FUN_0042ea10
   Address: 0042ea10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ea10(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == 0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_0042e850(param_1,"demograde",5,param_2,0,(uchar *)0x0);
    if (iVar1 < 0) {
      *param_2 = param_3;
      return iVar1;
    }
  }
  return iVar1;
}


