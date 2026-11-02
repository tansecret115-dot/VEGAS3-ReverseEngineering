/* Module: vegas30.exe
   Function: FUN_0057cc80
   Address: 0057cc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057cc80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  LPVOID pvVar4;
  int iVar5;
  HGLOBAL local_10;
  short local_c [2];
  undefined4 local_8;
  undefined2 local_4;
  
  iVar5 = 0;
  local_4 = 0;
  local_8 = 1;
  piVar2 = param_1 + 0x2c;
  piVar1 = param_1 + 5;
  do {
    sVar3 = FUN_0057d600(piVar1,piVar2,2,0x104,1,&local_10);
    if (sVar3 != 3) {
      if (sVar3 != 6) {
        sVar3 = FUN_0057d600(piVar1,0,1,8,1,local_c);
        if ((sVar3 != 0) || (local_c[0] != 0)) {
          iVar5 = -0x7fffbffb;
        }
        sVar3 = FUN_0057d600(piVar1,piVar2,1,5,0x701,&local_8);
        if (sVar3 != 0) {
          return iVar5;
        }
        FUN_0057d600(piVar1,piVar2,1,5,7,&local_8);
        return iVar5;
      }
      pvVar4 = GlobalLock(local_10);
      if (pvVar4 != (LPVOID)0x0) {
        iVar5 = (**(code **)(*param_1 + 4))(pvVar4);
        GlobalUnlock(local_10);
        if (iVar5 < 0) {
          return iVar5;
        }
      }
    }
    sVar3 = FUN_0057d600(piVar1,piVar2,1,5,0x701,&local_8);
    if (sVar3 != 0) {
      return -0x7fffbffb;
    }
  } while ((short)local_8 != 0);
  return iVar5;
}


