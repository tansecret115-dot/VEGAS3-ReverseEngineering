/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60615367
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNImageControl::OnEvent(class CPNEvent &) */

int __thiscall CPNImageControl::OnEvent(CPNImageControl *this,CPNEvent *param_1)

{
  int iVar1;
  int iVar2;
  CPNPaintDC local_230 [548];
  int local_c;
  int local_8;
  
                    /* 0x25367  1607  ?OnEvent@CPNImageControl@@MAEHAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 1;
  if (iVar1 == 0x65) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      (**(code **)(*(int *)this + 0x130))(&local_c);
    }
  }
  else if (iVar1 == 0x66) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      (**(code **)(*(int *)this + 0x134))(&local_c);
    }
  }
  else if (iVar1 == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_230,(CPNWindow *)this);
    OnPaint(this,(CPNDC *)local_230);
    CPNPaintDC::~CPNPaintDC(local_230);
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x24) == 0x215) {
      *(undefined4 *)(this + 0x106) = 0;
    }
  }
  return iVar2;
}


