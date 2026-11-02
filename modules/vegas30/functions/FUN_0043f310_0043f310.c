/* Module: vegas30.exe
   Function: FUN_0043f310
   Address: 0043f310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043f310(HWND param_1,HSFCD__ *param_2,int param_3)

{
  int *piVar1;
  WPARAM WVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_70 [12];
  undefined4 local_64 [14];
  uint local_2c;
  uint local_28;
  
  local_64[0] = 100;
  cdr_GetDeviceCaps(param_2,(cdrcaps_tag *)local_64);
  uVar4 = local_28;
  if (param_3 == 0) {
    uVar4 = local_2c;
  }
  SendMessageA(param_1,0x14b,0,0);
  if (DAT_0063dd60 != 0) {
    iVar3 = 0;
    do {
      if ((uVar4 & *(uint *)((int)&DAT_0063dd80 + iVar3)) != 0) {
        FUN_0043f3e0(*(uint *)((int)&DAT_0063dd80 + iVar3),local_70);
        WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)local_70);
        SendMessageA(param_1,0x151,WVar2,*(LPARAM *)((int)&DAT_0063dd80 + iVar3));
      }
      piVar1 = (int *)((int)&DAT_0063dd64 + iVar3);
      iVar3 = iVar3 + 4;
    } while (*piVar1 != 0);
  }
  FUN_0043f3e0(0xffff,local_70);
  WVar2 = SendMessageA(param_1,0x143,0,(LPARAM)local_70);
  SendMessageA(param_1,0x151,WVar2,0xffff);
  return;
}


