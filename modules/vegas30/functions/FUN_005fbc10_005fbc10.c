/* Module: vegas30.exe
   Function: FUN_005fbc10
   Address: 005fbc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005fbc10(int param_1,undefined4 param_2,undefined4 param_3,WPARAM param_4,LPARAM param_5)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00647208) {
    PostMessageA(DAT_00647624,0x618,param_4,param_5);
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004585d0(*(int *)(param_1 + 8));
  }
  FUN_00573350(0,0,param_2,param_3);
  FUN_00428df0(0,0);
  iVar2 = FUN_005ec620();
  if (iVar2 != 0) {
    FUN_005b83b0(DAT_0064b138,1);
    iVar2 = 0;
    if ((DAT_0064b148 != 0) || (DAT_0064b148 = DAT_0064b14c, DAT_0064b14c != 0)) {
      iVar2 = *(int *)(DAT_0064b148 + 8);
    }
    DAT_0064b148 = 0;
    DAT_0064b14c = 0;
    if (iVar2 != 0) {
      FUN_005ed410(iVar2,0,0);
    }
    FUN_005b84d0(DAT_0064b138,1);
  }
  return 0;
}


