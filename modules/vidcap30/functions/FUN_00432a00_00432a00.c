/* Module: vidcap30.exe
   Function: FUN_00432a00
   Address: 00432a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00432a00(int param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_430 [2];
  undefined1 local_428 [16];
  undefined4 auStack_418 [259];
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x184));
    if (BVar1 != 0) {
      iVar2 = _SfList_CreateExZ_32(local_428,4,0x10,0x10,2,0,0,0);
      if (-1 < iVar2) {
        local_430[0] = 0x400;
        (**(code **)(*DAT_005bba24 + 0xc))(DAT_005bba24,local_430);
        iVar2 = FUN_00433390(local_430[0]);
        _SfList_Destroy_4(local_430[0]);
        if (-1 < iVar2) {
          hWnd = *(HWND *)(param_1 + 0x184);
          puVar3 = auStack_418;
          for (iVar2 = 0x104; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          SendMessageA(hWnd,0x602,0,(LPARAM)auStack_418);
          iVar2 = FUN_00434050(uStack_c);
          if (-1 < iVar2) {
            _SfSetMetricBinary_16(DAT_005ba29c,0x44e,auStack_418,0x410);
          }
        }
      }
    }
  }
  return;
}


