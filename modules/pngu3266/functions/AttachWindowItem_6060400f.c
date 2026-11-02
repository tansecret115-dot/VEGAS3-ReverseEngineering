/* Module: pngu3266.dll
   Function: AttachWindowItem
   Address: 6060400f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCheckedListbox::AttachWindowItem(unsigned long,class CPNWindow
   *) */

int __thiscall
CPNCheckedListbox::AttachWindowItem(CPNCheckedListbox *this,ulong param_1,CPNWindow *param_2)

{
  HBITMAP h;
  int iVar1;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
                    /* 0x1400f  820  ?AttachWindowItem@CPNCheckedListbox@@UAEHKPAVCPNWindow@@@Z */
  h = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff7);
  *(HBITMAP *)(this + 0xcc) = h;
  GetObjectA(h,0x18,local_1c);
  *(int *)(this + 0xc4) = local_18 / 4;
  *(int *)(this + 200) = local_14 / 3;
  iVar1 = CPNWindow::AttachWindowItem((CPNWindow *)this,param_1,param_2);
  return iVar1;
}


