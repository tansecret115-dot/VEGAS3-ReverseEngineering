/* Module: rmbe3260.dll
   Function: FUN_660475a0
   Address: 660475a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_660475a0(char *param_1,char *param_2,ushort param_3)

{
  uint uVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if (param_1 == (char *)0x0) {
    *param_2 = '\0';
    return;
  }
  uVar1 = (uint)param_3;
  strncpy(param_2,param_1,uVar1 - 1);
  param_2[uVar1 - 1] = '\0';
  if (1 < param_3) {
    bVar2 = FUN_660522b0(CONCAT31((int3)((uint)extraout_EDX >> 8),param_2[uVar1 - 2]));
    if (CONCAT31(extraout_var,bVar2) != 0) {
      param_2[uVar1 - 2] = '\0';
    }
  }
  return;
}


