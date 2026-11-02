/* Module: pngu3266.dll
   Function: FUN_60600cc9
   Address: 60600cc9
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60600cc9(void *this,CPNEvent *param_1)

{
  CPNPaintDC local_228 [548];
  
  if (*(int *)(param_1 + 0xc) == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_228,this);
    FUN_60600d15(this,(int *)local_228);
    CPNPaintDC::~CPNPaintDC(local_228);
  }
  XPNDialog::OnEvent(this,param_1);
  return;
}


