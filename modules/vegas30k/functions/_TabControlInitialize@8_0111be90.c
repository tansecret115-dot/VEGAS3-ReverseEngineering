/* Module: vegas30k.dll
   Function: _TabControlInitialize@8
   Address: 0111be90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _TabControlInitialize_8(HINSTANCE param_1,LPCSTR param_2)

{
  WNDCLASSA *pWVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSA local_28;
  
                    /* 0x11be90  1340  _TabControlInitialize@8 */
  pWVar1 = &local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar1->style = 0;
    pWVar1 = (WNDCLASSA *)((int)pWVar1 + 4);
  }
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_01119e00;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hbrBackground = (HBRUSH)&DAT_00000010;
  local_28.hInstance = param_1;
  local_28.style = 0x4000;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


