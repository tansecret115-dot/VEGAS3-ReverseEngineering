/* Module: sfcdi.dll
   Function: FUN_5bf311a0
   Address: 5bf311a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf311a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x50;
  iVar1 = InternetConnectA(*(undefined4 *)(param_1 + 0x104),param_3,0x50,param_4,0,3,0,0);
  *piVar2 = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f14) + 0x8004e0ec;
}


