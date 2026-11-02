/* Module: pngu3266.dll
   Function: AttachWindowItem
   Address: 60601ae5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNProgress::AttachWindowItem(unsigned long,class CPNWindow *) */

int __thiscall CPNProgress::AttachWindowItem(CPNProgress *this,ulong param_1,CPNWindow *param_2)

{
  int iVar1;
  
                    /* 0x11ae5  822  ?AttachWindowItem@CPNProgress@@UAEHKPAVCPNWindow@@@Z */
  iVar1 = CPNWindow::AttachWindowItem((CPNWindow *)this,param_1,param_2);
  CPNWindow::SendMessageA((CPNWindow *)this,0x401,0,0x640000);
  return iVar1;
}


