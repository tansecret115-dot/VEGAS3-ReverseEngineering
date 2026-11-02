/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060beb2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNCustomText::OnEvent(class CPNEvent &) */

int __thiscall XPNCustomText::OnEvent(XPNCustomText *this,CPNEvent *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  _PNxWindow *p_Var3;
  CPNPaintDC local_27c [548];
  _PNxWindow local_58 [36];
  undefined4 local_34 [9];
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1beb2  1618  ?OnEvent@XPNCustomText@@UAEHAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0xc);
  local_8 = 1;
  if (iVar1 == 0x65) {
    local_10 = (int)*(short *)(param_1 + 0x20);
    local_c = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      OnPrimaryBtnDown(this,(CPNxPoint *)&local_10);
    }
  }
  else if (iVar1 == 0x66) {
    local_10 = (int)*(short *)(param_1 + 0x20);
    local_c = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      OnPrimaryBtnUp(this,(CPNxPoint *)&local_10);
    }
  }
  else if (iVar1 == 0xb0) {
    (**(code **)(*(int *)this + 0xd4))(local_34);
    puVar2 = local_34;
    p_Var3 = local_58;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)p_Var3 = *puVar2;
      puVar2 = puVar2 + 1;
      p_Var3 = p_Var3 + 4;
    }
    CPNPaintDC::CPNPaintDC(local_27c,local_58);
    OnPaint(this,(CPNDC *)local_27c);
    CPNPaintDC::~CPNPaintDC(local_27c);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}


