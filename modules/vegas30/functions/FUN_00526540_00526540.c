/* Module: vegas30.exe
   Function: FUN_00526540
   Address: 00526540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526540(int param_1,LPSTR param_2,int param_3)

{
  LRESULT LVar1;
  int iVar2;
  LPARAM local_120;
  undefined1 local_11c [16];
  CHAR local_10c [260];
  uint local_8;
  
  _SfList_CreateExZ_32(&local_120,4,10,0x40,2,0,0,0);
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0xb0),0x605,0,local_120);
  iVar2 = 0;
  if (0 < LVar1) {
    do {
      FUN_00508ba0(*(undefined4 *)(*(int *)(*(int *)(local_120 + 8) + iVar2 * 4) + 0x20c),local_11c)
      ;
      if (((local_8 & 2) == 0) && ((~(local_8 >> 5) & local_8 >> 7 & 1) != 0)) {
        lstrcpynA(param_2,local_10c,param_3);
        param_2[param_3 + -1] = '\0';
        _SfList_Destroy_4(local_120);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < LVar1);
  }
  _SfLoadString_16(DAT_00647204,0x4f78,param_2,param_3);
  _SfList_Destroy_4(local_120);
  return;
}


