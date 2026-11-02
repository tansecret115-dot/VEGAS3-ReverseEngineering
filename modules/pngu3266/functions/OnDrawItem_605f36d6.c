/* Module: pngu3266.dll
   Function: OnDrawItem
   Address: 605f36d6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNButton::OnDrawItem(class CPNEvent &) */

void __thiscall CPNButton::OnDrawItem(CPNButton *this,CPNEvent *param_1)

{
  int iVar1;
  uint uVar2;
  CPNDC local_1e4 [480];
  
                    /* 0x36d6  1597  ?OnDrawItem@CPNButton@@QAEXAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(uint *)(iVar1 + 0x10);
  if ((*(int *)(this + 200) == 0) && ((uVar2 & 1) == 0)) {
    param_1 = (CPNEvent *)0x0;
  }
  else {
    param_1 = (CPNEvent *)0x1;
  }
  CPNDC::CPNDC(local_1e4);
  CPNDC::Attach(local_1e4,*(HDC__ **)(iVar1 + 0x18));
  (**(code **)(*(int *)this + 0x134))(local_1e4,param_1,uVar2 & 4);
  CPNDC::~CPNDC(local_1e4);
  return;
}


