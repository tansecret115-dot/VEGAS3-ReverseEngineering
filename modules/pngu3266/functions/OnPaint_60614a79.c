/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60614a79
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNWizardManager::OnPaint(class CPNDC *) */

void __thiscall XPNWizardManager::OnPaint(XPNWizardManager *this,CPNDC *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CPNPen local_128 [108];
  CPNPen local_bc [108];
  CPNColor local_50 [36];
  CPNPen *local_2c;
  CPNPen *local_24;
  int local_20 [5];
  undefined4 local_c;
  int local_8;
  
                    /* 0x24a79  1677  ?OnPaint@XPNWizardManager@@IAEXPAVCPNDC@@@Z */
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  CPNColor::CPNColor(local_50,0x10);
  CPNPen::CPNPen(local_128);
  CPNPen::CPNPen(local_bc);
  (**(code **)(*(int *)this + 0x3c))(local_20);
  CPNPen::SetColor(local_128,local_50);
  iVar2 = local_20[3];
  iVar1 = local_20[3] + -0x30;
  local_8 = local_20[0] + 0xc;
  local_20[4] = local_20[2] + -0xc;
  if (param_1 != (CPNDC *)0x0) {
    local_24 = XPNDC::SetPen((XPNDC *)param_1,local_128);
  }
  (**(code **)(*(int *)param_1 + 0x10))(local_8,iVar1,local_20[4],iVar1);
  CPNColor::SetToSystemColor(local_50,0x14);
  CPNPen::SetColor(local_bc,local_50);
  if (param_1 != (CPNDC *)0x0) {
    local_2c = XPNDC::SetPen((XPNDC *)param_1,local_bc);
  }
  (**(code **)(*(int *)param_1 + 0x10))(local_8,iVar2 + -0x2f,local_20[4],iVar2 + -0x2f);
  piVar3 = *(int **)(*(int *)(this + 0xd4) + *(int *)(this + 0x100) * 4);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x40))(piVar3);
  if ((piVar3 != (int *)0x0) || (piVar3 = *(int **)(this + 0x108), piVar3 != (int *)0x0)) {
    local_c = 0;
    local_8 = 0;
    (**(code **)(*piVar3 + 0x40))(&local_c);
    (**(code **)(*(int *)param_1 + 0x54))(piVar3,0xc,0xc,local_c,local_8,0,0,10);
  }
  if (param_1 != (CPNDC *)0x0) {
    XPNDC::SetPen((XPNDC *)param_1,local_2c);
    if (param_1 != (CPNDC *)0x0) {
      XPNDC::SetPen((XPNDC *)param_1,local_24);
    }
  }
  CPNPen::~CPNPen(local_bc);
  CPNPen::~CPNPen(local_128);
  CPNColor::~CPNColor(local_50);
  return;
}


