/* Module: pngu3266.dll
   Function: GetWindowRect
   Address: 6060da6e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNWindow::GetWindowRect(class CPNxRect &) */

void __thiscall XPNWindow::GetWindowRect(XPNWindow *this,CPNxRect *param_1)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1da6e  1423  ?GetWindowRect@XPNWindow@@QAEXAAVCPNxRect@@@Z */
  (**(code **)(*(int *)this + 0x38))(&local_14);
  (**(code **)(*(int *)this + 0x50))(&local_c);
  *(int *)param_1 = local_c;
  *(int *)(param_1 + 8) = local_c + local_14;
  *(int *)(param_1 + 4) = local_8;
  *(int *)(param_1 + 0xc) = local_8 + local_10;
  return;
}


