/* Module: vidcap30.exe
   Function: FUN_00499be0
   Address: 00499be0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00499be0(HINSTANCE param_1,LPCSTR param_2)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_28;
  
  pWVar3 = &local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pWVar3->style = 0;
    pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
  }
  local_28.style = 0x4200;
  local_28.lpfnWndProc = (WNDPROC)&LAB_004988a0;
  local_28.hInstance = param_1;
  local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
  local_28.lpszClassName = param_2;
  AVar1 = RegisterClassA(&local_28);
  return AVar1 != 0;
}


