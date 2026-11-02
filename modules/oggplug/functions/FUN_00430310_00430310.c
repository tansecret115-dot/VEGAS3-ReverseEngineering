/* Module: oggplug.dll
   Function: FUN_00430310
   Address: 00430310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_00430310(uint *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[7];
  if (piVar1 == (int *)0x0) {
    return 0xffffff7f;
  }
  uVar2 = FUN_00442100(param_2,0x20);
  *param_1 = uVar2;
  if (uVar2 != 0) {
    return 0xffffff7a;
  }
  uVar2 = FUN_00442100(param_2,8);
  param_1[1] = uVar2;
  uVar2 = FUN_00442100(param_2,0x20);
  param_1[2] = uVar2;
  uVar2 = FUN_00442100(param_2,0x20);
  param_1[3] = uVar2;
  uVar2 = FUN_00442100(param_2,0x20);
  param_1[4] = uVar2;
  uVar2 = FUN_00442100(param_2,0x20);
  param_1[5] = uVar2;
  uVar2 = FUN_00442100(param_2,4);
  *piVar1 = 1 << ((byte)uVar2 & 0x1f);
  uVar2 = FUN_00442100(param_2,4);
  iVar3 = 1 << ((byte)uVar2 & 0x1f);
  piVar1[1] = iVar3;
  if ((((0 < (int)param_1[2]) && (0 < (int)param_1[1])) && (7 < *piVar1)) && (*piVar1 <= iVar3)) {
    uVar2 = FUN_00442100(param_2,1);
    if (uVar2 == 1) {
      return 0;
    }
  }
  FUN_00430070(param_1);
  return 0xffffff7b;
}


