/* Module: vegas30.exe
   Function: FUN_00444c50
   Address: 00444c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444c50(HINSTANCE param_1,HWND param_2,HMENU param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  tagWNDCLASSA local_28;
  
  puVar3 = (undefined4 *)&stack0xffffffd4;
  BVar1 = GetClassInfoA(param_1,"vfx.PropPageSite",&local_28);
  if (BVar1 == 0) {
    for (iVar2 = 10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_00444cf0;
    local_28.hInstance = param_1;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "vfx.PropPageSite";
    local_28.hbrBackground = (HBRUSH)0x10;
    RegisterClassA(&local_28);
  }
  CreateWindowExA(0x10100,"vfx.PropPageSite",(LPCSTR)0x0,0x46010000,0,0,0,0,param_2,param_3,param_1,
                  (LPVOID)0x0);
  return;
}


