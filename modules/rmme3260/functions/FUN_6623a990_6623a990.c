/* Module: rmme3260.dll
   Function: FUN_6623a990
   Address: 6623a990
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623a990(int param_1)

{
  int *piVar1;
  int iVar2;
  char *_Str;
  WNDCLASSA local_34;
  int *local_c;
  int *local_8;
  
  DAT_6627cf38 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    piVar1 = (int *)FUN_662389e0(*(int *)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_6626abb8,&local_c);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*local_c + 0xc))(local_c,s_DoNotShowFullScreenWindow_6626fe68,&local_8)
        ;
        if (iVar2 == 0) {
          _Str = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
          iVar2 = atoi(_Str);
          DAT_6627cf38 = (uint)(iVar2 == 1);
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
  if (DAT_6627cf34 == 0) {
    local_34.style = 3;
    local_34.lpfnWndProc = CPNFullScreenWindow::WindowProc;
    local_34.cbClsExtra = 0;
    local_34.cbWndExtra = 4;
    local_34.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_34.hIcon = (HICON)0x0;
    local_34.hCursor = (HCURSOR)0x0;
    local_34.hbrBackground = GetStockObject(4);
    local_34.lpszMenuName = (LPCSTR)0x0;
    local_34.lpszClassName = PTR_s_RMAFullScreenWindowClass_6626fcc8;
    RegisterClassA(&local_34);
  }
  DAT_6627cf34 = DAT_6627cf34 + 1;
  return;
}


