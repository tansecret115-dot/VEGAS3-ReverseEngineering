/* Module: vegas30.exe
   Function: FUN_0043dce0
   Address: 0043dce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043dce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCSTR lpString1;
  int iVar1;
  undefined1 local_20 [32];
  
  FUN_005fb140(1);
  FUN_0043df40(param_1);
  lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_2);
  iVar1 = lstrcmpiA(lpString1,".cda");
  if (iVar1 != 0) {
    return -0x7ffb1fea;
  }
  iVar1 = FUN_0043db40(param_2,local_20);
  if (iVar1 == 0) {
    iVar1 = FUN_0043d9a0(param_1,local_20,param_3,param_4);
  }
  return iVar1;
}


