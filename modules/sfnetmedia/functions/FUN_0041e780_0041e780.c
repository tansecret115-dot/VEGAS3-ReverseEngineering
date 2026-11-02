/* Module: sfnetmedia.dll
   Function: FUN_0041e780
   Address: 0041e780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0041e780(int *param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  int local_4;
  
  iVar1 = 0;
  local_4 = 0;
  *param_3 = 0;
  if ((param_1 != (int *)0x0) && (*param_2 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    if (&local_4 != (int *)0x0) {
      iVar1 = FUN_0041e730(&local_4);
      (**(code **)(local_4 + 8))(&local_4);
    }
  }
  return iVar1;
}


