/* Module: hhupd.exe
   Function: FUN_01006d60
   Address: 01006d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006d60(undefined4 *param_1)

{
  int iVar1;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
    break;
  case 1:
    iVar1 = FUN_0100595a();
    if (iVar1 != 0) {
      FUN_01007370((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_0100595a();
    if (iVar1 != 0) {
      FUN_01007370((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 3:
    iVar1 = FUN_010075c0((int *)param_1[0xd]);
    if (iVar1 != 0) {
      FUN_01007370((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  default:
    FUN_01007370((undefined4 *)*param_1,6,0);
    return 0;
  case 0xf:
    return 1;
  }
  (*(code *)param_1[1])(param_1[0xf]);
  (*(code *)param_1[1])(param_1[0x10]);
  return 1;
}


