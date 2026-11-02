/* Module: vegas30.exe
   Function: FUN_004ff0c0
   Address: 004ff0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ff0c0(undefined4 param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  LPCSTR local_4;
  
  FUN_0050aaa0(param_2 + 0x48,&local_4);
  FUN_0050aaa0(param_3 + 0x48,&param_2);
  iVar1 = FUN_00508580(&local_4);
  iVar2 = FUN_00508580(&param_2);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      return -1;
    }
  }
  else if (iVar2 == 0) {
    return 1;
  }
  iVar1 = lstrcmpA(local_4,param_2);
  return iVar1;
}


