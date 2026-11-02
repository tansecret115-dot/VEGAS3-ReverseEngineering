/* Module: sfpublish.dll
   Function: FUN_00420620
   Address: 00420620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00420620(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      return 0;
    }
    DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 0x2c),param_1);
    if (DVar1 == 0) {
      return 0;
    }
    if (DVar1 == 0x102) {
      return 0x8004e02c;
    }
  }
  return 0x80004005;
}


