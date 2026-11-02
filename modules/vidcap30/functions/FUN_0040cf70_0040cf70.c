/* Module: vidcap30.exe
   Function: FUN_0040cf70
   Address: 0040cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040cf70(int param_1)

{
  int iVar1;
  
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x88,4,0x10,0x10,0,0,0,0);
  if (iVar1 < 0) {
    return -1;
  }
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x8c,0x48,2,1,4,0,0,0);
  return (-1 < iVar1) - 1;
}


