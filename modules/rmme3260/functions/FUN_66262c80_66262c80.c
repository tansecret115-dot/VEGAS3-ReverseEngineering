/* Module: rmme3260.dll
   Function: FUN_66262c80
   Address: 66262c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66262c80(void *this,byte *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_1 == (byte *)0x0) {
    return 0x10;
  }
  iVar1 = FUN_66252960(*(void **)((int)this + 8),param_1,(int *)&local_8);
  if (iVar1 == 0) {
    return 1;
  }
  *param_2 = *local_8;
  return 0;
}


