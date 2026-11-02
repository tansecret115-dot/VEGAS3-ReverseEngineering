/* Module: rmme3260.dll
   Function: FUN_662572d0
   Address: 662572d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_662572d0(void *this,DWORD param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)((int)this + 4),param_1);
  return -(uint)(DVar1 != 0) & 0x80004005;
}


