/* Module: sfppack3.dll
   Function: FUN_5cc53780
   Address: 5cc53780
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cc53780(HINSTANCE param_1,LPCSTR param_2)

{
  WNDCLASSA *pWVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSA local_28;
  
  pWVar1 = &local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar1->style = 0;
    pWVar1 = (WNDCLASSA *)((int)pWVar1 + 4);
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5cc52d30;
  local_28.hCursor = (HCURSOR)FUN_5cc4d600((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)0x6;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 4;
  local_28.style = 0x400b;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


