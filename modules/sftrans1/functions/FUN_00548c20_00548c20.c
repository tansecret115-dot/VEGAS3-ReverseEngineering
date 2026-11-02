/* Module: sftrans1.dll
   Function: FUN_00548c20
   Address: 00548c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00548c20(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  HWND hWnd;
  INITCOMMONCONTROLSEX local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_00550110(1);
  if (*(int *)(param_1 + 0x1c8) != 0) {
    local_34.dwSize = 8;
    local_34.dwICC = 4;
    BVar2 = InitCommonControlsEx(&local_34);
    if (BVar2 == 0) {
      return 0x8004e701;
    }
    hWnd = CreateWindowExA(0,"tooltips_class32","",0x80000001,-0x80000000,-0x80000000,-0x80000000,
                           -0x80000000,*(HWND *)(param_1 + 4),(HMENU)0x0,
                           *(HINSTANCE *)(DAT_00622478 + 8),(LPVOID)0x0);
    *(HWND *)(param_1 + 0x1b0) = hWnd;
    if (hWnd == (HWND)0x0) {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      return uVar1;
    }
    local_24 = *(undefined4 *)(param_1 + 4);
    local_2c = 0x2c;
    local_28 = 0x1a1;
    local_1c = *(undefined4 *)(param_1 + 0x138);
    local_18 = *(undefined4 *)(param_1 + 0x13c);
    local_14 = *(undefined4 *)(param_1 + 0x140);
    local_10 = *(undefined4 *)(param_1 + 0x144);
    local_c = *(undefined4 *)(DAT_00622478 + 8);
    local_8 = 0xffffffff;
    local_4 = 0;
    local_20 = local_24;
    SendMessageA(hWnd,0x404,0,(LPARAM)&local_2c);
    SendMessageA(*(HWND *)(param_1 + 0x1b0),0x411,0,(LPARAM)&local_2c);
  }
  return uVar1;
}


