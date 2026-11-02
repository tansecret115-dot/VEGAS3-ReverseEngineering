/* Module: vegas30.exe
   Function: FUN_005b4660
   Address: 005b4660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b4660(int *param_1)

{
  int iVar1;
  
  if ((*param_1 == 0) &&
     (iVar1 = _SfList_CreateExZ_32(param_1,4,0x10,0x10,0x40000004,0,0,0), iVar1 < 0)) {
    return;
  }
  _SfList_InsertList_16(*param_1,0xffffffff,&stack0x00000008,1);
  return;
}


