/* Module: vidcap30.exe
   Function: _SfList_SetThreadOwner@8
   Address: 00483330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_SetThreadOwner_8(int param_1,int param_2)

{
  DWORD DVar1;
  
                    /* 0x83330  516  _SfList_SetThreadOwner@8 */
  if (param_2 == 0) {
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x34) = DVar1;
    return 0;
  }
  *(int *)(param_1 + 0x34) = param_2;
  return 0;
}


