/* Module: pngu3266.dll
   Function: Create
   Address: 605f6b61
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNWindow::Create(char const *,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *) */

int __thiscall
CPNWindow::Create(CPNWindow *this,char *param_1,CPNWindow *param_2,long param_3,long param_4,
                 long param_5,long param_6,ulong param_7,ulong param_8,char *param_9)

{
  long nWidth;
  long nHeight;
  long X;
  long Y;
  ulong uVar1;
  HINSTANCE hInstance;
  int iVar2;
  CPNWindow *this_00;
  uint dwStyle;
  long local_14;
  long local_10;
  long local_c;
  long local_8;
  
                    /* 0x6b61  916  ?Create@CPNWindow@@IAEHPBDPAV1@JJJJKK0@Z */
  uVar1 = TranslateToWindowsStyle(this,&param_7);
  dwStyle = uVar1 | param_8;
  *(ulong *)(this + 8) = param_7;
  *(CPNWindow **)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x58) = 1;
  *(ulong *)(this + 0x5c) = param_7 & 0x200;
  if ((param_7 & 0x80000000) == 0) {
    param_8 = 0;
    if (param_2 != (CPNWindow *)0x0) {
      param_8 = (ulong)GetHWND(param_2);
    }
    PNGuiHookWindowCreate((int)this);
    if ((((byte)this[10] & 0x10) == 0) || (this_00 = param_2, param_2 == (CPNWindow *)0x0)) {
      this_00 = this;
    }
    local_c = param_3;
    local_8 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    MapToCoordinateSystem(this_00,(CPNxPoint *)&local_c);
    MapToCoordinateSystem(this_00,(CPNxSize *)&local_14);
    Y = local_8;
    X = local_c;
    nHeight = local_10;
    nWidth = local_14;
    hInstance = (HINSTANCE)_PNGuiGetAppHandle_0();
    CreateWindowExA(*(DWORD *)(this + 0x14),param_1,param_9,dwStyle,X,Y,nWidth,nHeight,(HWND)param_8
                    ,(HMENU)0x0,hInstance,(LPVOID)0x0);
    _PNGuiUnhookWindowCreate_0();
  }
  else {
    *(long *)(this + 0x68) = param_5;
    *(long *)(this + 0x6c) = param_6;
    *(long *)(this + 0x60) = param_3;
    *(long *)(this + 100) = param_4;
  }
  if (param_2 != (CPNWindow *)0x0) {
    AddChild(param_2,this);
  }
  if ((*(int *)(this + 0xc) == 0) && (((byte)this[0xb] & 0x80) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


