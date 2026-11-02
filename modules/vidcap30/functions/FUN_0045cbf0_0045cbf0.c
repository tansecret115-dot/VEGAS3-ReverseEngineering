/* Module: vidcap30.exe
   Function: FUN_0045cbf0
   Address: 0045cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045cbf0(int param_1,HWND param_2,int param_3)

{
  uint uVar1;
  WPARAM wParam;
  undefined4 uVar2;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  LPCRITICAL_SECTION local_134;
  LRESULT local_130;
  undefined1 local_12c [8];
  undefined4 local_124;
  undefined1 *local_118;
  undefined4 local_114;
  undefined1 local_104 [260];
  
  local_134 = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(local_134);
  wParam = 0;
  local_140 = _SfList_CreateExZ_32(&local_13c,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  local_138 = 0;
  local_130 = SendMessageA(param_2,0x1004,0,0);
  if (0 < local_130) {
    do {
      if (local_140 < 0) goto LAB_0045ccda;
      local_118 = local_104;
      local_124 = 0;
      local_114 = 0x104;
      SendMessageA(param_2,0x102d,wParam,(LPARAM)local_12c);
      uVar2 = 0xffffffff;
      uVar1 = SendMessageA(param_2,0x102c,wParam,0xf000);
      local_140 = FUN_0045c0e0(local_13c,local_104,(uVar1 >> 0xc) - 1,uVar2);
      wParam = wParam + 1;
    } while ((int)wParam < local_130);
  }
  if (local_140 < 0) {
LAB_0045ccda:
    FUN_0045bcb0(local_13c);
    uVar2 = local_138;
  }
  else {
    FUN_0045bcb0(*(undefined4 *)(param_1 + 0x1c));
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = local_13c;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x14);
  FUN_0045c240();
  LeaveCriticalSection(local_134);
  return uVar2;
}


