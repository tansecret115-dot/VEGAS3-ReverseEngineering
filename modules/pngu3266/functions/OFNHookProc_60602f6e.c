/* Module: pngu3266.dll
   Function: OFNHookProc
   Address: 60602f6e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: static unsigned int __stdcall CPNOpenFileDialog::OFNHookProc(struct HWND__ *,unsigned
   int,unsigned int,long) */

uint CPNOpenFileDialog::OFNHookProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  CPNWindow *this;
  HWND pHVar1;
  void *this_00;
  int *piVar2;
  
                    /* 0x12f6e  1582  ?OFNHookProc@CPNOpenFileDialog@@KGIPAUHWND__@@IIJ@Z */
  if (param_2 == 2) {
    this_00 = (void *)PNGuiGetMapHandle();
    pHVar1 = GetParent(param_1);
    piVar2 = (int *)FUN_60619de0(this_00,(uint)pHVar1);
    (**(code **)(*piVar2 + 200))();
  }
  else if (param_2 == 0x110) {
    this = *(CPNWindow **)(param_4 + 0x40);
    pHVar1 = GetParent(param_1);
    CPNWindow::Attach(this,pHVar1);
  }
  return 0;
}


