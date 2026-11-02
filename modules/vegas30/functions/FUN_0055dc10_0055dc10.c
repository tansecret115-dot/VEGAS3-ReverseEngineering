/* Module: vegas30.exe
   Function: FUN_0055dc10
   Address: 0055dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055dc10(undefined4 param_1,char *param_2,LPCSTR param_3)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetFileAttributesA(param_3);
  if ((DVar1 != 0xffffffff) && ((DVar1 & 0x10) != 0)) {
    iVar2 = SfAddMRUNames(param_2,param_3);
    if (iVar2 != 0) {
      FUN_0055dc50(param_2,param_1);
    }
  }
  return;
}


