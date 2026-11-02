/* Module: encn3260.dll
   Function: FUN_664b6070
   Address: 664b6070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6070(uint *param_1,uint *param_2,undefined4 *param_3)

{
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_1[1] != 0)) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) == 0) {
      *param_3 = *(undefined4 *)(param_2[0x10e] + 0x60);
    }
    return 0;
  }
  return 0x80070057;
}


