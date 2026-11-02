/* Module: vidcap30.exe
   Function: _MeterInitialize@12
   Address: 00510d70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _MeterInitialize_12(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3)

{
  WNDCLASSA *pWVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSA local_28;
  
                    /* 0x110d70  179  _MeterInitialize@12 */
  DAT_005b8054 = param_2;
  pWVar1 = &local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar1->style = 0;
    pWVar1 = (WNDCLASSA *)((int)pWVar1 + 4);
  }
  local_28.hInstance = param_1;
  local_28.lpszClassName = param_3;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0050ffc0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.style = 0x400b;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


