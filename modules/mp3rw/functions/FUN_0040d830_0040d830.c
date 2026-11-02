/* Module: mp3rw.dll
   Function: FUN_0040d830
   Address: 0040d830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d830(LPVOID param_1,int param_2)

{
  LPCSTR lpWindowName;
  BOOL BVar1;
  int iVar2;
  tagWNDCLASSA *ptVar3;
  tagWNDCLASSA local_28;
  
  lpWindowName = FUN_0041f9f0(DAT_004a811c,0x28c6);
  BVar1 = GetClassInfoA(DAT_004a8110,"Spike.Splash",&local_28);
  if (BVar1 == 0) {
    ptVar3 = &local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar3->style = 0;
      ptVar3 = (tagWNDCLASSA *)&ptVar3->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0040d910;
    local_28.hInstance = DAT_004a8110;
    local_28.hCursor = (HCURSOR)FUN_0042f940(0x7f00);
    local_28.hbrBackground = (HBRUSH)0x10;
    local_28.lpszClassName = "Spike.Splash";
    local_28.cbWndExtra = 4;
    RegisterClassA(&local_28);
  }
  DAT_004a84dc = CreateWindowExA(0x100,"Spike.Splash",lpWindowName,0x90880000,0,0,0,0,
                                 *(HWND *)(param_2 + 0x224),(HMENU)0x0,DAT_004a8110,param_1);
  SetWindowLongA(DAT_004a84dc,0,param_2);
  UpdateWindow(DAT_004a84dc);
  return;
}


