/* Module: pngu3266.dll
   Function: OnMoveSizeNCLButtonDown
   Address: 605f95b5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNWindow::OnMoveSizeNCLButtonDown(unsigned long,unsigned int,long) */

int __thiscall
CPNWindow::OnMoveSizeNCLButtonDown(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  CPNWindow *pvParam;
  CPNScreenDC *this_00;
  undefined4 uVar1;
  CPNPen *this_01;
  CPNColor *pCVar2;
  CPNBitmapImage *this_02;
  int *piVar3;
  HPEN pHVar4;
  long lVar5;
  long lVar6;
  CPNColor local_44 [32];
  tagRECT local_24;
  LOGBRUSH local_14;
  uint local_8;
  
                    /* 0x95b5  1655  ?OnMoveSizeNCLButtonDown@CPNWindow@@IAEHKIJ@Z */
  local_8 = 0;
  if (param_2 == 2) {
    pvParam = this + 0xa0;
    SystemParametersInfoA(0x26,0,pvParam,0);
    *(uint *)pvParam = (uint)(*(uint *)pvParam == 0);
    (**(code **)(*(int *)this + 0x84))();
    *(int *)(this + 0x88) = (int)(short)param_3;
    *(undefined4 *)(this + 0x84) = 1;
    *(int *)(this + 0x8c) = (int)param_3._2_2_;
    GetWindowRect(*(HWND *)(this + 0xc),&local_24);
    *(LONG *)(this + 0x90) = local_24.left;
    *(LONG *)(this + 0x98) = local_24.right;
    *(LONG *)(this + 0x94) = local_24.top;
    *(LONG *)(this + 0x9c) = local_24.bottom;
    if (*(uint *)pvParam != 0) {
      param_3 = 1;
      if (((byte)this[8] & 2) != 0) {
        param_3 = 4;
      }
      this_00 = operator_new(0x1df);
      if (this_00 == (CPNScreenDC *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = CPNScreenDC::CPNScreenDC(this_00);
      }
      *(undefined4 *)(this + 0xa4) = uVar1;
      this_01 = operator_new(0x6b);
      if (this_01 == (CPNPen *)0x0) {
        uVar1 = 0;
      }
      else {
        lVar6 = 1;
        local_8 = 1;
        lVar5 = param_3;
        pCVar2 = (CPNColor *)CPNColor::CPNColor(local_44,'\0','\0','\0');
        uVar1 = CPNPen::CPNPen(this_01,pCVar2,lVar5,lVar6);
      }
      *(undefined4 *)(this + 0xa8) = uVar1;
      if ((local_8 & 1) != 0) {
        CPNColor::~CPNColor(local_44);
      }
      this_02 = operator_new(0x33);
      if (this_02 == (CPNBitmapImage *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)CPNBitmapImage::CPNBitmapImage(this_02);
      }
      *(int **)(this + 0xac) = piVar3;
      (**(code **)(*piVar3 + 0x24))(1);
      local_14.lbStyle = 3;
      local_14.lbColor = 0;
      local_14.lbHatch = *(ULONG_PTR *)(*(int *)(this + 0xac) + 0x14);
      pHVar4 = ExtCreatePen(0x12100,param_3,&local_14,0,(DWORD *)0x0);
      if (pHVar4 == (HPEN)0x0) {
        CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 0xa8));
      }
      else {
        CPNPen::Attach(*(CPNPen **)(this + 0xa8),pHVar4);
      }
      ::SendMessageA(*(HWND *)(this + 0xc),0x231,0,0);
    }
  }
  return *(int *)(this + 0x84);
}


