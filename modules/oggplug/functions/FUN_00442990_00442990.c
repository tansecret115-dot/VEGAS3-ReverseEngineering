/* Module: oggplug.dll
   Function: FUN_00442990
   Address: 00442990
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00442990(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < (int)param_3) {
    param_3 = param_3 + param_1[2];
  }
  while( true ) {
    while( true ) {
      if (0 < (int)param_3) {
        if ((int)param_3 >> 0x1f < param_1[3]) {
          return 0xffffffff;
        }
        if (((int)param_3 >> 0x1f <= param_1[3]) && (param_3 <= (uint)param_1[2])) {
          return 0xffffffff;
        }
      }
      uVar2 = FUN_004416d0(param_1 + 6,param_2);
      if (-1 < (int)uVar2) break;
      uVar1 = param_1[2];
      param_1[2] = uVar1 - uVar2;
      param_1[3] = (param_1[3] - ((int)uVar2 >> 0x1f)) - (uint)(uVar1 < uVar2);
    }
    if (uVar2 != 0) {
      uVar1 = param_1[2];
      param_1[2] = uVar1 + uVar2;
      param_1[3] = param_1[3] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar1,uVar2);
      return uVar1;
    }
    if (param_3 == 0) break;
    iVar3 = FUN_00442a30(param_1);
    if (iVar3 == 0) {
      return 0xfffffffe;
    }
    if (iVar3 < 0) {
      return 0xffffff80;
    }
  }
  return 0xffffffff;
}


