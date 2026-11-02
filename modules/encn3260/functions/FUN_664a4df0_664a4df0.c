/* Module: encn3260.dll
   Function: FUN_664a4df0
   Address: 664a4df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a4df0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *_Str;
  WNDCLASSA local_34;
  int *local_c;
  int *local_8;
  
  DAT_664f0730 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    piVar1 = (int *)FUN_664a2cf0(*(int *)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_664dcb00,&local_c);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*local_c + 0xc))(local_c,s_DoNotShowFullScreenWindow_664e3388,&local_8)
        ;
        if (iVar2 == 0) {
          _Str = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
          iVar2 = atoi(_Str);
          DAT_664f0730 = (uint)(iVar2 == 1);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
      }
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (DAT_664f072c == 0) {
    local_34.style = 3;
    local_34.lpfnWndProc = CPNFullScreenWindow::WindowProc;
    local_34.cbClsExtra = 0;
    local_34.cbWndExtra = 4;
    local_34.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_34.hIcon = (HICON)0x0;
    local_34.hCursor = (HCURSOR)0x0;
    local_34.hbrBackground = GetStockObject(4);
    local_34.lpszMenuName = (LPCSTR)0x0;
    local_34.lpszClassName = PTR_s_RMAFullScreenWindowClass_664e31ec;
    RegisterClassA(&local_34);
  }
  DAT_664f072c = DAT_664f072c + 1;
  return;
}


