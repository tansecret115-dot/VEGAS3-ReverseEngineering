/* Module: stl2plg.dll
   Function: FUN_004059c0
   Address: 004059c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004059c0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00418510(param_1,(int *)param_1[0x76],param_2,4,(uint *)(param_1 + 0x98),0,
                       (undefined *)0x0);
  FUN_004183f0(param_1);
  return -(uint)(iVar1 != 0) & 0x8004e00b;
}


