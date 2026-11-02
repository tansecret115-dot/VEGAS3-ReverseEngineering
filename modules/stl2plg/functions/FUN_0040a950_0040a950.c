/* Module: stl2plg.dll
   Function: FUN_0040a950
   Address: 0040a950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a950(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040a980(param_1);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    param_2[1] = *(undefined4 *)(param_1 + 0x44);
  }
  return;
}


