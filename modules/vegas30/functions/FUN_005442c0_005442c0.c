/* Module: vegas30.exe
   Function: FUN_005442c0
   Address: 005442c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005442c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  GetCurrentThreadId();
  if (*(int *)(param_2 + 0xc) == 1) {
    _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xc),0,param_2,1);
    return 0;
  }
  uVar1 = _SfList_InsertList_16
                    (*(undefined4 **)(param_1 + 0xc),**(undefined4 **)(param_1 + 0xc),param_2,1);
  return uVar1;
}


