/* Module: vegas30.exe
   Function: FUN_004fff40
   Address: 004fff40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fff40(LPVOID param_1,HWND param_2)

{
  HWND pHVar1;
  LONG LVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    SetParent(*(HWND *)((int)param_1 + 0x84),param_2);
    if (*(HWND *)((int)param_1 + 0x88) != (HWND)0x0) {
      DestroyWindow(*(HWND *)((int)param_1 + 0x88));
    }
    pHVar1 = CreateWindowExA(0x20000,"SysListView32","",0x5601010f,0,0,0,0,param_2,
                             (HMENU)&DAT_00000065,DAT_006471fc,param_1);
    *(HWND *)((int)param_1 + 0x88) = pHVar1;
    LVar2 = GetWindowLongA(*(HWND *)((int)param_1 + 0x84),0);
    uVar3 = FUN_004fffe0(LVar2);
    FUN_004fae80(LVar2,uVar3,1);
    FUN_004faf40(LVar2);
  }
  return 0;
}


