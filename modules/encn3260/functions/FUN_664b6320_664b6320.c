/* Module: encn3260.dll
   Function: FUN_664b6320
   Address: 664b6320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6320(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 <= (int)param_2[1])) &&
     (((param_1[1] != 0 && ((*param_1 & 0x100) != 0)) && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) == 0) {
      if (param_2[param_3 + 0x10e] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)param_2[0x10e] + 0x80))((int *)param_2[0x10e],param_2[0x110]);
      if (iVar1 == 0) {
        param_2[0x110] = 0;
        return 0;
      }
    }
    return 0x80004005;
  }
  return 0x80070057;
}


