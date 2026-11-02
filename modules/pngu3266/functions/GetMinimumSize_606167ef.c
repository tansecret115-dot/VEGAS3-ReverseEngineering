/* Module: pngu3266.dll
   Function: GetMinimumSize
   Address: 606167ef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNAnimButton::GetMinimumSize(class CPNxSize &) */

int __thiscall XPNAnimButton::GetMinimumSize(XPNAnimButton *this,CPNxSize *param_1)

{
  CPNFont *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  CPNClientDC local_2fc [484];
  char local_118;
  undefined4 local_117;
  CPNFont *local_10;
  int local_c;
  int local_8;
  
                    /* 0x267ef  1266  ?GetMinimumSize@XPNAnimButton@@QAEHAAVCPNxSize@@@Z */
  pCVar1 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
  local_118 = DAT_60649ac0;
  puVar3 = &local_117;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  (**(code **)(*(int *)this + 0x118))(&local_118,0x104);
  CPNClientDC::CPNClientDC(local_2fc,(CPNWindow *)this);
  if (&stack0x00000000 != (undefined1 *)0x2fc) {
    local_10 = XPNDC::SetFont((XPNDC *)local_2fc,pCVar1);
  }
  local_c = 0;
  local_8 = 0;
  CPNDC::GetTextExtent((CPNDC *)local_2fc,&local_118,(CPNxSize *)&local_c);
  *(int *)param_1 = *(int *)(this + 0x14e) + 3 + local_c;
  iVar2 = strcmp(&DAT_60649ac0,&local_118);
  if (iVar2 != 0) {
    *(int *)param_1 = *(int *)param_1 + 4;
  }
  iVar2 = *(int *)(this + 0x152);
  if (*(int *)(this + 0x152) <= local_8) {
    iVar2 = local_8;
  }
  *(int *)(param_1 + 4) = iVar2 + 3;
  if (&stack0x00000000 != (undefined1 *)0x2fc) {
    XPNDC::SetFont((XPNDC *)local_2fc,local_10);
  }
  CPNClientDC::~CPNClientDC(local_2fc);
  return 1;
}


