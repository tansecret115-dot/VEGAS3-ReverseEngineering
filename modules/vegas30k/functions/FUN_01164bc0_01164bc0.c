/* Module: vegas30k.dll
   Function: FUN_01164bc0
   Address: 01164bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01164bc0(int param_1,HANDLE param_2)

{
  DWORD DVar1;
  DWORD local_4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(HANDLE *)(param_1 + 4) = param_2;
  DVar1 = GetFileSize(param_2,&local_4);
  *(DWORD *)(param_1 + 0x10) = DVar1;
  *(DWORD *)(param_1 + 0x14) = local_4;
  return 0;
}


