/* Module: pngu3266.dll
   Function: DoModal
   Address: 60602dbb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNOpenFileDialog::DoModal(void) */

ulong __thiscall CPNOpenFileDialog::DoModal(CPNOpenFileDialog *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char local_158;
  undefined4 local_157;
  DWORD local_54;
  HWND local_50;
  char *local_48;
  DWORD local_3c;
  char *local_38;
  DWORD local_34;
  LPCSTR local_28;
  LPCSTR local_24;
  ulong local_20;
  LPCSTR local_18;
  CPNOpenFileDialog *local_14;
  code *local_10;
  void *local_8;
  
                    /* 0x12dbb  967  ?DoModal@CPNOpenFileDialog@@UAEKXZ */
  XPNDialog::PreDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  memset(&local_54,0,0x4c);
  local_158 = DAT_60649ac0;
  puVar7 = &local_157;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  pcVar4 = *(char **)(this + 0xd0);
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  strcpy(&local_158,pcVar4);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x10c))();
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar3 + 0x10c))();
      piVar1 = piVar3;
    }
    (**(code **)(*piVar1 + 0x110))(this);
  }
  pcVar4 = operator_new(*(int *)(*(int *)(this + 0xdc) + -8) + 2);
  if (pcVar4 != (char *)0x0) {
    strcpy(pcVar4,*(char **)(this + 0xdc));
    pcVar5 = pcVar4;
    do {
      pcVar5 = FUN_6061bb40(pcVar5,'|');
      if (pcVar5 == (char *)0x0) break;
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != (LPCSTR)0x0);
    pcVar4[*(int *)(*(int *)(this + 0xdc) + -8) + 1] = '\0';
  }
  local_38 = &local_158;
  local_54 = 0x4c;
  local_34 = 0x104;
  local_28 = (LPCSTR)(-(uint)(*(int *)(*(uint *)(this + 0xe8) - 8) != 0) & *(uint *)(this + 0xe8));
  local_24 = (LPCSTR)(-(uint)(*(int *)(*(uint *)(this + 0xf4) - 8) != 0) & *(uint *)(this + 0xf4));
  local_3c = *(int *)(this + 0x10c) + 1;
  if (piVar1 == (int *)0x0) {
    local_50 = (HWND)0x0;
  }
  else {
    local_50 = (HWND)piVar1[3];
  }
  local_48 = pcVar4;
  local_20 = TranslateFlags(this);
  local_10 = OFNHookProc;
  if (*(int *)(*(LPCSTR *)(this + 0x100) + -8) != 0) {
    local_18 = *(LPCSTR *)(this + 0x100);
  }
  local_14 = this;
  if (((byte)this[0x110] & 0x10) == 0) {
    local_8 = (void *)GetOpenFileNameA((LPOPENFILENAMEA)&local_54);
  }
  else {
    local_8 = (void *)GetSaveFileNameA((LPOPENFILENAMEA)&local_54);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x110))(0);
  }
  if (local_8 != (void *)0x0) {
    FUN_60618ed0(this + 0xd0,local_38);
    *(DWORD *)(this + 0x10c) = local_3c - 1;
  }
  if (pcVar4 != (char *)0x0) {
    operator_delete(pcVar4);
  }
  XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  return (ulong)local_8;
}


