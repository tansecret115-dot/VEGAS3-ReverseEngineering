/* Module: stl2plg.dll
   Function: FUN_00452300
   Address: 00452300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452300(int *param_1,int param_2,uint param_3)

{
  FUN_00452350(param_1,(byte *)(param_1 + 0x45));
  if (((*(byte *)(param_1 + 0x45) & 0x20) == 0) &&
     (FUN_0044fa90(param_1,(undefined4 *)"unknown critical chunk"), param_2 == 0)) {
    return;
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  FUN_00450790(param_1,param_3);
  return;
}


