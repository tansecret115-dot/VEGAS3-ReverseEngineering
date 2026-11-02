/* Module: vegas30.exe
   Function: FUN_00429810
   Address: 00429810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429810(HWND param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  WPARAM WVar2;
  int iVar3;
  undefined1 local_28 [40];
  
  SendMessageA(param_1,0x14b,0,0);
  if (DAT_0063dad8 != 0) {
    iVar3 = 0;
    do {
      if ((param_2 & *(uint *)((int)&DAT_0063daf8 + iVar3)) != 0) {
        FUN_004297b0(*(uint *)((int)&DAT_0063daf8 + iVar3),local_28);
        WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)local_28);
        SendMessageA(param_1,0x151,WVar2,*(LPARAM *)((int)&DAT_0063daf8 + iVar3));
      }
      piVar1 = (int *)((int)&DAT_0063dadc + iVar3);
      iVar3 = iVar3 + 4;
    } while (*piVar1 != 0);
  }
  FUN_004297b0(0xffff,local_28);
  WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)local_28);
  SendMessageA(param_1,0x151,WVar2,0xffff);
  FUN_00429640(param_1,param_3);
  return;
}


