/* Module: wmfplug2.dll
   Function: FUN_0043c920
   Address: 0043c920
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0043c920(HINSTANCE param_1,LPCSTR param_2)

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
  local_28.lpfnWndProc = (WNDPROC)&LAB_0043a890;
  local_28.hCursor = (HCURSOR)FUN_0041fbb0((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hbrBackground = (HBRUSH)0x10;
  local_28.hInstance = param_1;
  local_28.style = 0x4000;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


