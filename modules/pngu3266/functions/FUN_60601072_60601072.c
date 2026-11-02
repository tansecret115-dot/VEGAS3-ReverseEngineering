/* Module: pngu3266.dll
   Function: FUN_60601072
   Address: 60601072
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60601072(void *this,char *param_1,CPNxRect *param_2)

{
  HDC hDC;
  undefined4 uVar1;
  CPNDC local_1e4 [480];
  
  hDC = GetDC(*(HWND *)((int)this + 0xc));
  if ((hDC != (HDC)0x0) && (param_1 != (char *)0x0)) {
    CPNDC::CPNDC(local_1e4,hDC);
    CPNDC::DrawTextExA(local_1e4,param_1,param_2,0x81);
    uVar1 = ftol();
    *(undefined4 *)(param_2 + 8) = uVar1;
    ReleaseDC(*(HWND *)((int)this + 0xc),hDC);
    CPNDC::~CPNDC(local_1e4);
  }
  return;
}


