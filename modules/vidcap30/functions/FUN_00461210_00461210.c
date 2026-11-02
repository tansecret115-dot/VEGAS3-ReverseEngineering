/* Module: vidcap30.exe
   Function: FUN_00461210
   Address: 00461210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00461210(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = -0x7ffb1ff6;
  iVar2 = (-(uint)(param_2 != 0) & 0xfffffffe) + 0xc;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_00461260(param_1,iVar3,param_3);
      if (-1 < iVar1) {
        return iVar1;
      }
      param_1 = param_1 + 12000;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return iVar1;
}


