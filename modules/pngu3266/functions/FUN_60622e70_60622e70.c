/* Module: pngu3266.dll
   Function: FUN_60622e70
   Address: 60622e70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_60622e70(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),param_1);
  return -(uint)(DVar1 != 0) & 0x80004005;
}


