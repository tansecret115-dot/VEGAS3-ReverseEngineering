/* Module: sfcdi.dll
   Function: FUN_5bf31160
   Address: 5bf31160
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf31160(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  iVar1 = InternetOpenUrlA(*(undefined4 *)(param_1 + 0x104),param_3,0,0,param_4,0);
  *piVar2 = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ffb1f13) + 0x8004e0ed;
}


