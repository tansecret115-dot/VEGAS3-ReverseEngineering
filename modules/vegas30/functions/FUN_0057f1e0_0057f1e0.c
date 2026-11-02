/* Module: vegas30.exe
   Function: FUN_0057f1e0
   Address: 0057f1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057f1e0(int *param_1)

{
  SHORT SVar1;
  int iVar2;
  undefined4 *puVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  
  FUN_0057eec0();
  SVar1 = GetAsyncKeyState(0x10);
  if ((SVar1 < 0) && (SVar1 = GetAsyncKeyState(0x11), SVar1 < 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  param_1[0x13] = iVar2;
  puVar3 = (undefined4 *)FUN_00584830(0);
  _SfMsgBoxSetAppData_12(param_1[2],0,*puVar3);
  iVar2 = FUN_005845a0();
  if (-1 < iVar2) {
    iVar2 = FUN_00584970();
    if (-1 < iVar2) {
      hMem = GlobalAlloc(0x40,0x20);
      pvVar4 = GlobalLock(hMem);
      if (pvVar4 == (LPVOID)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_00585200();
      }
      param_1[0x12] = iVar5;
      if (((iVar5 != 0) && (iVar2 = FUN_00585230(), -1 < iVar2)) &&
         (iVar2 = (**(code **)(*(int *)param_1[0x12] + 0xc))(), -1 < iVar2)) {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        if (-1 < iVar2) {
          return iVar2;
        }
        FUN_00584a20();
      }
    }
    FUN_005847a0();
  }
  return iVar2;
}


