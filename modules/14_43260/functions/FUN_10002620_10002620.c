/* Module: 14_43260.dll
   Function: FUN_10002620
   Address: 10002620
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_10002620(void *this,short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1 + *(int *)((int)this + 0x264);
  iVar2 = 0;
  for (; param_1 < psVar1; param_1 = param_1 + 1) {
    iVar2 = iVar2 + (int)*param_1 * (int)*param_1;
  }
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = FUN_100020e0(iVar2);
  return (int)(0x20000000 / (longlong)(iVar2 >> 8)) * param_2;
}


