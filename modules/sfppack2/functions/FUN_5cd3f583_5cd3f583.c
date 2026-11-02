/* Module: sfppack2.dll
   Function: FUN_5cd3f583
   Address: 5cd3f583
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd3f583(void *this,undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),0);
  if (DVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)((int)this + 0xc);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


