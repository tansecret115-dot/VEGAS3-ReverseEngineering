/* Module: rmme3260.dll
   Function: FUN_66248dc0
   Address: 66248dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66248dc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1198) != 0) {
    iVar2 = FUN_6624b560((uint *)(param_1 + 0x48),(uint *)(param_1 + 0xd40));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1198) = 0;
      return 0;
    }
    uVar1 = 0x80004005;
  }
  return uVar1;
}


