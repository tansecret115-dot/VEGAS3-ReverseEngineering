/* Module: g2plug.dll
   Function: FUN_5f813ce0
   Address: 5f813ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813ce0(void *this,HWND param_1)

{
  int iVar1;
  UINT UVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  UVar2 = IsDlgButtonChecked(param_1,0x3ef);
  *(UINT *)(iVar1 + 0x657) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x3f1);
  *(UINT *)(iVar1 + 0x65b) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0x3f2);
  *(UINT *)(iVar1 + 0x65f) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,1000);
  *(UINT *)(iVar1 + 0x150) = UVar2;
  return 0;
}


