/* Module: g2plug.dll
   Function: FUN_5f833a50
   Address: 5f833a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f833a50(short *param_1,short *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 != (short *)0x0) {
    iVar1 = FUN_5f833a90(param_1,param_2,param_3);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      return 0;
    }
  }
  return 1;
}


