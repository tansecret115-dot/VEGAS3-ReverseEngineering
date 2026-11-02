/* Module: sfppack2.dll
   Function: FUN_5cd14ee0
   Address: 5cd14ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cd14ee0(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3)

{
  WNDCLASSA *pWVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSA local_28;
  
  DAT_5cd62f64 = param_2;
  pWVar1 = &local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar1->style = 0;
    pWVar1 = (WNDCLASSA *)((int)pWVar1 + 4);
  }
  local_28.hInstance = param_1;
  local_28.lpszClassName = param_3;
  local_28.lpfnWndProc = (WNDPROC)&LAB_5cd14130;
  local_28.hCursor = (HCURSOR)FUN_5cd070c0((undefined4 *)0x0,(LPCSTR)0x7f00);
  local_28.style = 0x400b;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


