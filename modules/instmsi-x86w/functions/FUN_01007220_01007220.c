/* Module: InstMsi-x86w.exe
   Function: FUN_01007220
   Address: 01007220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01007220(undefined4 *param_1)

{
  int iVar1;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
  case 0xf:
    break;
  case 1:
    iVar1 = FUN_0100599f();
    if (iVar1 != 0) {
      FUN_01007480((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_0100599f();
    if (iVar1 != 0) {
      FUN_01007480((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 3:
    iVar1 = FUN_010076a0((int *)param_1[0xd]);
    if (iVar1 != 0) {
      FUN_01007480((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  default:
    FUN_01007480((undefined4 *)*param_1,6,0);
    return 0;
  }
  return 1;
}


