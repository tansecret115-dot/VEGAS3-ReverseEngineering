/* Module: sfxpfx1.dll
   Function: FUN_5c97b320
   Address: 5c97b320
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5c97b320(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *local_8;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return false;
  }
  local_8 = (int *)0x0;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_5c9922e0,&local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar2 != 0;
}


