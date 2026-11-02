/* Module: vegas30.exe
   Function: FUN_004028b0
   Address: 004028b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004028b0(uint param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  pMem = (LPCVOID)FUN_00401f70(param_1,&param_1);
  if (pMem != (LPCVOID)0x0) {
    uVar2 = (uint)(param_2 != 0);
    if (uVar2 < param_1) {
      uVar3 = FUN_00402470(pMem,uVar2,param_1 - uVar2);
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    if ((DAT_0064b514 != 0) || (((byte)DAT_0064761c & 0x20) != 0)) {
      FUN_00536b50();
    }
  }
  return uVar3;
}


