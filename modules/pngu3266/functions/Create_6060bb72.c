/* Module: pngu3266.dll
   Function: Create
   Address: 6060bb72
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNDialog::Create(unsigned long,class CPNWindow *) */

int __thiscall XPNDialog::Create(XPNDialog *this,ulong param_1,CPNWindow *param_2)

{
  undefined4 unaff_retaddr;
  
                    /* 0x1bb72  922  ?Create@XPNDialog@@UAEHKPAVCPNWindow@@@Z */
  (**(code **)(*(int *)this + 0x18))(param_2);
  *(undefined4 *)(this + 0xb8) = unaff_retaddr;
  return 1;
}


