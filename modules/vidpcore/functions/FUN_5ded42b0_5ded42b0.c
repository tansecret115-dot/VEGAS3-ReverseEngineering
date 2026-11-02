/* Module: vidpcore.dll
   Function: FUN_5ded42b0
   Address: 5ded42b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5ded42b0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  DWORD DVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = LocalAlloc(0x40,0x20), param_1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[5] = param_4;
  param_1[6] = 0x80;
  param_1[3] = 0;
  iVar2 = 1;
  while (param_3 = param_3 >> 1, param_3 != 0) {
    iVar2 = iVar2 + 1;
  }
  DVar1 = GetTickCount();
  param_1[4] = iVar2;
  param_1[7] = DVar1 + param_1[6];
  return param_1;
}


