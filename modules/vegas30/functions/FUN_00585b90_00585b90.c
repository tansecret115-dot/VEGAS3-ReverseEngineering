/* Module: vegas30.exe
   Function: FUN_00585b90
   Address: 00585b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00585b90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(puVar1);
    if (-1 < iVar2) {
      uVar3 = FUN_00585b60(puVar1,unaff_retaddr);
    }
    (**(code **)*puVar1)(1);
  }
  return uVar3;
}


