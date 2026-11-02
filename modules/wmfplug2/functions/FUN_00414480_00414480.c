/* Module: wmfplug2.dll
   Function: FUN_00414480
   Address: 00414480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414480(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_1);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_3);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_4);
          if (-1 < iVar1) {
            iVar1 = (**(code **)*param_1)(param_1,&DAT_0047c7f0,&stack0xfffffff4);
            if (-1 < iVar1) {
              iVar1 = (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,param_5);
            }
          }
        }
      }
    }
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return iVar1;
}


