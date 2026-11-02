/* Module: vegas30.exe
   Function: FUN_0045ac20
   Address: 0045ac20
   Source: Ghidra pseudocode (Stage 10 batch) */


ATOM FUN_0045ac20(HINSTANCE param_1)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_28;
  
  FUN_0045aff0(param_1);
  FUN_004b9fe0(param_1);
  FUN_00477f40(param_1);
  pWVar3 = &local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pWVar3->style = 0;
    pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
  }
  local_28.lpszClassName = "SonicFoundry_TrackView";
  local_28.lpfnWndProc = FUN_0045ab80;
  local_28.style = 0xb;
  local_28.hInstance = param_1;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  AVar1 = RegisterClassA(&local_28);
  return AVar1;
}


