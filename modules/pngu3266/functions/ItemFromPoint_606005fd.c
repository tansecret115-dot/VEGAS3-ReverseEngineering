/* Module: pngu3266.dll
   Function: ItemFromPoint
   Address: 606005fd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNListBox::ItemFromPoint(class CPNxPoint)const  */

ulong __thiscall CPNListBox::ItemFromPoint(CPNListBox *this,uint param_2,int param_3)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x105fd  1530  ?ItemFromPoint@CPNListBox@@UBEKVCPNxPoint@@@Z */
  uVar1 = CPNWindow::SendMessageA((CPNWindow *)this,0x1a9,0,param_3 << 0x10 | param_2 & 0xffff);
  if ((((uVar1 != 0xffffffff) &&
       (CPNWindow::SendMessageA((CPNWindow *)this,0x198,uVar1,(long)&local_14),
       local_14 <= (int)param_2)) && ((int)param_2 <= local_c)) &&
     ((local_10 <= param_3 && (param_3 <= local_8)))) {
    return uVar1 & 0xffff;
  }
  return 0xffffffff;
}


