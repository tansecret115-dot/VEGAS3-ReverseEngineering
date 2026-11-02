/* Module: wmfdist2.exe
   Function: FUN_010069c6
   Address: 010069c6
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010069c6(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1[0x27] == 0) {
    if ((param_2 & 0xfffe) == 0xfffe) {
      param_2 = *(ushort *)((int)param_1 + 0x6a) - 1;
    }
    if (param_1[0x24] != param_2) {
      iVar1 = FUN_01007036(param_1);
      if (((iVar1 == 0) || (iVar1 = FUN_01006a22(param_1,param_2), iVar1 == 0)) ||
         (iVar1 = FUN_01006758(param_1), iVar1 == 0)) {
        return 0;
      }
      param_1[0xc] = 0;
    }
  }
  return 1;
}


