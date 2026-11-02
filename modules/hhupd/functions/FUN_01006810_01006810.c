/* Module: hhupd.exe
   Function: FUN_01006810
   Address: 01006810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006810(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1[0x27] != 0) {
    return 1;
  }
  if ((param_2 & 0xfffe) == 0xfffe) {
    param_2 = *(ushort *)((int)param_1 + 0x6a) - 1;
  }
  if (param_1[0x24] == param_2) {
    return 1;
  }
  iVar1 = FUN_01007110(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_01006890(param_1,param_2), iVar1 != 0)) {
    iVar1 = FUN_010064e0(param_1);
    if (iVar1 != 0) {
      param_1[0xc] = 0;
      return 1;
    }
    return 0;
  }
  return 0;
}


