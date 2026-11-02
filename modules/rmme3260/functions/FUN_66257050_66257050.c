/* Module: rmme3260.dll
   Function: FUN_66257050
   Address: 66257050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66257050(UINT *param_1,UINT param_2,UINT param_3)

{
  BOOL BVar1;
  tagMSG local_20;
  
  BVar1 = GetMessageA(&local_20,(HWND)0x0,param_2,param_3);
  if (BVar1 == 1) {
    *param_1 = local_20.message;
    param_1[1] = local_20.wParam;
    param_1[2] = local_20.lParam;
    param_1[3] = (UINT)local_20.hwnd;
    return 0;
  }
  return 0x80004005;
}


