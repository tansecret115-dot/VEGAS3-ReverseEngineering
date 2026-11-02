/* Module: vegas30k.dll
   Function: _MeterInitialize@12
   Address: 0107bdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _MeterInitialize_12(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3)

{
  WNDCLASSA *pWVar1;
  ATOM AVar2;
  int iVar3;
  WNDCLASSA local_28;
  
                    /* 0x7bdd0  676  _MeterInitialize@12 */
  DAT_01206124 = param_2;
  pWVar1 = &local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pWVar1->style = 0;
    pWVar1 = (WNDCLASSA *)((int)pWVar1 + 4);
  }
  local_28.hInstance = param_1;
  local_28.lpszClassName = param_3;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0107b020;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.style = 0x400b;
  AVar2 = RegisterClassA(&local_28);
  return AVar2 != 0;
}


