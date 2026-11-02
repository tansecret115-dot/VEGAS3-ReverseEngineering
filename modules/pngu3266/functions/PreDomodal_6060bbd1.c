/* Module: pngu3266.dll
   Function: PreDomodal
   Address: 6060bbd1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNDialog::PreDomodal(class CPNWindow *) */

void __thiscall XPNDialog::PreDomodal(XPNDialog *this,CPNWindow *param_1)

{
  DWORD DVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  CPNEvent local_30 [44];
  
                    /* 0x1bbd1  1721  ?PreDomodal@XPNDialog@@UAEXPAVCPNWindow@@@Z */
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  DVar1 = GetTickCount();
  CPNEvent::CPNEvent(local_30,2,0xbf,(CPNRouter *)this,DVar1,uVar3,uVar4,uVar5);
  if (param_1 != (CPNWindow *)0x0) {
    this = (XPNDialog *)param_1;
  }
  while( true ) {
    iVar2 = (**(code **)(*(int *)this + 0x14))();
    if (iVar2 == 0) break;
    this = (XPNDialog *)(**(code **)(*(int *)this + 0x14))();
  }
  (**(code **)(*(int *)this + 0xdc))(local_30);
  (**(code **)(*(int *)this + 4))(local_30);
  CPNEvent::~CPNEvent(local_30);
  return;
}


