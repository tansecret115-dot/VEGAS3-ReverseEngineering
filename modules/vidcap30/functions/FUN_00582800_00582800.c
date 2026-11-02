/* Module: vidcap30.exe
   Function: FUN_00582800
   Address: 00582800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00582800(int param_1,undefined4 *param_2)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 4),0);
  if (DVar1 != 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return 1;
}


