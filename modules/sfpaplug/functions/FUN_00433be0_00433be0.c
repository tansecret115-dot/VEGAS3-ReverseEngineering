/* Module: sfpaplug.dll
   Function: FUN_00433be0
   Address: 00433be0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00433be0(HINSTANCE param_1,LPCSTR param_2)

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
  local_28.lpfnWndProc = (WNDPROC)&LAB_00431b50;
  local_28.hCursor = (HCURSOR)FUN_00415e10((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.hbrBackground = (HBRUSH)0x10;
  local_28.hInstance = param_1;
  local_28.style = 0x4000;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


