/* Module: vegas30k.dll
   Function: DoneBarInitialize
   Address: 01072800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall DoneBarInitialize(struct HINSTANCE__ *,char const *) */

int DoneBarInitialize(HINSTANCE__ *param_1,char *param_2)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
                    /* 0x72800  32  ?DoneBarInitialize@@YGHPAUHINSTANCE__@@PBD@Z */
  local_28.lpszClassName = param_2;
  local_28.lpfnWndProc = (WNDPROC)&LAB_010725d0;
  local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  local_28.hIcon = (HICON)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.hbrBackground = (HBRUSH)&DAT_00000006;
  local_28.hInstance = param_1;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.style = 0x4003;
  AVar1 = RegisterClassA(&local_28);
  return (uint)(AVar1 != 0);
}


