/* Module: rmme3260.dll
   Function: FUN_6624b620
   Address: 6624b620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624b620(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && ((*param_1 & 0x100) != 0)) &&
     ((*param_1 & 1) != 0)) {
    *param_2 = 0;
    if ((param_1[0x2e0] & 0x800) != 0) {
      *param_2 = 1;
    }
    if ((param_1[0x2e0] & 0x4000) != 0) {
      *param_2 = *param_2 | 2;
    }
    if ((param_1[0x2e0] & 0x100) != 0) {
      *param_2 = *param_2 | 4;
    }
    *param_3 = param_1[0x301];
    *param_4 = param_1[0x302];
    return 0;
  }
  return 0x80070057;
}


